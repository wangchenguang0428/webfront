//#include <stdio.h>
//#include <math.h>
//
//void main() {
//	
//	/*
//
//	��ax2+bx+c=0���̵ĸ���a,b,c�ֱ�Ϊ�����Ĳ����������b^2-4ac>0�����������⣻
//b2-4ac=0������һ���⣻b2-4ac<0�����޽⣻
//��ʾ1��x1=(-b+sqrt(b^2-4ac))/2a
//               X2=(-b-sqrt(b^2-4ac))/2a
//��ʾ2��sqrt(num)����Ҫ #include <math.h>
//
//	����
//	1. �������� double a,b,c,x1,x2
//	2. b^2-4ac ��ֵ�ڳ�����ʹ�úܶ��(>=3)��������ǿ���ʹ��һ�����������棬�Ӷ������ظ�����
//	3. sqrt(num)����Ҫ #include <math.h>
//	4. ʹ�õ����֧
//
//	�ߴ���
//
//	*/
//	double a=3,b=2,c=6,x1=0,x2=0;
//
//	double t = b * b - 4 * a * c;
//
//	if( t > 0 )  {
//		x1=(-b + sqrt(t)) / (2 * a);
//		x2=(-b - sqrt(t)) / (2 * a);
//		printf("\nx1=%.2f", x1);
//		printf("\nx2=%.2f", x2);
//	} else if (t == 0) {
//		x1=(-b + sqrt(t)) / (2 * a);
//		printf("\nx1=%.2f", x1);
//	} else {
//		printf("�޽�");
//	}
//
//	getchar();
//
//}