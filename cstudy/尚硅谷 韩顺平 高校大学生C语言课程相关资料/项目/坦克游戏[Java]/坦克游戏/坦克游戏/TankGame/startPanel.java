import java.awt.*;
import javax.swing.*;
public class startPanel extends JPanel {
	int stage;
	public startPanel(int st) {
		stage=st;
	}
	public void paint(Graphics g) {
		super.paint(g);
		g.setColor(Color.black);
		g.fillRect(0,0,400,300);
		g.setColor(Color.white);
		g.setFont(new Font("ËÎÌו",Font.PLAIN,30));
		g.drawString("stage:  "+stage,140,140);
	}
}