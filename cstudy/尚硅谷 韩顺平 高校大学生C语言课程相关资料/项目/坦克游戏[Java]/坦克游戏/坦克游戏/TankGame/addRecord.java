import java.awt.*;
import javax.swing.*;
import java.awt.event.*;
import java.sql.*;
public class addRecord extends JDialog implements ActionListener {
	tankGame tg;
	connectDB cdb;
	JTextField playerName1,playerName2;
	JButton btOK;
	JPanel p1,p2;
	public addRecord(tankGame tg1) {
		super(tg1,"保存记录",true);
		tg=tg1;
		Container c=this.getContentPane();
		c.setLayout(new BorderLayout());
		playerName1=new JTextField(10);
		btOK=new JButton("确定");
		p1=new JPanel();
		p2=new JPanel();
		p1.add(new JLabel("请输入姓名："));
		p1.add(new JLabel("1P: "));
		p1.add(playerName1);
		if (tg.person==2) {
			playerName2=new JTextField(10);
			p1.add(new JLabel("2P: "));
			p1.add(playerName2);
		}
		p2.add(btOK);
		c.add(p1,BorderLayout.CENTER);
		c.add(p2,BorderLayout.SOUTH);
		btOK.addActionListener(this);
		this.setModal(true);
		this.setSize(200,200);
		this.setVisible(true);
	}
	public void actionPerformed(ActionEvent e) {
		if (e.getSource().equals(btOK)) {
			String str1=playerName1.getText().trim();
			if (tg.person==1) {
				if (!str1.equals("")) {
					try {
						cdb=new connectDB();
						cdb.executeUpdate("insert into record1 values('"+str1+"',"+tg.total1+")");
						if (tg.count>10) {
							String sql="delete from record1 where score<=all(select score from record1)";
							cdb.executeUpdate(sql);
						}
					}catch (Exception ex) {
						System.out.println (ex);
					}
					this.dispose();
				}	
			}
			else if (tg.person==2) {
				String str2=playerName2.getText().trim();
				if (!str1.equals("")&&!str2.equals("")) {
					try {
						cdb=new connectDB();
						cdb.executeUpdate("insert into record2 values('"+str1+"','"+str2+"',"+tg.total1+","+tg.total2+","+(tg.total1+tg.total2)+")");
						if (tg.count>10) {
							String sql="delete from record1 where total<=all(select total from record2)";
							cdb.executeUpdate(sql);
						}
					}catch (Exception ex) {
						System.out.println (ex);
					}
					this.dispose();
				}	
			}
		}
	}
}