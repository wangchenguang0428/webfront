import java.awt.*;
import javax.swing.*;
import java.awt.event.*;
import java.sql.*;
public class tankGame extends JFrame implements Runnable,ActionListener {
	Container c=this.getContentPane();
	JMenuBar jmb;
	JMenu game,mount,help,record;
	JMenuItem start,reset,exit,setGame,record1,record2,content;
	CardLayout myCard;
	static final int stage=8;
	panel p[]=new panel[stage];
	startPanel sp[]=new startPanel[stage];
	gameOver go=new gameOver();
	Thread t,t1;
	connectDB cdb;
	ResultSet rs;
	int s=0,total1=0,total2=0,life=3,count=0,stage1,tankCount,speed,shotSpeed,person=1,select=1;
	boolean b=true,b1=false,save=false,cont=false,boss=false;
	public tankGame() {
		this.setTitle("Tank Game");
		myCard=new CardLayout();
		c.setLayout(myCard);
		jmb=new JMenuBar();
		game=new JMenu("游戏(G)");
		game.setMnemonic('G');
		mount=new JMenu("设置(T)");
		mount.setMnemonic('T');
		record=new JMenu("游戏记录(C)");
		record.setMnemonic('C');
		help=new JMenu("帮助(P)");
		help.setMnemonic('P');
		start=new JMenuItem("开始游戏(S)");
		start.setMnemonic('S');
		reset=new JMenuItem("重置游戏(R)");
		reset.setMnemonic('R');
		exit=new JMenuItem("退出(X)");
		exit.setMnemonic('X');
		setGame=new JMenuItem("设置游戏(E)");
		setGame.setMnemonic('E');
		record1=new JMenuItem("单人游戏记录(I)");
		record1.setMnemonic('I');
		record2=new JMenuItem("双人游戏记录(D)");
		record2.setMnemonic('D');
		content=new JMenuItem("帮助主题(H)");
		content.setMnemonic('H');
		start.addActionListener(this);
		reset.addActionListener(this);
		setGame.addActionListener(this);
		record1.addActionListener(this);
		record2.addActionListener(this);
		content.addActionListener(this);
		exit.addActionListener(this) ;
		game.add(start);
		game.add(reset);
		game.addSeparator();
		game.add(exit);
		mount.add(setGame);
		mount.add(record);
		record.add(record1);
		record.add(record2);
		help.add(content);
		jmb.add(game);
		jmb.add(mount);
		jmb.add(help);
		this.setJMenuBar(jmb);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		for (int i=0;i<stage;i++) {
			sp[i]=new startPanel(i+1);
			c.add(sp[i],i+1+"");
		}
		c.add(go,(1+stage*2)+"");
		myCard.show(c,"1");
		this.setSize(600,500);
		this.setVisible(true);
		t=new Thread(this);
		t.start();
	}
	public void run() {
		while (true) {
			if (b1) {
				if (p[s].gameover) {
					total1+=p[s].score1;
					if (person==1)
						JOptionPane.showMessageDialog(null,"game over\nscore:"+total1);
					else if (person==2) {
						total2+=p[s].score2;
						JOptionPane.showMessageDialog(null,"game over\nscore:\n1P: "+total1+"\n2P: "+total2+"\ntotal: "+(total1+total2));
					}
					myCard.show(c,(1+stage*2)+"");
					jmb.setVisible(true);
					reset.setEnabled(true);
					start.setEnabled(false);
					break;
				}
				if (!p[s].islive&&b) {
				   	statScore ss1=new statScore(this,p[s].cyan1,p[s].pink1,p[s].red1,p[s].green1,p[s].b1,s+1);
				   	total1+=ss1.total;
				   	if (person==2) {
				   		statScore ss2=new statScore(this,p[s].cyan2,p[s].pink2,p[s].red2,p[s].green2,p[s].b2,s+1);
				   		total2+=ss2.total;
				   	}
				   	if (select==1||cont==true) {	
						s++;
						if (s==stage) {
							if (person==1)
								JOptionPane.showMessageDialog(null,"CONGRATULATION!\nscore: "+total1);
							else if (person==2)
								JOptionPane.showMessageDialog(null,"CONGRATULATION!\nscore:\n1P: "+total1+"\n2P: "+total2+"\ntotal: "+(total1+total2));		
							myCard.show(c,(1+stage*2)+"");
							reset.setEnabled(true);
							start.setEnabled(false);
							break;
						}
						myCard.show(c,s+1+"");
					}
					else {
						total1+=p[s].score1;
						if (person==1)
							JOptionPane.showMessageDialog(null,"game over\nscore:"+total1);
						else if (person==2) {
							total2+=p[s].score2;
							JOptionPane.showMessageDialog(null,"game over\nscore:\n1P: "+total1+"\n2P: "+total2+"\ntotal: "+(total1+total2));
						}
						myCard.show(c,(1+stage*2)+"");
						jmb.setVisible(true);
						reset.setEnabled(true);
						start.setEnabled(false);
						break;
					}
					b=false;
					b1=false;
					jmb.setVisible(true);
				}
				try {
					Thread.sleep(3000);
				}catch (InterruptedException e) {
					System.out.println (e);
				}
			}
		}
		if (select==1) {
			try {
				cdb=new connectDB();
				if (person==1)
					rs=cdb.executeQuery("select score from record1");
				else rs=cdb.executeQuery("select total from record2");
				while (rs.next()) {
					if (person==1) {
						if (total1>rs.getInt(1)) 
							save=true;
					}
					else if (person==2) {
						if ((total1+total2)>rs.getInt(1)) 
							save=true;
					}
					count++;
				}
				rs.close();
			}catch (SQLException se) {
				System.out.println (se);
			}
			if (save||count<10) {
				addRecord ar=new addRecord(this);
			}
		}
	}
	public void actionPerformed(ActionEvent e) {
		if (e.getSource().equals(start)) {
			if (select==1||cont==true) {
				if (s+1==3||s+1==6||s+1==8)
					boss=true;
				else boss=false;
				p[s]=new panel(this,s+1);
				c.add(p[s],s+1+stage+"");
			}
			myCard.show(c,s+1+stage+"");
			this.addKeyListener(p[s]);
			t1=new Thread(p[s]);
			t1.start();
			jmb.setVisible(false);
			b=true;
			b1=true;
			p[s].setFocusable(true);
			reset.setEnabled(false);
		}
		if (e.getSource().equals(reset)) {
			for (int i=0;i<stage;i++) {
				if (p[i]!=null)
					c.remove(p[i]);
			}
			s=0;
			total1=0;
			total2=0;
			count=0;
			person=1;
			select=1;
			b=true;
			b1=false;
			save=false;
			boss=false;
			myCard.show(c,"1");
			start.setEnabled(true);
			if (!t.isAlive()) {
				t=new Thread(this);
				t.start();
			}
		}
		if (e.getSource().equals(setGame)) {
			gameSetting gs=new gameSetting(this);
			if (select==2) {
				s=stage1-1;
				myCard.show(c,s+1+"");
				p[s]=new panel(this,s+1);
				c.add(p[s],s+1+stage+"");
			}
		}
		if (e.getSource().equals(record1)) {
			recordList1 rl=new recordList1();
		} 
		if (e.getSource().equals(record2)) {
			recordList2 rl=new recordList2();
		}
		if (e.getSource().equals(content)) {
			try{
				java.lang.Runtime.getRuntime().exec("cmd /c start help.txt");
			}
			catch(Exception e1) {
				e1.printStackTrace();
			}
		}
		if(e.getSource().equals(exit)) {
			System.exit(0);			
		}
	}
	public static void main(String[] args) {
		tankGame tg=new tankGame();
	}
}