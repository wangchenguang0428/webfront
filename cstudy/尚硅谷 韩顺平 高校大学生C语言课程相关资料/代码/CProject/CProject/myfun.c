//#include <stdio.h>
////ʵ��int myCal(int n1, int n2, char oper)
//
//int myCal(int n1, int n2, char oper) {
//	
//	//����һ������ res ,��������Ľ��
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
//		printf("������������~");
//	}
//	printf("\n%d %c %d = %.2f\n", n1, oper, n2, res);
//	return res;
//
//}
//
//
//void sayHello() { //���庯��
//	printf("say Hello");
//}

//cal2�����ľ���ʵ��
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
		printf("������������~~");
}
return res;
}
