//#include <stdio.h>
//
//#define A 1
//#define B (A+3)   //
//#define C A/B*3 //  
//
////const�����ض��壬�����Զ�������һ���ģ���defineͨ��undefȡ��ĳ�����ŵĶ��壬�����¶��� 
//const double PI=3.14;
////const double PI=3.145;
//
//#define PI2 3.14
//#undef PI2 //  ȡ��PI2 �Ķ���
//#define PI2 3.145
//
//void main() {
//
//	//
//
//	//��������
//	//#define ����һ���򵥵��滻!!!
//	//C ��ʵ��  A/A+3*3 = 1/1 + 3 * 3 = 1 + 9 = 10
//	//C ��ʵ��  A/(A+3)*3 = 1/(1+3) * 3 = 1/4 *3 = ?
//
//	double d1 = 1.0/4 *3 ; // 0.25 * 3  = 0.75
//
//	printf("\nc=%.2f", C);// �� c = ? 
//	printf("\nd1=%.2f", d1);
//
//	getchar();
//}