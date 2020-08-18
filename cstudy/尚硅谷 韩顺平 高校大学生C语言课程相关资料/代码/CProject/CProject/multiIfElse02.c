//#include <stdio.h>
//#include <math.h>
//
//void main() {
//	
//	/*
//
//	求ax2+bx+c=0方程的根。a,b,c分别为函数的参数，如果：b^2-4ac>0，则有两个解；
//b2-4ac=0，则有一个解；b2-4ac<0，则无解；
//提示1：x1=(-b+sqrt(b^2-4ac))/2a
//               X2=(-b-sqrt(b^2-4ac))/2a
//提示2：sqrt(num)，需要 #include <math.h>
//
//	分析
//	1. 定义三个 double a,b,c,x1,x2
//	2. b^2-4ac 的值在程序中使用很多次(>=3)，因此我们可以使用一个变量来保存，从而避免重复计算
//	3. sqrt(num)，需要 #include <math.h>
//	4. 使用到多分支
//
//	走代码
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
//		printf("无解");
//	}
//
//	getchar();
//
//}