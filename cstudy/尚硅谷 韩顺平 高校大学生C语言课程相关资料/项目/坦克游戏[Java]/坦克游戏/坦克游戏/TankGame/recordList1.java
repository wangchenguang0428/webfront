import java.awt.*;
import javax.swing.*;
import java.awt.event.*;
import java.sql.*;
import java.util.*;
import javax.swing.table.AbstractTableModel;
public class recordList1 extends JFrame {
	JTable t;
	tableModel tm;
	public recordList1() {
		Container c=this.getContentPane();
		tm=new tableModel();
		t=new JTable(tm);
		c.add(new JScrollPane(t));
		this.setTitle("游戏记录");
		this.setSize(300,400);
		this.setVisible(true);
	}
	class tableModel extends AbstractTableModel {
		connectDB cdb;
		ResultSet rs;
		Vector rowData,allData;
		int count=1;
		String column[]={"名次","姓名","分数"};
		public tableModel() {
			try {
				cdb=new connectDB();
				rs=cdb.executeQuery("select * from record1 order by score desc");
				rowData=new Vector();
				allData=new Vector();
				while (rs.next()) {
					rowData.clear();
					rowData.add(count+"");
					rowData.add(rs.getString(1));
					rowData.add(rs.getString(2));
					allData.add(rowData.clone());
					count++;
				}
				rs.close();
			}catch (Exception ex) {
				ex.printStackTrace();
			}
		}
		public String getColumnName(int col) {
			return (column[col]);
		}
		public int getColumnCount() {
			return (column.length);
		}
		public int getRowCount() {
			return (allData.size());
		}
		public Object getValueAt(int row,int col) {
			return (((Vector)allData.get(row)).get(col));
		}
		public Class getColumnClass(int col) {
			return (getValueAt(0,col).getClass());
		}
		public boolean isCellEditable(int row,int col) {
			return false;
		}
		public void setValueAt(Object value,int row,int col) {}
	}
}