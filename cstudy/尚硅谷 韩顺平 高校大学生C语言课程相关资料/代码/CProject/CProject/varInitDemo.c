//#include <stdio.h>
//
//int a; //全局
//float f;
//double d1;
//
//void f20() { //函数, 定义变量就是局部变量
//	
//	int num = 90;
//	
//	if(1) {
//		int num = 900;
//	}
//
//	printf("a=%d", a);
//}
//
//void f30() {
//	int  num = 80;
//}
//
//void main() {
//	//局部变量，系统不会对其默认初始化，
//	//必须对局部变量初始化后才能使用，否则，程序运行后可能会异常退出
//	//int i; //
//	//printf("%d", i);
//
//	printf("\na=%d f=%.2f d1=%.2f", a, f, d1); // a = 0 f=0.00 d1=0.00 
//	getchar();
//
//}