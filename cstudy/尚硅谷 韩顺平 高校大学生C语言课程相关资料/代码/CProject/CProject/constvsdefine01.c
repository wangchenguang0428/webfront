//#include <stdio.h>
//
//#define A 1
//#define B (A+3)   //
//#define C A/B*3 //  
//
////const不能重定义，不可以定义两个一样的，而define通过undef取消某个符号的定义，再重新定义 
//const double PI=3.14;
////const double PI=3.145;
//
//#define PI2 3.14
//#undef PI2 //  取消PI2 的定义
//#define PI2 3.145
//
//void main() {
//
//	//
//
//	//分析过程
//	//#define 就是一个简单的替换!!!
//	//C 其实是  A/A+3*3 = 1/1 + 3 * 3 = 1 + 9 = 10
//	//C 其实是  A/(A+3)*3 = 1/(1+3) * 3 = 1/4 *3 = ?
//
//	double d1 = 1.0/4 *3 ; // 0.25 * 3  = 0.75
//
//	printf("\nc=%.2f", C);// 问 c = ? 
//	printf("\nd1=%.2f", d1);
//
//	getchar();
//}