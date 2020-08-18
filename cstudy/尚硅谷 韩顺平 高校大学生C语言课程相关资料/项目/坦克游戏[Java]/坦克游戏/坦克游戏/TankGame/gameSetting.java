import java.awt.*;
import javax.swing.*;
import java.awt.event.*;
public class gameSetting extends JDialog implements ActionListener {
	tankGame tg1;
	JRadioButton jbsingle,jbdouble,jbnormal,jbselect;
	ButtonGroup bg1,bg2;
	JButton btOK,btCancel;
	JCheckBox contGame,haveBoss;
	JComboBox jcbStage,tankSpeed,shotSpeed;
	JTextField txtCount;
	JPanel p1,p2,p3,p4,p5,p6,p7,p8;
	public gameSetting(tankGame tg) {
		super(tg,"游戏设置",true);
		tg1=tg;
		Container c=this.getContentPane();
		c.setLayout(new GridLayout(8,1));
		p1=new JPanel();
        p2=new JPanel();
        p3=new JPanel();
        p4=new JPanel();
        p5=new JPanel();
        p6=new JPanel();
        p7=new JPanel();
        p8=new JPanel();
        jbsingle=new JRadioButton("单人游戏");
        jbdouble=new JRadioButton("双人游戏");
        jbnormal=new JRadioButton("正常游戏");
        jbselect=new JRadioButton("自选游戏");
        bg1=new ButtonGroup();
        bg2=new ButtonGroup();
        bg1.add(jbsingle);
        bg1.add(jbdouble);
        bg2.add(jbnormal);
        bg2.add(jbselect);
        jcbStage=new JComboBox();
        tankSpeed=new JComboBox();
        shotSpeed=new JComboBox();
        for (int i=1;i<=tg1.stage;i++)
        	jcbStage.addItem(i+"");
        for (int i=0;i<=15;i++)
        	tankSpeed.addItem(i+"");
        for (int i=0;i<=5;i++)
        	shotSpeed.addItem(i+"");
        txtCount=new JTextField(3);
        contGame=new JCheckBox("继续游戏");
        haveBoss=new JCheckBox("出现关底");
        btOK=new JButton("确定");
        btCancel=new JButton("取消");
        p1.add(jbsingle);
        p1.add(jbdouble);
        p2.add(jbnormal);
        p2.add(jbselect);
        p3.add(new JLabel("请选择关数:"));
        p3.add(jcbStage);
        p4.add(new JLabel("坦克速度:"));
        p4.add(tankSpeed);
        p5.add(new JLabel("子弹速度:"));
        p5.add(shotSpeed);
        p6.add(new JLabel("坦克数量(10-50):"));
        p6.add(txtCount);
        p7.add(contGame);
        p7.add(haveBoss);
        p8.add(btOK);
        p8.add(btCancel);
        if (tg1.person==1)
        	jbsingle.setSelected(true);
        else if (tg1.person==2)
        	jbdouble.setSelected(true);
        if (tg1.cont)
        	contGame.setSelected(true);
        else contGame.setSelected(false);
        if (tg1.boss)
        	haveBoss.setSelected(true);
        else haveBoss.setSelected(false);
        if (tg1.select==1) {
        	jbnormal.setSelected(true);
        	jcbStage.setEnabled(false);
        	tankSpeed.setEnabled(false);
        	shotSpeed.setEnabled(false);
        	txtCount.setEnabled(false);
        	contGame.setEnabled(false);
        	haveBoss.setEnabled(false);
        }
        else if (tg1.select==2) {
        	jbselect.setSelected(true);
        	jcbStage.setEnabled(true);
        	tankSpeed.setEnabled(true);
        	shotSpeed.setEnabled(true);
        	txtCount.setEnabled(true);
        	contGame.setEnabled(true);
        	haveBoss.setEnabled(true);
        }
        jbnormal.addActionListener(this);
        jbselect.addActionListener(this);
        btOK.addActionListener(this);
        btCancel.addActionListener(this);
        c.add(p1); 
        c.add(p2);
        c.add(p3); 
        c.add(p4);
        c.add(p5);
        c.add(p6);
        c.add(p7);
        c.add(p8);
        this.setSize(220,320);
        this.setVisible(true);
	}
	public void actionPerformed(ActionEvent e) {
		if (e.getSource().equals(jbnormal)) {
			jcbStage.setEnabled(false);
			tankSpeed.setEnabled(false);
        	shotSpeed.setEnabled(false);
        	txtCount.setEnabled(false);
        	contGame.setEnabled(false);
        	haveBoss.setEnabled(false);
		}
		if (e.getSource().equals(jbselect)) {
			jcbStage.setEnabled(true);
			tankSpeed.setEnabled(true);
        	shotSpeed.setEnabled(true);
        	txtCount.setEnabled(true);
        	contGame.setEnabled(true);
        	haveBoss.setEnabled(true);
		}
		if (e.getSource().equals(btOK)) {
			int count;
			if (jbselect.isSelected()) {
				try {
					count=Integer.parseInt(txtCount.getText().trim());
		    	}
		    	catch (Exception ex) {
		    		JOptionPane.showMessageDialog(null,"坦克数量必须是10-50之间的整数");
		    		return;
		    	}
		    	if (count>=10&&count<=50) {
		    		tg1.stage1=Integer.parseInt((String)jcbStage.getSelectedItem());
		    		tg1.speed=Integer.parseInt((String)tankSpeed.getSelectedItem());
		    		tg1.shotSpeed=Integer.parseInt((String)shotSpeed.getSelectedItem());
		    		tg1.tankCount=count;
		    		if (contGame.isSelected())
		    			tg1.cont=true;
		    		else tg1.cont=false;
		    		if (haveBoss.isSelected())
		    			tg1.boss=true;
		    		else tg1.boss=false;
		    	}
		    	else {
		    		JOptionPane.showMessageDialog(null,"坦克数量必须是10-50之间的整数");
		    		return;
		    	}
		  	}
		  	if (jbsingle.isSelected())
		    	tg1.person=1;
		    else if (jbdouble.isSelected())
		    	tg1.person=2;
		    if (jbnormal.isSelected())
		    	tg1.select=1;
		    else if (jbselect.isSelected())
		    	tg1.select=2;
		    this.dispose();
		}
		if (e.getSource().equals(btCancel)) {
			this.dispose();
		}
	} 
}