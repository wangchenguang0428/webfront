//#include <stdio.h>
//void main() {
//	
//	//编写程序，声明2个double型变量并赋值。判断第一个数大于10.0，且第2个数小于20.0，打印两数之和
//
//	//分析
//	//1. 定义 2个double  d1 和 d2
//	//2. 使用逻辑与
//	//3. 使用if
//
//	double d1 = 146.7;
//	double d2 = 23.3;
//
//	if(d1 > 10.0 && d2 < 20.0) {
//		printf("d1+d2=%.2f", (d1 + d2));
//	}
//
//
//	//判断一个年份是否是闰年，闰年的条件是符合下面二者之一：
//	//(1)年份能被4整除，但不能被100整除；(2)能被400整除
//
//	//分析
//	//1. 定义以变量  year
//	//2. 有逻辑与 和 逻辑或的综合使用
//	//3. if-else
//
//	int year = 2020;
//	if( (year % 4 == 0 && year % 100 != 0) ||  year % 400 == 0)  {
//		printf("%d 是 闰年", year); //闰年是 366 天， 平年 365
//	} else {
//		printf("%d 不是 闰年", year);
//	}
//
//
//	getchar();
//
//}