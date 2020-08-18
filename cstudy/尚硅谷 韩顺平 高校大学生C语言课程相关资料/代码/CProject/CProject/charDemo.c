//#include <stdio.h>
//
//void main() {
//	
//	char c1 = 'a';
//	char c2 = 'b';
//	 //这时当我们以%c 输出时，就会安装ASCII 编码表(理解 字符 <==> 数字  对应关系 ) 对应的97 对应字符输出
//	char c3 = 97;
//
//	//这里注意
//	//1. vs2010 编译器 是 c89
//	//2. 要求 变量的定义在 执行语句之前
//	int num = c2 + 10;  // 98 + 10 = 108
//
//	printf("c1=%c c2=%c c3=%c", c1, c2, c3);//  c3= 'a'
//
//	
//
//	printf("num=%d", num); //  108
//
//	getchar();
//}