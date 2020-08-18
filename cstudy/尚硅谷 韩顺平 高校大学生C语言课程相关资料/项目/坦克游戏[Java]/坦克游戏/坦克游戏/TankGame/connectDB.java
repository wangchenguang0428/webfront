import java.sql.*;
public class connectDB {
	Connection con;
	Statement stat;
	ResultSet rs;
	public connectDB() {
		con=null;
		try {
			Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
		}catch (ClassNotFoundException ce) {}
		try {
			con=DriverManager.getConnection("jdbc:odbc:TGame");
			stat=con.createStatement();
		}catch (SQLException se) {
			System.out.println (se);
		}
	}
	public ResultSet executeQuery(String sql) {
		try {
			rs=stat.executeQuery(sql);
		}catch(SQLException e1) {}
		return rs;
	}
	public void  executeUpdate(String sql) {
		try {
			stat.executeUpdate(sql);
		}catch(SQLException e2) {}
	}
}