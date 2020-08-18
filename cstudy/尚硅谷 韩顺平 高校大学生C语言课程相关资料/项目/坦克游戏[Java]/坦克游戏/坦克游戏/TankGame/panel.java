import java.awt.*;
import javax.swing.*;
import java.awt.event.*;
import java.math.*;
import java.util.*;
class tank {
	int x,y,m,n,direction,x1,y1,m1,n1,speed,shotSpeed;
	boolean islive;
	private wall w;
	private tank t;
	public tank(int x1,int y1,int m1,int n1,int d) {
		x=x1;
		y=y1;
		m=m1;
		n=n1;
		direction=d;
		islive=true;
	}
	public void getCoordinate() {
		switch (direction) {
			case 0:
			x1=x-n/2;
			y1=y;
			m1=n;
			n1=m;
			break;
			case 1:
			x1=x;
			y1=y-n/2;
			m1=m;
			n1=n;
			break;
			case 2:
			x1=x-n/2;
			y1=y-m;
			m1=n;
			n1=m;
			break;
			case 3:
			x1=x-m;
			y1=y-n/2;
			m1=m;
			n1=n;
			break;
		}
	}
	public boolean judgeUp(Vector wal,Vector tk) {
		if (y<=0)
		    return false;
		else {
			for (int i=0;i<wal.size();i++) {
				w=(wall)wal.elementAt(i);
				if (y==w.y+w.n&&x-n/2<w.x+w.m&&x+n/2>w.x)
				    return false;
			}
			for (int i=0;i<tk.size();i++) {
				t=(tank)tk.elementAt(i);
				if (!t.equals(this)) {
					t.getCoordinate();
					if (y==t.y1+t.n1&&x-n/2<t.x1+t.m1&&x+n/2>t.x1)
						return false;
				}
			}
		}
		return true;
	}
	public boolean judgeDown(Vector wal,Vector tk) {
		if (y>=300)
		    return false;
		else {
			for (int i=0;i<wal.size();i++) {
				w=(wall)wal.elementAt(i);
				if (y==w.y&&x-n/2<w.x+w.m&&x+n/2>w.x)
				    return false;
			}
			for (int i=0;i<tk.size();i++) {
				t=(tank)tk.elementAt(i);
				if (!t.equals(this)) {
					t.getCoordinate();
					if (y==t.y1&&x-n/2<t.x1+t.m1&&x+n/2>t.x1)
					  return false;
				}
			}
		}
		return true;
	}
	public boolean judgeLeft(Vector wal,Vector tk) {
		if (x<=0)
		    return false;
		else {
			for (int i=0;i<wal.size();i++) {
				w=(wall)wal.elementAt(i);
				if (x==w.x+w.m&&y-n/2<w.y+w.n&&y+n/2>w.y)
				    return false;
			}
			for (int i=0;i<tk.size();i++) {
				t=(tank)tk.elementAt(i);
				if (!t.equals(this)) {
					t.getCoordinate();
					if (x==t.x1+t.m1&&y-n/2<t.y1+t.n1&&y+n/2>t.y1)
						return false;
				}
			}
		}    
		return true;
	}
	public boolean judgeRight(Vector wal,Vector tk) {
		if (x>=400)
		    return false;
		else {
			for (int i=0;i<wal.size();i++) {
				w=(wall)wal.elementAt(i);
				if (x==w.x&&y-n/2<w.y+w.n&&y+n/2>w.y)
				    return false;
			}
			for (int i=0;i<tk.size();i++) {
				t=(tank)tk.elementAt(i);
				if (!t.equals(this)) {
					t.getCoordinate();
					if (x==t.x1&&y-n/2<t.y1+t.n1&&y+n/2>t.y1)
						return false;
				}
			}
		}
		return true;
	}
	public void moveUp() {
		y--;
	}
	public void moveDown() {
		y++;
	}
	public void moveLeft() {
		x--;
	}
	public void moveRight() {
		x++;
	}
	public boolean judgeRotate(int d,Vector wal,Vector tk) {
		int i;
		if (direction!=d) {
			switch (direction) {
				case 0:
				switch (d) {
					case 1:
					if (x-m/2<0)
					    return false;
					for (i=0;i<wal.size();i++) {
						w=(wall)wal.elementAt(i);
						if (x-m/2>w.x&&x-m/2<w.x+w.m&&y+m/2>w.y&&y+m/2<w.y+w.n)
						    return false;
					}
					for (i=0;i<tk.size();i++) {
						t=(tank)tk.elementAt(i);
						if (!t.equals(this)) {
							t.getCoordinate();
							if (x-m/2>t.x1&&x-m/2<t.x1+t.m1&&y+m/2>t.y1&&y+m/2<t.y1+t.n1)
								return false;
						}
					}
					break;
					case 3:
					if (x+m/2>400)
					    return false;
					for (i=0;i<wal.size();i++) {
						w=(wall)wal.elementAt(i);
						if (x+m/2>w.x&&x+m/2<w.x+w.m&&y+m/2>w.y&&y+m/2<w.y+w.n)
						    return false;
					}
					for (i=0;i<tk.size();i++) {
						t=(tank)tk.elementAt(i);
						if (!t.equals(this)) {
							t.getCoordinate();
							if (x+m/2>t.x1&&x+m/2<t.x1+t.m1&&y+m/2>t.y1&&y+m/2<t.y1+t.n1)
								return false;
						}
					}
					break;
				}
				break;
				case 1:
				switch (d) {
					case 0:
					if (y-m/2<0)
					    return false;
					for (i=0;i<wal.size();i++) {
						w=(wall)wal.elementAt(i);
						if (x+m/2>w.x&&x+m/2<w.x+w.m&&y-m/2>w.y&&y-m/2<w.y+w.n)
						    return false;
					}
					for (i=0;i<tk.size();i++) {
						t=(tank)tk.elementAt(i);
						if (!t.equals(this)) {
							t.getCoordinate();
							if (x+m/2>t.x1&&x+m/2<t.x1+t.m1&&y-m/2>t.y1&&y-m/2<t.y1+t.n1)
								return false;
						}
					}
					break;
					case 2:
					if (y+m/2>300)
					    return false;
					for (i=0;i<wal.size();i++) {
						w=(wall)wal.elementAt(i);
						if (x+m/2>w.x&&x+m/2<w.x+w.m&&y+m/2>w.y&&y+m/2<w.y+w.n)
						    return false;
					}
					for (i=0;i<tk.size();i++) {
						t=(tank)tk.elementAt(i);
						if (!t.equals(this)) {
							t.getCoordinate();
							if (x+m/2>t.x1&&x+m/2<t.x1+t.m1&&y+m/2>t.y1&&y+m/2<t.y1+t.n1)
								return false;
						}
					}
					break;
				}
				break;
				case 2:
				switch (d) {
					case 1:
					if (x-m/2<0)
					    return false;
					for (i=0;i<wal.size();i++) {
						w=(wall)wal.elementAt(i);
						if (x-m/2>w.x&&x-m/2<w.x+w.m&&y-m/2>w.y&&y-m/2<w.y+w.n)
						    return false;
					}
					for (i=0;i<tk.size();i++) {
						t=(tank)tk.elementAt(i);
						if (!t.equals(this)) {
							t.getCoordinate();
							if (x-m/2>t.x1&&x-m/2<t.x1+t.m1&&y-m/2>t.y1&&y-m/2<t.y1+t.n1)
								return false;
						}
					}
					break;
					case 3:
					if (x+m/2>400)
					    return false;
					for (i=0;i<wal.size();i++) {
						w=(wall)wal.elementAt(i);
						if (x+m/2>w.x&&x+m/2<w.x+w.m&&y-m/2>w.y&&y-m/2<w.y+w.n)
						    return false;
					}
					for (i=0;i<tk.size();i++) {
						t=(tank)tk.elementAt(i);
						if (!t.equals(this)) {
							t.getCoordinate();
							if (x+m/2>t.x1&&x+m/2<t.x1+t.m1&&y-m/2>t.y1&&y-m/2<t.y1+t.n1)
								return false;
						}
					}
					break;
				}
				break;
				case 3:
				switch (d) {
					case 0:
					if (y-m/2<0)
					    return false;
					for (i=0;i<wal.size();i++) {
						w=(wall)wal.elementAt(i);
						if (x-m/2>w.x&&x-m/2<w.x+w.m&&y-m/2>w.y&&y-m/2<w.y+w.n)
						    return false;
					}
					for (i=0;i<tk.size();i++) {
						t=(tank)tk.elementAt(i);
						if (!t.equals(this)) {
							t.getCoordinate();
							if (x-m/2>t.x1&&x-m/2<t.x1+t.m1&&y-m/2>t.y1&&y-m/2<t.y1+t.n1)
								return false;
						}
					}
					break;
					case 2:
					if (y+m/2>300)
					    return false;
					for (i=0;i<wal.size();i++) {
						w=(wall)wal.elementAt(i);
						if (x-m/2>w.x&&x-m/2<w.x+w.m&&y+m/2>w.y&&y+m/2<w.y+w.n)
						    return false;
					}
					for (i=0;i<tk.size();i++) {
						t=(tank)tk.elementAt(i);
						if (!t.equals(this)) {
							t.getCoordinate();
							if (x-m/2>t.x1&&x-m/2<t.x1+t.m1&&y+m/2>t.y1&&y+m/2<t.y1+t.n1)
								return false;
						}
					}
					break;
				}
				break;
			}
		}
		return true;
	}
	public void rotate(int d) {
		if (direction!=d&&islive) {
			switch (direction) {
				case 0:
				switch (d) {
					case 1:
					x-=m/2;
					y+=m/2;
					break;
					case 2:
					y+=m;
					break;
					case 3:
					x+=m/2;
					y+=m/2;
					break;
				}
				break;
				case 1:
				switch (d) {
					case 0:
					x+=m/2;
					y-=m/2;
					break;
					case 2:
					x+=m/2;
					y+=m/2;
					break;
					case 3:
					x+=m;
					break;
				}
				break;
				case 2:
				switch (d) {
					case 0:
					y-=m;
					break;
					case 1:
					x-=m/2;
					y-=m/2;
					break;
					case 3:
					x+=m/2;
					y-=m/2;
					break;
				}
				break;
				case 3:
				switch (d) {
					case 0:
					x-=m/2;
					y-=m/2;
					break;
					case 1:
					x-=m;
					break;
					case 2:
					x-=m/2;
					y+=m/2;
					break;
				}
				break;
			}
			direction=d;
		}
	}
}
class shot implements Runnable {
	int x,y,direction,speed;
    boolean islive=true;
	public shot(int x1,int y1,int d,int s) {
		x=x1;
		y=y1;
		direction=d;
		speed=s;
	}
	public void run() {
		while (true) {
		    switch (direction) {
			    case 0: y--; break;
			    case 1: x--; break;
			    case 2: y++; break;
			    case 3: x++; break;
		    }
		    if (x<0||x>400||y<0||y>300)
		        islive=false;
		    if (!islive) break;
		    try {
		    	Thread.sleep(speed);
		    }catch(InterruptedException e) {}
		}  
	}
}
class wall {
	int x,y,m,n,type;
	boolean islive=true;
	public wall(int x1,int y1,int m1,int n1,int t) {
		x=x1;
		y=y1;
		m=m1;
		n=n1;
		type=t;
	}
}
class bomb {
	int x,y,type,count=0;
	boolean islive=true;
	public bomb(int x1,int y1,int t1) {
		x=x1;
		y=y1;
		type=t1;
	}
	public void bombProcedure() {
		if (type==0) {
			if (count>5)
				islive=false;
			else count++;
		}
		else if (type==1) {
			if (count>10)
				islive=false;
			else count++;
		}
		else {
			if (count>30)
				islive=false;
			else count++;
		}
	}
}
public class panel extends JPanel implements Runnable,KeyListener {
	tankGame tg;
    myTank mtk1,mtk2;
	enemyTank tank1,boss1,boss2;
	wall w;
	bomb b;
	Vector enemy=new Vector();
	Vector eShot=new Vector();
	Vector myShot1=new Vector();
	Vector myShot2=new Vector();
	Vector wallVect=new Vector();
	Vector bombVect=new Vector();
	Image bomb_1=null;
    Image bomb_2=null;
    Image bomb_3=null;
    MediaTracker tracker=null;
	int count,count1,count2,maxCount,postpone=0,score1=0,score2=0,stage,myLife1,myLife2,ms,mss;
	int cyan1=0,pink1=0,red1=0,green1=0,b1=0,cyan2=0,pink2=0,red2=0,green2=0,b2=0;
	boolean islive=true,begin=true,gameover=false,haveBoss;
	public panel(tankGame tg1,int stage1) {
		Thread t1;
		tg=tg1;
		stage=stage1;
		if (tg.select==1) {
			switch (stage) {
				case 1:
				case 2:
				case 3:
				ms=30;
				mss=10;
				if (tg.person==1) {
					count1=20;
					count=3;
					count2=3;
				}
				else if (tg.person==2) {
					count1=40;
					count=6;
					count2=6;
				}
				break;
				case 4:
				case 5:
				case 6:
				ms=20;
				mss=8;
				if (tg.person==1) {
					count1=25;
					count=4;
					count2=4;
				}
				else if (tg.person==2) {
					count1=50;
					count=8;
					count2=8;
				}
				break;
				case 7:
				case 8:
				ms=15;
				mss=5;
				if (tg.person==1) {
					count1=30;
					count=5;
					count2=5;
				}
				else if (tg.person==2) {
					count1=60;
					count=10;
					count2=10;
				}
				break;
			}
		}
		else {
			setTankCount(tg.tankCount);
			setSpeed(tg.speed,tg.shotSpeed);
		}
		switch (stage) {
			case 1: createWall1(); break;
			case 2: createWall2(); break;
			case 3: createWall3(); break;
			case 4: createWall4(); break;
			case 5: createWall5(); break;
			case 6: createWall6(); break;
			case 7: createWall7(); break;
			case 8: createWall8(); break;
		}
		myLife1=tg.life;
		myLife2=tg.life;
		haveBoss=tg.boss;
		if (tg.person==1) {
			mtk1=new myTank(200,270,30,20,0,1,ms,mss);
			t1=new Thread(mtk1);
			t1.start();
		}
		else if (tg.person==2) {
			mtk1=new myTank(170,270,30,20,0,1,ms,mss);
			t1=new Thread(mtk1);
			t1.start();
			mtk2=new myTank(230,270,30,20,0,2,ms,mss);
			t1=new Thread(mtk2);
			t1.start();
		}
		maxCount=count1-count;
		tracker=new MediaTracker(this);
		bomb_1 = Toolkit.getDefaultToolkit().getImage(panel.class.getResource("/bomb_1.gif"));
		tracker.addImage(bomb_1,10);
		bomb_2 = Toolkit.getDefaultToolkit().getImage(panel.class.getResource("/bomb_2.gif"));
		tracker.addImage(bomb_2,11);
		bomb_3 = Toolkit.getDefaultToolkit().getImage(panel.class.getResource("/bomb_3.gif"));
		tracker.addImage(bomb_3,12);
	}
	public void setTankCount(int tc) {
		count1=tc;
		if (tg.person==1) {
			count=4;
			count2=4;
		}
		else if (tg.person==2) {
			count=8;
			count2=8;
		}
		maxCount=count1-count;
	}
	public void setSpeed(int ts,int ss) {
		ms=30-ts;
		mss=10-ss;
	}
	public void createWall1() {
		for (int i=0;i<40;i++) {
			w=new wall(50+i*5,50,5,10,0);
			wallVect.add(w);
			w=new wall(50+i*5,60,5,10,0);
			wallVect.add(w);
		}
		for (int i=0;i<20;i++) {
			w=new wall(50+i*10,140,10,10,1);
			wallVect.add(w);
			w=new wall(50+i*10,150,10,10,1);
			wallVect.add(w);
		}
		w=new wall(50,240,200,20,2);
		wallVect.add(w);
	}
	public void createWall2() {
		for (int i=0;i<24;i++) {
			w=new wall(50+i*5,50,5,10,0);
			wallVect.add(w);
			w=new wall(50+i*5,60,5,10,0);
			wallVect.add(w);
			w=new wall(230+i*5,230,5,10,0);
			wallVect.add(w);
			w=new wall(230+i*5,240,5,10,0);
			wallVect.add(w);
		}
		for (int i=0;i<12;i++) {
			w=new wall(230+i*10,50,10,10,1);
			wallVect.add(w);
			w=new wall(230+i*10,60,10,10,1);
			wallVect.add(w);
			w=new wall(50+i*10,230,10,10,1);
			wallVect.add(w);
			w=new wall(50+i*10,240,10,10,1);
			wallVect.add(w);
		}
		w=new wall(50,140,120,20,2);
		wallVect.add(w);
		w=new wall(230,140,120,20,2);
		wallVect.add(w);
	}
	public void createWall3() {
		for (int i=0;i<4;i++) {
			w=new wall(50+i*5,50,5,10,0);
			wallVect.add(w);
			w=new wall(50+i*5,60,5,10,0);
			wallVect.add(w);
			w=new wall(190+i*5,50,5,10,0);
			wallVect.add(w);
			w=new wall(190+i*5,60,5,10,0);
			wallVect.add(w);
			w=new wall(330+i*5,50,5,10,0);
			wallVect.add(w);
			w=new wall(330+i*5,60,5,10,0);
			wallVect.add(w);
			w=new wall(50+i*5,140,5,10,0);
			wallVect.add(w);
			w=new wall(50+i*5,150,5,10,0);
			wallVect.add(w);
			w=new wall(190+i*5,140,5,10,0);
			wallVect.add(w);
			w=new wall(190+i*5,150,5,10,0);
			wallVect.add(w);
			w=new wall(330+i*5,140,5,10,0);
			wallVect.add(w);
			w=new wall(330+i*5,150,5,10,0);
			wallVect.add(w);
			w=new wall(50+i*5,230,5,10,0);
			wallVect.add(w);
			w=new wall(50+i*5,240,5,10,0);
			wallVect.add(w);
			w=new wall(190+i*5,230,5,10,0);
			wallVect.add(w);
			w=new wall(190+i*5,240,5,10,0);
			wallVect.add(w);
			w=new wall(330+i*5,230,5,10,0);
			wallVect.add(w);
			w=new wall(330+i*5,240,5,10,0);
			wallVect.add(w);
		}
		for (int i=0;i<2;i++) {
			w=new wall(120+i*10,95,10,10,1);
			wallVect.add(w);
			w=new wall(120+i*10,105,10,10,1);
			wallVect.add(w);
			w=new wall(260+i*10,95,10,10,1);
			wallVect.add(w);
			w=new wall(260+i*10,105,10,10,1);
			wallVect.add(w);
			w=new wall(120+i*10,195,10,10,1);
			wallVect.add(w);
			w=new wall(120+i*10,205,10,10,1);
			wallVect.add(w);
			w=new wall(260+i*10,195,10,10,1);
			wallVect.add(w);
			w=new wall(260+i*10,205,10,10,1);
			wallVect.add(w);
		}
	}
	public void createWall4() {
		for (int i=0;i<44;i++) {
			w=new wall(40,40+5*i,10,5,0);
			wallVect.add(w);
			w=new wall(50,40+5*i,10,5,0);
			wallVect.add(w);
			w=new wall(340,40+5*i,10,5,0);
			wallVect.add(w);
			w=new wall(350,40+5*i,10,5,0);
			wallVect.add(w);
		}
		for (int i=0;i<2;i++) {
			w=new wall(110+10*i,80,10,10,1);
			wallVect.add(w);
			w=new wall(110+10*i,90,10,10,1);
			wallVect.add(w);
			w=new wall(110+10*i,200,10,10,1);
			wallVect.add(w);
			w=new wall(110+10*i,210,10,10,1);
			wallVect.add(w);
			w=new wall(270+10*i,80,10,10,1);
			wallVect.add(w);
			w=new wall(270+10*i,90,10,10,1);
			wallVect.add(w);
			w=new wall(270+10*i,200,10,10,1);
			wallVect.add(w);
			w=new wall(270+10*i,210,10,10,1);
			wallVect.add(w);
		}
		w=new wall(60,140,120,20,2);
		wallVect.add(w);
		w=new wall(220,140,120,20,2);
		wallVect.add(w);
	}
	public void createWall5() {
		for (int i=0;i<14;i++) {
			w=new wall(30+i*5,50,5,10,0);
			wallVect.add(w);
			w=new wall(30+i*5,60,5,10,0);
			wallVect.add(w);
			w=new wall(30+i*5,140,5,10,0);
			wallVect.add(w);
			w=new wall(30+i*5,150,5,10,0);
			wallVect.add(w);
			w=new wall(30+i*5,230,5,10,0);
			wallVect.add(w);
			w=new wall(30+i*5,240,5,10,0);
			wallVect.add(w);
			w=new wall(120+i*5,50,5,10,0);
			wallVect.add(w);
			w=new wall(120+i*5,60,5,10,0);
			wallVect.add(w);
			w=new wall(120+i*5,230,5,10,0);
			wallVect.add(w);
			w=new wall(120+i*5,240,5,10,0);
			wallVect.add(w);
			w=new wall(210+i*5,50,5,10,0);
			wallVect.add(w);
			w=new wall(210+i*5,60,5,10,0);
			wallVect.add(w);
			w=new wall(210+i*5,230,5,10,0);
			wallVect.add(w);
			w=new wall(210+i*5,240,5,10,0);
			wallVect.add(w);
			w=new wall(300+i*5,50,5,10,0);
			wallVect.add(w);
			w=new wall(300+i*5,60,5,10,0);
			wallVect.add(w);
			w=new wall(300+i*5,140,5,10,0);
			wallVect.add(w);
			w=new wall(300+i*5,150,5,10,0);
			wallVect.add(w);
			w=new wall(300+i*5,230,5,10,0);
			wallVect.add(w);
			w=new wall(300+i*5,240,5,10,0);
			wallVect.add(w);
			w=new wall(80,70+i*5,10,5,0);
			wallVect.add(w);
			w=new wall(90,70+i*5,10,5,0);
			wallVect.add(w);
			w=new wall(30,160+i*5,10,5,0);
			wallVect.add(w);
			w=new wall(40,160+i*5,10,5,0);
			wallVect.add(w);
			w=new wall(300,70+i*5,10,5,0);
			wallVect.add(w);
			w=new wall(310,70+i*5,10,5,0);
			wallVect.add(w);
			w=new wall(350,160+i*5,10,5,0);
			wallVect.add(w);
			w=new wall(360,160+i*5,10,5,0);
			wallVect.add(w);
		}
		for (int i=0;i<32;i++) {
			w=new wall(120,70+i*5,10,5,0);
			wallVect.add(w);
			w=new wall(130,70+i*5,10,5,0);
			wallVect.add(w);
			w=new wall(170,70+i*5,10,5,0);
			wallVect.add(w);
			w=new wall(180,70+i*5,10,5,0);
			wallVect.add(w);
			w=new wall(210,70+i*5,10,5,0);
			wallVect.add(w);
			w=new wall(220,70+i*5,10,5,0);
			wallVect.add(w);
			w=new wall(260,70+i*5,10,5,0);
			wallVect.add(w);
			w=new wall(270,70+i*5,10,5,0);
			wallVect.add(w);
		}
	}
	public void createWall6() {
		for (int i=0;i<2;i++) {
			w=new wall(190+10*i,140,10,10,1);
			wallVect.add(w);
			w=new wall(190+10*i,150,10,10,1);
			wallVect.add(w);
		}
		for (int i=0;i<4;i++) {
			w=new wall(90+i*5,40,5,10,0);
			wallVect.add(w);
			w=new wall(90+i*5,50,5,10,0);
			wallVect.add(w);
			w=new wall(110+i*5,60,5,10,0);
			wallVect.add(w);
			w=new wall(110+i*5,70,5,10,0);
			wallVect.add(w);
			w=new wall(130+i*5,80,5,10,0);
			wallVect.add(w);
			w=new wall(130+i*5,90,5,10,0);
			wallVect.add(w);
			w=new wall(150+i*5,100,5,10,0);
			wallVect.add(w);
			w=new wall(150+i*5,110,5,10,0);
			wallVect.add(w);
			w=new wall(170+i*5,120,5,10,0);
			wallVect.add(w);
			w=new wall(170+i*5,130,5,10,0);
			wallVect.add(w);
			w=new wall(210+i*5,160,5,10,0);
			wallVect.add(w);
			w=new wall(210+i*5,170,5,10,0);
			wallVect.add(w);
			w=new wall(230+i*5,180,5,10,0);
			wallVect.add(w);
			w=new wall(230+i*5,190,5,10,0);
			wallVect.add(w);
			w=new wall(250+i*5,200,5,10,0);
			wallVect.add(w);
			w=new wall(250+i*5,210,5,10,0);
			wallVect.add(w);
			w=new wall(270+i*5,220,5,10,0);
			wallVect.add(w);
			w=new wall(270+i*5,230,5,10,0);
			wallVect.add(w);
			w=new wall(290+i*5,240,5,10,0);
			wallVect.add(w);
			w=new wall(290+i*5,250,5,10,0);
			wallVect.add(w);
			w=new wall(90+i*5,250,5,10,0);
			wallVect.add(w);
			w=new wall(90+i*5,240,5,10,0);
			wallVect.add(w);
			w=new wall(110+i*5,230,5,10,0);
			wallVect.add(w);
			w=new wall(110+i*5,220,5,10,0);
			wallVect.add(w);
			w=new wall(130+i*5,210,5,10,0);
			wallVect.add(w);
			w=new wall(130+i*5,200,5,10,0);
			wallVect.add(w);
			w=new wall(150+i*5,190,5,10,0);
			wallVect.add(w);
			w=new wall(150+i*5,180,5,10,0);
			wallVect.add(w);
			w=new wall(170+i*5,170,5,10,0);
			wallVect.add(w);
			w=new wall(170+i*5,160,5,10,0);
			wallVect.add(w);
			w=new wall(210+i*5,130,5,10,0);
			wallVect.add(w);
			w=new wall(210+i*5,120,5,10,0);
			wallVect.add(w);
			w=new wall(230+i*5,110,5,10,0);
			wallVect.add(w);
			w=new wall(230+i*5,100,5,10,0);
			wallVect.add(w);
			w=new wall(250+i*5,90,5,10,0);
			wallVect.add(w);
			w=new wall(250+i*5,80,5,10,0);
			wallVect.add(w);
			w=new wall(270+i*5,70,5,10,0);
			wallVect.add(w);
			w=new wall(270+i*5,60,5,10,0);
			wallVect.add(w);
			w=new wall(290+i*5,50,5,10,0);
			wallVect.add(w);
			w=new wall(290+i*5,40,5,10,0);
			wallVect.add(w);
		}
		w=new wall(100,140,20,20,2);
		wallVect.add(w);
		w=new wall(190,50,20,20,2);
		wallVect.add(w);
		w=new wall(190,240,20,20,2);
		wallVect.add(w);
		w=new wall(290,140,20,20,2);
		wallVect.add(w);
	}
	public void createWall7() {
		for (int i=0;i<20;i++) {
			w=new wall(70+i*5,40,5,10,0);
			wallVect.add(w);
			w=new wall(70+i*5,50,5,10,0);
			wallVect.add(w);
			w=new wall(230+i*5,40,5,10,0);
			wallVect.add(w);
			w=new wall(230+i*5,50,5,10,0);
			wallVect.add(w);
			w=new wall(70+i*5,140,5,10,0);
			wallVect.add(w);
			w=new wall(70+i*5,150,5,10,0);
			wallVect.add(w);
			w=new wall(230+i*5,140,5,10,0);
			wallVect.add(w);
			w=new wall(230+i*5,150,5,10,0);
			wallVect.add(w);
			w=new wall(70+i*5,240,5,10,0);
			wallVect.add(w);
			w=new wall(70+i*5,250,5,10,0);
			wallVect.add(w);
			w=new wall(230+i*5,240,5,10,0);
			wallVect.add(w);
			w=new wall(230+i*5,250,5,10,0);
			wallVect.add(w);
		}
		for (int i=0;i<2;i++) {
			w=new wall(110+i*10,90,10,10,1);
			wallVect.add(w);
			w=new wall(110+i*10,100,10,10,1);
			wallVect.add(w);
			w=new wall(270+i*10,90,10,10,1);
			wallVect.add(w);
			w=new wall(270+i*10,100,10,10,1);
			wallVect.add(w);
			w=new wall(110+i*10,190,10,10,1);
			wallVect.add(w);
			w=new wall(110+i*10,200,10,10,1);
			wallVect.add(w);
			w=new wall(270+i*10,190,10,10,1);
			wallVect.add(w);
			w=new wall(270+i*10,200,10,10,1);
			wallVect.add(w);
		}
		for (int i=0;i<3;i++) {
			w=new wall(30+i*160,40,20,220,2);
			wallVect.add(w);
		}
	}
	public void createWall8() {
		for (int i=0;i<20;i++) {
			w=new wall(50+i*5,40,5,10,0);
			wallVect.add(w);
			w=new wall(50+i*5,50,5,10,0);
			wallVect.add(w);
			w=new wall(250+i*5,40,5,10,0);
			wallVect.add(w);
			w=new wall(250+i*5,50,5,10,0);
			wallVect.add(w);
			w=new wall(50+i*5,240,5,10,0);
			wallVect.add(w);
			w=new wall(50+i*5,250,5,10,0);
			wallVect.add(w);
			w=new wall(250+i*5,240,5,10,0);
			wallVect.add(w);
			w=new wall(250+i*5,250,5,10,0);
			wallVect.add(w);
		}
		for (int i=0;i<36;i++) {
			w=new wall(90,60+i*5,10,5,0);
			wallVect.add(w);
			w=new wall(100,60+i*5,10,5,0);
			wallVect.add(w);
			w=new wall(290,60+i*5,10,5,0);
			wallVect.add(w);
			w=new wall(300,60+i*5,10,5,0);
			wallVect.add(w);
		}
		for (int i=0;i<2;i++) {
			w=new wall(30+10*i,140,10,10,1);
			wallVect.add(w);
			w=new wall(30+10*i,150,10,10,1);
			wallVect.add(w);
			w=new wall(190+10*i,140,10,10,1);
			wallVect.add(w);
			w=new wall(190+10*i,150,10,10,1);
			wallVect.add(w);
			w=new wall(350+10*i,140,10,10,1);
			wallVect.add(w);
			w=new wall(350+10*i,150,10,10,1);
			wallVect.add(w);
		}
		w=new wall(150,90,100,20,2);
		wallVect.add(w);
		w=new wall(150,190,100,20,2);
		wallVect.add(w);
	}
	public void drawTank(int x,int y,int m,int n,int d,int t,Graphics g) {
		switch (t) {
			case 0: g.setColor(Color.cyan); break;
			case 1: g.setColor(Color.pink); break;
			case 2: g.setColor(Color.red); break;
			case 3: g.setColor(Color.green); break;
			case 4: g.setColor(Color.blue); break;
		}
		switch (d) {
			case 0:
			g.fill3DRect(x-n/2,y,(m-n)/2,m,false);
			g.fill3DRect(x-(m-n)/2,y+(m-n)/2,2*n-m,n,false);
			g.fill3DRect(x+(m-n)/2,y,(m-n)/2,m,false);
		 	g.fillOval(x-(m-n)/2,y+(m-n),m-n,m-n);
			g.drawLine(x,y+m/2,x,y);
			break;
		    case 1:
		    g.fill3DRect(x,y-n/2,m,(m-n)/2,false);
		    g.fill3DRect(x+(m-n)/2,y-(m-n)/2,n,2*n-m,false);
		    g.fill3DRect(x,y+(m-n)/2,m,(m-n)/2,false);
		    g.fillOval(x+(m-n),y-(m-n)/2,m-n,m-n);
		    g.drawLine(x+m/2,y,x,y);
		    break;
		    case 2:
		    g.fill3DRect(x-n/2,y-m,(m-n)/2,m,false);
			g.fill3DRect(x-(m-n)/2,y-((m-n)/2+n),2*n-m,n,false);
			g.fill3DRect(x+(m-n)/2,y-m,(m-n)/2,m,false);
		 	g.fillOval(x-(m-n)/2,y-(m-n)*2,m-n,m-n);
			g.drawLine(x,y-m/2,x,y);
			break;
			case 3:
		    g.fill3DRect(x-m,y-n/2,m,(m-n)/2,false);
		    g.fill3DRect(x-((m-n)/2+n),y-(m-n)/2,n,2*n-m,false);
		    g.fill3DRect(x-m,y+(m-n)/2,m,(m-n)/2,false);
		    g.fillOval(x-(m-n)*2,y-(m-n)/2,m-n,m-n);
		    g.drawLine(x-m/2,y,x,y);
		    break;
		}
	}
	public void drawShot(int x,int y,int d,Graphics g) {
		switch (d) {
			case 0:
			g.draw3DRect(x,y,1,2,true); break;
			case 1:
			g.draw3DRect(x,y,2,1,true); break;
			case 2:
			g.draw3DRect(x,y-2,1,2,true); break;
			case 3:
			g.draw3DRect(x-2,y,2,1,true); break;
		}
	}
	public void drawBomb(bomb bb,Graphics g) {
		if (bb.type==0) {
			if (bb.count<5)
				g.drawImage(bomb_3,bb.x,bb.y,30,30,this);
		}
		else if (bb.type==1) {
			if (bb.count<3)
				g.drawImage(bomb_1,bb.x,bb.y,30,30,this);
			else if (bb.count<6)
				g.drawImage(bomb_2,bb.x,bb.y,30,30,this);
			else g.drawImage(bomb_3,bb.x,bb.y,30,30,this);
		}
		else {
			if (bb.count<3)
				g.drawImage(bomb_3,bb.x,bb.y,30,30,this);
			else if (bb.count<6)
				g.drawImage(bomb_2,bb.x,bb.y,30,30,this);
			else if (bb.count<9)
				g.drawImage(bomb_1,bb.x,bb.y,30,30,this);
			else if (bb.count<12)
				g.drawImage(bomb_1,bb.x,bb.y,40,40,this);
			else if (bb.count<16)
				g.drawImage(bomb_1,bb.x,bb.y,30,30,this);
			else if (bb.count<19)
				g.drawImage(bomb_2,bb.x,bb.y,30,30,this);
			else if (bb.count<24)
				g.drawImage(bomb_3,bb.x,bb.y,30,30,this);
			else g.drawString("1000",bb.x,bb.y);
		}
	}
	public void drawWall(wall wa,Graphics g) {
		switch (wa.type) {
			case 0:
			g.setColor(new Color(255,220,120)); break;
			case 1:
			g.setColor(Color.WHITE); break;
			case 2:
			g.setColor(Color.BLUE); break;
		}
		g.fill3DRect(wa.x,wa.y,wa.m,wa.n,true);
		g.setColor(Color.black);
		g.draw3DRect(wa.x,wa.y,wa.m,wa.n,false);
	}
	public void paint(Graphics g) {
		super.paint(g);
		enemyTank t;
		shot st;
		int i;
		g.setColor(Color.black);
		g.fillRect(0,0,400,300);
		g.setColor(Color.red);
		g.setFont(new Font("ËÎÌו",Font.PLAIN,20));
		g.drawString(count1+"",80,350);
		g.drawString(myLife1+"",180,350);
		if (tg.person==2) 
			g.drawString(myLife2+"",280,350);
		if (tg.boss) {
			if (tg.select==1&&stage==8)
				g.drawString("2",80,400);
			else g.drawString("1",80,400);
		}
		drawTank(50,330,30,20,0,0,g);
		g.setColor(new Color(255,221,120));
		drawTank(150,330,30,20,0,5,g);
		for (i=0;i<wallVect.size();i++) {
			w=(wall)wallVect.elementAt(i);
			drawWall(w,g);
		}
		if (mtk1.islive) {
			g.setColor(new Color(255,221,120));
			drawTank(mtk1.x,mtk1.y,mtk1.m,mtk1.n,mtk1.direction,5,g);
			if (mtk1.protect) {
				g.setColor(Color.white);
				g.drawOval(mtk1.px,mtk1.py,mtk1.m,mtk1.m);
			}
		}
		if (tg.person==2) {
			if (mtk2.islive) {
				g.setColor(Color.yellow);
				drawTank(250,330,30,20,0,5,g);
				drawTank(mtk2.x,mtk2.y,mtk2.m,mtk2.n,mtk2.direction,5,g);
				if (mtk2.protect) {
					g.setColor(Color.white);
					g.drawOval(mtk2.px,mtk2.py,mtk2.m,mtk2.m);
				}
			}
		}
		if (tg.boss) {
			drawTank(50,380,36,24,0,4,g);
			if (tg.select==1&&stage==8) {
				if (boss2!=null&&boss2.islive)
					drawTank(boss2.x,boss2.y,boss2.m,boss2.n,boss2.direction,4,g);
			}
			if (boss1!=null&&boss1.islive)
					drawTank(boss1.x,boss1.y,boss1.m,boss1.n,boss1.direction,4,g);
		}
		for (i=0;i<enemy.size();i++) {
			t=(enemyTank)enemy.elementAt(i);
			drawTank(t.x,t.y,t.m,t.n,t.direction,t.type,g);
		}
		g.setColor(Color.white);
		for (i=0;i<eShot.size();i++) {
			st=(shot)eShot.elementAt(i);
			drawShot(st.x,st.y,st.direction,g);
		}
		g.setColor(Color.yellow);
		for (i=0;i<myShot1.size();i++) {
			st=(shot)myShot1.elementAt(i);
			drawShot(st.x,st.y,st.direction,g);
		}
		for (i=0;i<myShot2.size();i++) {
			st=(shot)myShot2.elementAt(i);
			drawShot(st.x,st.y,st.direction,g);
		}
		for (i=0;i<bombVect.size();i++) {
			b=(bomb)bombVect.elementAt(i);
			drawBomb(b,g);
		}
	}
	public boolean judgeHitTank(shot s,tank e) {
		switch (e.direction) {
			case 0:
			if (s.x>=e.x-e.n/2&&s.x<=e.x+e.n/2&&s.y>=e.y&&s.y<=e.y+e.m)
			    return true;
			else return false;
			case 1:
			if (s.x>=e.x&&s.x<=e.x+e.m&&s.y>=e.y-e.n/2&&s.y<=e.y+e.n/2)
			    return true;
			else return false;
			case 2:
			if (s.x>=e.x-e.n/2&&s.x<=e.x+e.n/2&&s.y>=e.y-e.m&&s.y<=e.y)
			    return true;
			else return false;
			default:
			if (s.x>=e.x-e.m&&s.x<=e.x&&s.y>=e.y-e.n/2&&s.y<=e.y+e.n/2)
			    return true;
			else return false;
		}
	}
	public void tankCrash(myTank my,enemyTank e) {
		my.getCoordinate();
		e.getCoordinate();
		if (my.x1<e.x1+e.m1&&my.x1+my.m1>e.x1&&my.y1<e.y1+e.n1&&my.y1+my.n1>e.y1) {
			if (my.islive&&!my.protect) {
				my.islive=false;
		    	my.getCoordinate();
		    	b=new bomb(my.x1,my.y1,1);
		    	bombVect.add(b);
				if (e.type>=3&&e.life!=0) {
		    		b=new bomb(e.x,e.y,0);
		 	  		bombVect.add(b);
		 	  		e.life--;
		    	}
		    	else {
		    		if (e.type!=4) {
		    			e.islive=false;
		    			e.getCoordinate();
		    			b=new bomb(tank1.x1,tank1.y1,1);
			    		bombVect.add(b);
			    		count--;
		    			count1--;
		    		}
		    	}
		    }
		}
	}
	public boolean judgeShotCrash(shot s1,shot s2) {
		if (s1.direction!=s2.direction) {
			switch (s1.direction) {
				case 0:
				switch (s2.direction) {
					case 1:
					if (((s1.x==s2.x||s1.x==s2.x+1)&&s1.y==s2.y)||(s1.x==s2.x&&s1.y+1==s2.y))
					    return true;
					else return false;
					case 2:
					if (s1.x==s2.x&&s1.y==s2.y)
					    return true;
					else return false;
					case 3:
					if (((s1.x==s2.x||s1.x==s2.x+1)&&s1.y==s2.y)||(s1.x==s2.x+1&&s1.y+1==s2.y))
					    return true;
					else return false;
				}
				case 1:
				switch (s2.direction) {
					case 0:
					if (((s1.x==s2.x||s1.x+1==s2.x)&&s1.y==s2.y)||(s1.x==s2.x&&s1.y==s2.y+1))
					    return true;
					else return false;
					case 2:
					if (((s1.y==s2.y||s1.y==s2.y+1)&&s1.x==s2.x)||(s1.x+1==s2.x&&s1.y==s2.y+1))
					    return true;
					else return false;
					case 3:
					if (s1.x==s2.x&&s1.y==s2.y)
					    return true;
					else return false;
				}
				case 2:
				switch (s2.direction) {
					case 0:
					if (s1.x==s2.x&&s1.y==s2.y)
					    return true;
					else return false;
					case 1:
					if (((s1.y==s2.y||s1.y+1==s2.y)&&s1.x==s2.x)||(s1.x==s2.x+1&&s1.y+1==s2.y))
					    return true;
					else return false;
					case 3:
					if (((s1.x==s2.x||s1.x==s2.x+1)&&s1.y+1==s2.y)||(s1.x==s2.x+1&&s1.y==s2.y))
					    return true;
					else return false;
				}
				case 3:
				switch (s2.direction) {
					case 0:
					if (((s1.x==s2.x||s1.x+1==s2.x)&&s1.y==s2.y)||(s1.x+1==s2.x&&s1.y==s2.y+1))
					    return true;
					else return false;
					case 1:
					if (s1.x==s2.x&&s1.y==s2.y)
					    return true;
					else return false;
					case 2:
					if (((s1.x==s2.x||s1.x+1==s2.x)&&s1.y==s2.y+1)||(s1.x+1==s2.x&&s1.y==s2.y))
					    return true;
					else return false;
				}
			}
		}
		return false;
	}
	public void hitWall(Vector s1,Vector w1) {
		shot s;
		wall w;
		for (int i=0;i<s1.size();i++) {
			s=(shot)s1.elementAt(i);
			for (int j=0;j<w1.size();j++) {
				w=(wall)w1.elementAt(j);
				if (s.x>=w.x&&s.x<=w.x+w.m&&s.y>=w.y&&s.y<=w.y+w.n) {
					if (w.type==0) {
						s.islive=false;
						w.islive=false;
						b=new bomb(w.x,w.y,0);
		    			bombVect.add(b);
					}
					else if (w.type==1) {
						s.islive=false;
						b=new bomb(s.x,s.y,0);
		    			bombVect.add(b);
					}
			    }
			}
		}
	}
	public void addEnemyTank() {
		int i,j,k;
		Thread t2;
		if (begin) {
		    if (postpone<30)
		    	postpone++;
		    else {
		    	for (i=0;i<count2;i++) {
		    		if (tg.person==1)
						tank1=new enemyTank(15+85*i,30,30,20,2,5,5,0);
					else tank1=new enemyTank(15+40*i,30,30,20,2,5,5,0);
					enemy.add(tank1);
					t2=new Thread(tank1);
					t2.start();
				}
				postpone=0;
				begin=false;
			}
		}
		else {
		    if (count<count2&&maxCount>0) {
		    	if (postpone<30)
		    		postpone++;
		    	else {
		    		i=15+30*(int)(Math.random()*10);
		    		j=(int)(Math.random()*100+1);
		    		if (j<=70) 
		    			k=0;
		    		else if (j>70&&j<=80) 
		    			k=1;
		    		else if (j>80&&j<=90) 
		    			k=2;
		    		else k=3;
		    		tank1=new enemyTank(i,30,30,20,2,5,5,k);
		        	enemy.add(tank1);
		        	t2=new Thread(tank1);
		        	t2.start();
		        	count++;
		        	maxCount--;
		        	postpone=0;
		    	}
		    }
		}
	}
	public void addTank(int x,int y,int m,int n,int d,int r,int s,int t) {
		Thread tt;
		tank1=new enemyTank(x,y,m,n,d,r,s,t);
		enemy.add(tank1);
		tt=new Thread(tank1);
		tt.start();
		count1++;
	}
	public void appearBossTank() {
		Thread tb;
		int k;
		if (haveBoss) {
			if (tg.select==1) {
				if (stage==3) {
					boss1=new enemyTank(200,36,36,24,2,5,20,4);
					tb=new Thread(boss1);
					tb.start();
					count1++;
					addTank(10,30,30,20,2,5,5,0);
					addTank(94,30,30,20,2,5,5,0);
					addTank(306,30,30,20,2,5,5,0);
					addTank(390,30,30,20,2,5,5,0);
					if (tg.person==2) {
						addTank(10,270,30,20,0,5,5,0);
						addTank(390,270,30,20,0,5,5,0);
					}
				}
				else if (stage==6) {
					boss1=new enemyTank(200,36,36,24,2,5,20,4);
					tb=new Thread(boss1);
					tb.start();
					count1++;
					addTank(10,30,30,20,2,5,5,1);
					addTank(94,30,30,20,2,5,5,1);
					addTank(306,30,30,20,2,5,5,2);
					addTank(390,30,30,20,2,5,5,2);
					if (tg.person==2) {
						addTank(10,270,30,20,0,5,5,1);
						addTank(390,270,30,20,0,5,5,2);
					}
				}
				else if (stage==8) {
					boss1=new enemyTank(160,36,36,24,2,5,20,4);
					tb=new Thread(boss1);
					tb.start();
					boss2=new enemyTank(240,36,36,24,2,5,20,4);
					tb=new Thread(boss2);
					tb.start();
					count1+=2;
					addTank(10,30,30,20,2,5,5,3);
					addTank(85,30,30,20,2,5,5,3);
					addTank(315,30,30,20,2,5,5,3);
					addTank(390,30,30,20,2,5,5,3);
					if (tg.person==2) {
						addTank(10,270,30,20,0,5,5,3);
						addTank(390,270,30,20,0,5,5,3);
					}
				}
			}
			else if (tg.select==2) {
				boss1=new enemyTank(200,36,36,24,2,5,20,4);
				tb=new Thread(boss1);
				tb.start();
				count1++;
				k=(int)(Math.random()*4);
				addTank(10,30,30,20,2,5,5,k);
				k=(int)(Math.random()*4);
				addTank(94,30,30,20,2,5,5,k);
				k=(int)(Math.random()*4);
				addTank(306,30,30,20,2,5,5,k);
				k=(int)(Math.random()*4);
				addTank(390,30,30,20,2,5,5,k);
				if (tg.person==2) {
					k=(int)(Math.random()*4);
					addTank(10,270,30,20,0,5,5,k);
					k=(int)(Math.random()*4);
					addTank(390,270,30,20,0,5,5,k);
				}
			}
			haveBoss=false;
		}
	}
	public void run() {
		int i,j,k;
		shot s1,s2;
		Thread t3;
		while (true) {
			if (count1==0) {
				if (postpone<50)
					postpone++;
				else {
					if (!tg.boss) {
						islive=false;
						break;
					}
					else {
						synchronized(this) {
		    				this.appearBossTank();
		    			}
		    			postpone=0;
					}
				}
			}
			else {
				if (boss1!=null&&tg.boss) {
					if (boss2!=null&&tg.select==1&&stage==8) {
						if (!boss1.islive&&!boss2.islive) {
							for (i=0;i<enemy.size();i++) {
								tank1=(enemyTank)enemy.elementAt(i);
								tank1.islive=false;
		    					tank1.getCoordinate();
		    					b=new bomb(tank1.x1,tank1.y1,1);
			    				bombVect.add(b);
			    				count1--;
							}
							if (count1==0) count1++;
							if (postpone<50)
								postpone++;
							else {
								islive=false;
								break;
							}
						}
					}
					else {
						if (!boss1.islive) {
							for (i=0;i<enemy.size();i++) {
								tank1=(enemyTank)enemy.elementAt(i);
								tank1.islive=false;
		    					tank1.getCoordinate();
		    					b=new bomb(tank1.x1,tank1.y1,1);
			    				bombVect.add(b);
			    				count1--;
							}
							if (count1==0) count1++;
							if (postpone<50)
								postpone++;
							else {
								islive=false;
								break;
							}
						}
					}
				}
				if (!mtk1.islive&&myLife1>0) {
					if (postpone<30)
						postpone++;
					else {
						if (tg.person==1)
							mtk1=new myTank(200,270,30,20,0,1,ms,mss);
						else mtk1=new myTank(170,270,30,20,0,1,ms,mss);
						t3=new Thread(mtk1);
						t3.start();
						myLife1--;
						postpone=0;
					}
				}
				if (tg.person==1) {
					if (!mtk1.islive&&myLife1==0) {
						if (postpone<50)
							postpone++;
						else {
							gameover=true;
							break;
						}
					}
				}
				else if (tg.person==2) {
					if (!mtk2.islive&&myLife2>0) {
						if (postpone<30)
							postpone++;
						else {
							mtk2=new myTank(230,270,30,20,0,2,ms,mss);
							t3=new Thread(mtk2);
							t3.start();
							myLife2--;
							postpone=0;
						}
					}
					if (!mtk1.islive&&myLife1==0&&!mtk2.islive&&myLife2==0) {
						if (postpone<50)
							postpone++;
						else {
							gameover=true;
							break;
						}
					}
				}
			}
			if (boss1!=null&&tg.boss) {
		    	if (boss2!=null&&boss2.islive&&tg.select==1&&stage==8) {
		    		boss2.shootShot();
		    		mtk1.getCoordinate();
		    		boss2.aimTarget(mtk1.x1,mtk1.y1,mtk1.m1,mtk1.n1);
		    		tankCrash(mtk1,boss2);
		    		if (tg.person==2) {
			    		mtk2.getCoordinate();
			    		boss2.aimTarget(mtk2.x1,mtk2.y1,mtk2.m1,mtk2.n1);
			    		tankCrash(mtk2,boss2);
			    	}	
		    	}
		    	if (boss1.islive) {
		    		boss1.shootShot();
		    		mtk1.getCoordinate();
		    		boss1.aimTarget(mtk1.x1,mtk1.y1,mtk1.m1,mtk1.n1);
		    		if (mtk1.islive)
		    			tankCrash(mtk1,boss1);
		    		if (tg.person==2) {
			    		mtk2.getCoordinate();
			    		boss1.aimTarget(mtk2.x1,mtk2.y1,mtk2.m1,mtk2.n1);
			    		if (mtk2.islive)
				    		tankCrash(mtk2,boss1);
				    }	
		    	}
		    }	
			for (i=0;i<enemy.size();i++) {
			    tank1=(enemyTank)enemy.elementAt(i);
			    if (!tank1.islive) {
			    	enemy.remove(i);
			    	continue;
			    }
			    tank1.shootShot();	
			    mtk1.getCoordinate();
			    tank1.aimTarget(mtk1.x1,mtk1.y1,mtk1.m1,mtk1.n1);
			    if (mtk1.islive)
			    	tankCrash(mtk1,tank1);
			    if (tg.person==2) {
			    	mtk2.getCoordinate();
			    	tank1.aimTarget(mtk2.x1,mtk2.y1,mtk2.m1,mtk2.n1);
			    	if (mtk2.islive)
			    		tankCrash(mtk2,tank1);
			    }	
			}
		    for (i=0;i<eShot.size();i++) {
		    	s1=(shot)eShot.elementAt(i);
		    	if (!s1.islive)
		    		eShot.remove(i);
		    }
		    for (i=0;i<wallVect.size();i++) {
		    	w=(wall)wallVect.elementAt(i);
		    	if (!w.islive)
		    		wallVect.remove(i);
		    }
		    for (i=0;i<myShot1.size();i++) {
		    	s1=(shot)myShot1.elementAt(i);
		    	if (!s1.islive) {
		    		myShot1.remove(i);
		    		continue;
		    	}
		    	if (boss1!=null&&tg.boss) {
		    		if (boss2!=null&&boss2.islive&&tg.select==1&&stage==8) {
		    			if (judgeHitTank(s1,boss2)) {
		    				s1.islive=false;
		    				if (boss2.life!=0) {
		    					b=new bomb(s1.x,s1.y,0);
		 	  					bombVect.add(b);
		 	  					boss2.life--;
		    				}
		    				else {
		    					boss2.islive=false;
		    					boss2.getCoordinate();
		    					b=new bomb(boss2.x1,boss2.y1,2);
			    				bombVect.add(b);
			    				score1+=1000;
		    					b1++;
		    				}
						}
		    		}
		    		if (boss1.islive) {
		    			if (judgeHitTank(s1,boss1)) {
		    				s1.islive=false;
		    				if (boss1.life!=0) {
		    					b=new bomb(s1.x,s1.y,0);
		 	  					bombVect.add(b);
		 	  					boss1.life--;
		    				}
		    				else {
		    					boss1.islive=false;
		    					boss1.getCoordinate();
		    					b=new bomb(boss1.x1,boss1.y1,2);
			    				bombVect.add(b);
			    				score1+=1000;
		    					b1++;
		    				}
						}
		    		}
		    	}
		    	for (j=0;j<enemy.size();j++) {
		    		tank1=(enemyTank)enemy.elementAt(j);
		    		if (judgeHitTank(s1,tank1)) {
		    			s1.islive=false;
		    			if (tank1.type==3&&tank1.life!=0) {
		    				b=new bomb(s1.x,s1.y,0);
		 	  			    bombVect.add(b);
		 	  			    tank1.life--;
		    			}
		    			else {
		    				tank1.islive=false;
		    				tank1.getCoordinate();
		    				b=new bomb(tank1.x1,tank1.y1,1);
			    			bombVect.add(b);
			    			count--;
		    				count1--;
		    				switch (tank1.type) {
		    					case 0: 
		    					score1+=100;
		    					cyan1++; 
		    					break;
		    					case 1: 
		    					score1+=200;
		    					pink1++; 
		    					break;
		    					case 2: 
		    					score1+=300;
		    					red1++; 
		    					break;
		    					case 3: 
		    					score1+=400;
		    					green1++; 
		    					break;
		    				}
		    			}
		    		}
		    	}
		    	for (k=0;k<eShot.size();k++) {
		    		s2=(shot)eShot.elementAt(k);
		    		if (judgeShotCrash(s1,s2)) {
		    			s1.islive=false;
		    			s2.islive=false;
		    			b=new bomb(s1.x,s1.y,0);
		    			bombVect.add(b);
		    			b=new bomb(s2.x,s2.y,0);
		    			bombVect.add(b);
		    		} 
		    	}
		    }
		    if (tg.person==2) {
		    	for (i=0;i<myShot2.size();i++) {
		    		s1=(shot)myShot2.elementAt(i);
		    		if (!s1.islive) {
		    			myShot2.remove(i);
		    			continue;
		    		}
		    		if (boss1!=null&&tg.boss) {
		    			if (boss2!=null&&boss2.islive&&tg.select==1&&stage==8) {
		    				if (judgeHitTank(s1,boss2)) {
		    					s1.islive=false;
		    					if (boss2.life!=0) {
		    						b=new bomb(s1.x,s1.y,0);
		 	  						bombVect.add(b);
		 	  						boss2.life--;
		    					}
		    					else {
		    						boss2.islive=false;
		    						boss2.getCoordinate();
		    						b=new bomb(boss2.x1,boss2.y1,2);
			    					bombVect.add(b);
			    					score2+=1000;
		    						b2++;
		    					}
							}
		    			}
		    			if (boss1.islive) {
		    				if (judgeHitTank(s1,boss1)) {
		    					s1.islive=false;
		    					if (boss1.life!=0) {
		    						b=new bomb(s1.x,s1.y,0);
		 	  						bombVect.add(b);
		 	  						boss1.life--;
		    					}
		    					else {
		    						boss1.islive=false;
		    						boss1.getCoordinate();
		    						b=new bomb(boss1.x1,boss1.y1,2);
			    					bombVect.add(b);
			    					score2+=1000;
		    						b2++;
		    					}
							}
		    			}
		    		}
		    		for (j=0;j<enemy.size();j++) {
		    			tank1=(enemyTank)enemy.elementAt(j);
		    			if (judgeHitTank(s1,tank1)) {
		    				s1.islive=false;
		    				if (tank1.type==3&&tank1.life!=0) {
		    					b=new bomb(s1.x,s1.y,0);
		 	  			    	bombVect.add(b);
		 	  			    	tank1.life--;
		    				}
		    				else {
		    					tank1.islive=false;
		    					tank1.getCoordinate();
		    					b=new bomb(tank1.x1,tank1.y1,1);
			    				bombVect.add(b);
			    				count--;
		    					count1--;
		    					switch (tank1.type) {
		    						case 0: 
		    						score2+=100;
		    						cyan2++; 
		    						break;
		    						case 1: 
		    						score2+=200;
		    						pink2++; 
		    						break;
		    						case 2: 
		    						score2+=300;
		    						red2++; 
		    						break;
		    						case 3: 
		    						score2+=400;
		    						green2++; 
		    						break;
		    					}
		    				}
		    			}
		    		}
		    		for (k=0;k<eShot.size();k++) {
		    			s2=(shot)eShot.elementAt(k);
		    			if (judgeShotCrash(s1,s2)) {
		    				s1.islive=false;
		    				s2.islive=false;
		    				b=new bomb(s1.x,s1.y,0);
		    				bombVect.add(b);
		    				b=new bomb(s2.x,s2.y,0);
		    				bombVect.add(b);
		    			} 
		    		}
		    	}
		    }
		    for (i=0;i<eShot.size();i++) {
		    	s1=(shot)eShot.elementAt(i);
		    	if (judgeHitTank(s1,mtk1)&&mtk1.islive&&!mtk1.protect) {
		    		s1.islive=false;
		    		mtk1.islive=false;
		    		mtk1.getCoordinate();
		    		b=new bomb(mtk1.x1,mtk1.y1,1);
		    		bombVect.add(b);
		    	}
		    	if (tg.person==2) {
		    		if (judgeHitTank(s1,mtk2)&&mtk2.islive&&!mtk2.protect) {
		    			s1.islive=false;
		    			mtk2.islive=false;
		    			mtk2.getCoordinate();
		    			b=new bomb(mtk2.x1,mtk2.y1,1);
		    			bombVect.add(b);
		    		}
		    	}
		    }
		    for (i=0;i<bombVect.size();i++) {
		    	b=(bomb)bombVect.elementAt(i);
		    	if (b.islive)
		    		b.bombProcedure();
		    	else bombVect.remove(i);
		    }
		    synchronized(this) {
		    	this.addEnemyTank();
		    }
		    hitWall(eShot,wallVect);
		    hitWall(myShot1,wallVect);
		    if (tg.person==2)
		    	hitWall(myShot2,wallVect);
		    try {
		    	Thread.sleep(100);
		    }catch(InterruptedException e) {
		    	System.out.println (e);
		    }
		    this.repaint();
		}
	}
	public void keyPressed(KeyEvent e) {
		switch (e.getKeyCode()) {
			case KeyEvent.VK_W:
			mtk1.up=true;
			mtk1.left=false;
			mtk1.down=false;
			mtk1.right=false;
			this.repaint();
			break;
			case KeyEvent.VK_A:
			mtk1.up=false;
			mtk1.left=true;
			mtk1.down=false;
			mtk1.right=false;
			this.repaint();
			break;
			case KeyEvent.VK_S:
			mtk1.up=false;
			mtk1.left=false;
			mtk1.down=true;
			mtk1.right=false;
			this.repaint();
			break;
			case KeyEvent.VK_D:
			mtk1.up=false;
			mtk1.left=false;
			mtk1.down=false;
			mtk1.right=true;
			this.repaint();
			break;
		}
		if (tg.person==2) {
			switch (e.getKeyCode()) {
				case KeyEvent.VK_UP:
				mtk2.up=true;
				mtk2.left=false;
				mtk2.down=false;
				mtk2.right=false;
				this.repaint();
				break;
				case KeyEvent.VK_LEFT:
				mtk2.up=false;
				mtk2.left=true;
				mtk2.down=false;
				mtk2.right=false;
				this.repaint();
				break;
				case KeyEvent.VK_DOWN:
				mtk2.up=false;
				mtk2.left=false;
				mtk2.down=true;
				mtk2.right=false;
				this.repaint();
				break;
				case KeyEvent.VK_RIGHT:
				mtk2.up=false;
				mtk2.left=false;
				mtk2.down=false;
				mtk2.right=true;
				this.repaint();
				break;
			}
		}
	}
	public void keyReleased(KeyEvent e) {
		switch (e.getKeyCode()) {
			case KeyEvent.VK_W:
			mtk1.up=false;
			break;
			case KeyEvent.VK_A:
			mtk1.left=false;
			break;
			case KeyEvent.VK_S:
			mtk1.down=false;
			break;
			case KeyEvent.VK_D:
			mtk1.right=false;
			break;
			case KeyEvent.VK_J:
			if (mtk1.islive)
				mtk1.shootShot();
			break;
		}
		if (tg.person==2) {
			switch (e.getKeyCode()) {
				case KeyEvent.VK_UP:
				mtk2.up=false;
				break;
				case KeyEvent.VK_LEFT:
				mtk2.left=false;
				break;
				case KeyEvent.VK_DOWN:
				mtk2.down=false;
				break;
				case KeyEvent.VK_RIGHT:
				mtk2.right=false;
				break;
				case KeyEvent.VK_ENTER:
				if (mtk2.islive)
					mtk2.shootShot();
				break;
			}
		}
	}
	public void keyTyped(KeyEvent e) {}
	class myTank extends tank  implements Runnable {
		boolean up=false,left=false,down=false,right=false,protect=true;
		shot s;
		Thread th;
		int fire=0,player,postpone=0,px,py;
		public myTank(int x1,int y1,int m1,int n1,int d,int p,int s1,int s2) {
			super(x1,y1,m1,n1,d);
			player=p;
			speed=s1;
			shotSpeed=s2;
		}
		public void getProtected() {
			switch (this.direction) {
				case 0:
				px=this.x-this.m/2;
				py=this.y;
				break;
				case 1:
				px=this.x;
				py=this.y-this.m/2;
				break;
				case 2:
				px=this.x-this.m/2;
				py=this.y-this.m;
				break;
				case 3:
				px=this.x-this.m;
				py=this.y-this.m/2;
				break;
			}
		}
		public void shootShot() {
			if (th==null) {
				s=new shot(x,y,direction,shotSpeed);
				th=new Thread(s);
				th.start();
				if (player==1)
					myShot1.add(s);
				else if (player==2)
					myShot2.add(s);
			}
			else if (!th.isAlive()||fire==5) {
				s=new shot(x,y,direction,shotSpeed);
				th=new Thread(s);
				th.start();
				if (player==1)
					myShot1.add(s);
				else if (player==2)
					myShot2.add(s);
				fire=0;
			}
			else fire++;
		}
		public void run() {
        	while (true) {
        		if (up&&judgeRotate(0,wallVect,enemy))
			    	this.rotate(0);
			    if (up&&judgeUp(wallVect,enemy)&&judgeRotate(0,wallVect,enemy))
			    	this.moveUp(); 
		    	if (left&&judgeRotate(1,wallVect,enemy))
			    	this.rotate(1);
			    if (left&&judgeLeft(wallVect,enemy)&&judgeRotate(1,wallVect,enemy))
			    	this.moveLeft();
				if (down&&judgeRotate(2,wallVect,enemy))
					this.rotate(2);
				if (down&&judgeDown(wallVect,enemy)&&judgeRotate(2,wallVect,enemy))
					this.moveDown();
				if (right&&judgeRotate(3,wallVect,enemy))
					this.rotate(3);
				if (right&&judgeRight(wallVect,enemy)&&judgeRotate(3,wallVect,enemy))
					this.moveRight();
				if (protect) {
					this.getProtected();
					postpone++;
				}
				if (postpone==200) protect=false;
				try {
					Thread.sleep(speed);
				}catch (InterruptedException e) {
					System.out.println (e);
				}
        	}
		}
	}
	class enemyTank extends tank implements Runnable {
		int rotateRnd,shotRnd,type,life;
		shot s;
		Thread th;
		public enemyTank(int x1,int y1,int m1,int n1,int d,int rot,int shot,int t) {
			super(x1,y1,m1,n1,d);
			rotateRnd=rot;
			shotRnd=shot;
			type=t;
			switch (type) {
				case 0:
				speed=30;
				shotSpeed=10;
				break;
				case 1:
				speed=30;
				shotSpeed=5;
				break;
				case 2:
				speed=15;
				shotSpeed=10;
				break;
				case 3:
				speed=30;
				shotSpeed=10;
				shotRnd=20;
				life=3;
				break;
				case 4:
				speed=15;
				shotSpeed=5;
				shotRnd=20;
				life=5;
				break;
			}
		}
		public void move() {
			switch (direction) {
				case 0:
				if (judgeUp(wallVect,enemy))
					this.moveUp();
				break;
				case 1:
				if (judgeLeft(wallVect,enemy))
					this.moveLeft();
				break;
				case 2:
				if (judgeDown(wallVect,enemy))
					this.moveDown();
				break;
				case 3:
				if (judgeRight(wallVect,enemy))
					this.moveRight();
				break;
			}
		}
		public void shootShot() {
			if (Math.random()*100<shotRnd) {
				s=new shot(x,y,direction,shotSpeed);
				th=new Thread(s);
		        th.start();
		        eShot.add(s);
			}
		}
		public void aimTarget(int x1,int y1,int m1,int n1) {
			if (x>x1&&x<x1+m1) {
				if (y1<y) 
					this.rotate(0);
				else this.rotate(2);
			}
			if (y>y1&&y<y1+n1) {
				if (x1<x)
					this.rotate(1);
				else this.rotate(3);
			}
		}
		public void run() {
			int d;
			while (true) {
				if (!islive) break;
				this.move();
				d=(int)(Math.random()*4);
				if (Math.random()*100<rotateRnd&&judgeRotate(d,wallVect,enemy))
			    	this.rotate(d);
				try {
					Thread.sleep(speed);
				}catch (InterruptedException e) {
					System.out.println (e);
				}
			}
		}
	}
}