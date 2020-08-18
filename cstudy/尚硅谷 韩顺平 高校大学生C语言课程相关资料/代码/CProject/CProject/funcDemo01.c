//#include <stdio.h>
//
////说明
////1. 函数名 cal
////2. 有返回值 double
////3. 形参列表为 (int n1, int n2, char oper) 
////4. 在函数中，我们使用的变量名需要和形参列表中的变量名一样
//double cal(int n1, int n2, char oper) {
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
//}
//
//
//
//void main() {
//
//	int num1 = 10; //第一个数
//	int num2 = 20;//第二个数
//	double res = 0.0;//结果
//	char oper = '-'; //运算符
//
//
//	//我们又要接收两个数和一个运算符
//	int num3 = 60;
//	int num4 = 80;
//	double res2 = 0.0;
//	char oper2 = '*';
//
//	printf("使用函数来解决计算任务~~");
//	//使用函数来完成两个计算任务
//
//	res = cal(num1, num2, oper); //调用函数，使用函数
//
//	printf("\n cal 函数返回的结果 res=%.2f", res);
//	
//
//	//使用函数完成第二个计算任务
//	res2 = cal(num3, num4, oper2); //调用函数，使用函数
//	printf("\n cal 函数返回的结果 res2=%.2f", res2);
//
//	
//	//传统方法
//
//	/*
//	switch(oper2) {
//	case '+' :
//		res2 = num3 + num4;
//		break;
//	case '-':
//		res2 = num3 - num4;
//		break;
//	case '*':
//		res2 = num3 * num4;
//		break;
//	case '/':
//		res2 = num3 / num4;
//		break;
//	default :
//		printf("你的运算符有误~");
//	}
//	printf("%d %c %d = %.2f\n", num3, oper2, num4, res2); */
//
//	getchar();
//
//}