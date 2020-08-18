import java.awt.*;
import javax.swing.*;
import java.awt.event.*;
public class statScore extends JDialog {
	int t1,t2,t3,t4,tb,stage,sum,total;
	public statScore(JFrame owner,int t1,int t2,int t3,int t4,int tb,int s) {
		super(owner,"统计分数");
		Container c=this.getContentPane();
		this.t1=t1;
		this.t2=t2;
		this.t3=t3;
		this.t4=t4;
		this.tb=tb;
		stage=s;
		sum=t1+t2+t3+t4+tb;
		total=t1*100+t2*200+t3*300+t4*400+tb*1000;
		panel1 p=new panel1();
		c.add(p);
		Thread t=new Thread(p);
		t.start();
		this.setModal(true);
		this.setSize(400,350);
		this.setVisible(true);
	}
	class panel1 extends JPanel implements Runnable {
		int i=0;
		public panel1() {
			super();
			this.setBackground(Color.black);
		}
		public void drawTank(int x,int y,int m,int n,int t,Graphics g) {
			switch (t) {
				case 0: g.setColor(Color.cyan); break;
				case 1: g.setColor(Color.pink); break;
				case 2: g.setColor(Color.red); break;
				case 3: g.setColor(Color.green); break;
				case 4: g.setColor(Color.blue); break;
			}
			g.fill3DRect(x-n/2,y,(m-n)/2,m,false);
			g.fill3DRect(x-(m-n)/2,y+(m-n)/2,2*n-m,n,false);
			g.fill3DRect(x+(m-n)/2,y,(m-n)/2,m,false);
			g.fillOval(x-(m-n)/2,y+(m-n),m-n,m-n);
			g.drawLine(x,y+m/2,x,y);
			g.setColor(Color.white);
			g.setFont(new Font("宋体",Font.PLAIN,20));
			switch (t) {
				case 0: 
				g.drawString(t1+"",x+50,y+20); 
				g.drawString("100",x+150,y+20);
				g.drawString((100*t1)+"",x+250,y+20);
				break;
				case 1: 
				g.drawString(t2+"",x+50,y+20); 
				g.drawString("200",x+150,y+20);
				g.drawString((200*t2)+"",x+250,y+20);
				break;
				case 2: 
				g.drawString(t3+"",x+50,y+20); 
				g.drawString("300",x+150,y+20);
				g.drawString((300*t3)+"",x+250,y+20);
				break;
				case 3: 
				g.drawString(t4+"",x+50,y+20); 
				g.drawString("400",x+150,y+20);
				g.drawString((400*t4)+"",x+250,y+20);
				break;
				case 4: 
				g.drawString(tb+"",x+50,y+20); 
				g.drawString("1000",x+150,y+20);
				g.drawString((1000*tb)+"",x+250,y+20);
				break;
			}
			g.drawLine(x+100,y+10,x+110,y+20);
			g.drawLine(x+110,y+10,x+100,y+20);
			g.drawString("=",x+210,y+20);
		}
		public void paint(Graphics g) {
			super.paint(g);
			switch (i) {
				default:
				case 5:
				g.setColor(Color.white);
				g.setFont(new Font("宋体",Font.PLAIN,20));
				g.drawLine(20,240,380,240);
				g.drawString("enemy: ",30,270);
				g.drawString(sum+"",100,270);
				g.drawString("total: ",230,270);
				g.drawString(total+"",300,270);
				case 4: drawTank(50,190,36,24,4,g);
				case 3: drawTank(50,150,30,20,3,g);
				case 2: drawTank(50,110,30,20,2,g);
				case 1: drawTank(50,70,30,20,1,g);
				case 0: drawTank(50,30,30,20,0,g);
				g.drawString("stage  "+stage,150,20);
			}
		}
		public void run() {
			while (i<=5) {
				try {
					Thread.sleep(1000);
				}catch (InterruptedException e) {
					System.out.println (e);
				}
				i++;
				this.repaint();
			}
		}
	}
}