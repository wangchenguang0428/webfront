//#include <stdio.h>
//
//void main() {
//	
//	/*
//	案例：
//	请编写一个程序，该程序可以接收一个字符，比如: a,b,c,d,e,f,g  
//	a表示星期一，b表示星期
//	二 …  根据用户的输入显
//	示相依的信息.要求使用 
//	switch 语句完成
//
//	*/
//
//	char c1 = ' ';
//	char c2 = 'a';
//	printf("请输入一个字符(a,b,c,d)");
//	scanf("%c", &c1);
//
//	//switch
//	//表达式： 任何有值都可以看成是一个表达式
//	switch(c1) {
//	case 'a' :  //'a' => 97
//		printf("今天星期一, 猴子穿新衣");
//		break; //退出switch
//	case 'b' : 
//		printf("今天星期二, 猴子当小二");
//		break;
//	case 'c' : 
//		printf("今天星期三, 猴子爬雪山");
//		break;
//	case 'd' : 
//		printf("今天星期四, 猴子有急事");
//		break;
//	default : //default 是可选择,不是必须的
//		printf("没有匹配到任何值~");
//
//	}
//	printf("switch 结束~");
//	getchar();
//	getchar();
//}