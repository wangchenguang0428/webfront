//#include <stdio.h>
//void main() {
//	
//	double d1 = 1.934;
//	int num = (int)d1;  //这里注意，不是进行四舍五入，而是直接截断小数后的部分
//
//	//强制转换只对最近的数有效, 如果希望针对更多的表达式转换，使用（）
//	//int num2 = (int)3.5 * 10  + 6 * 1.5; //   3 * 10 + 6 * 1.5 = 30 + 9.0 = 39.0
//	int num3 = (int)(3.5 * 10  + 6 * 1.5); //  35.0 + 9.0 = 44.0 -> int = 44
//
//	printf("\nnum3=%d", num3); // num3 = 44
//	printf("\nnum=%d d1=%f" , num, d1);  // d1 仍然是double
//
//
//
//	getchar();
//}