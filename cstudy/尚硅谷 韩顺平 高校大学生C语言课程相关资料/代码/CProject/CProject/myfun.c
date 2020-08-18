//#include <stdio.h>
////实现int myCal(int n1, int n2, char oper)
//
//int myCal(int n1, int n2, char oper) {
//	
//	//定义一个变量 res ,保存运算的结果
//	double res = 0.0;
//
//	switch(oper) {
//	case '+' :
//		res = n1 + n2;
//		break;
//	case '-':
//		res = n1 - n2;
//		break;
//	case '*':
//		res = n1 * n2;
//		break;
//	case '/':
//		res = n1 / n2;
//		break;
//	default :
//		printf("你的运算符有误~");
//	}
//	printf("\n%d %c %d = %.2f\n", n1, oper, n2, res);
//	return res;
//
//}
//
//
//void sayHello() { //定义函数
//	printf("say Hello");
//}

//cal2方法的具体实现
#include <stdio.h>
double cal2(int num1, int num2, char oper) {
double res = 0.0;
switch(oper) {
	case '+' :
		res = num1 + num2;
		break;
	case '-':
		res = num1 - num2;
		break;
	case '*':
		res = num1 * num2;
		break;
	case '/':
		res = num1 / num2;
		break;
	default :
		printf("你的运算符有误~~");
}
return res;
}
