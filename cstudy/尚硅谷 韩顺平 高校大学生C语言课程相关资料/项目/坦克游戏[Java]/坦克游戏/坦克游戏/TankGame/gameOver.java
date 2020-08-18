import java.awt.*;
import javax.swing.*;
public class gameOver extends JPanel {
	public gameOver() {}
	public void paint(Graphics g) {
		super.paint(g);
		g.setColor(Color.black);
		g.fillRect(0,0,400,300);
		g.setColor(Color.red);
		g.setFont(new Font("ºÚÌå",Font.BOLD,100));
		g.drawString("GAME",80,120);
		g.drawString("OVER",80,240);
	}
}