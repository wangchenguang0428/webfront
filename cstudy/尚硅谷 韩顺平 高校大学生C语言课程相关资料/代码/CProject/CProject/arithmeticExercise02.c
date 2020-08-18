//#include <stdio.h>
//
//void main() {
//
//	//假如还有97天放假，问：xx个星期零xx天
//
//	//思路
//	//1. 定义一个 days 保存 天数
//	//2. 定义 week 保存 计算得到星期
//	//3. 定义 leftDays 保存 剩余的天数
//	//4  使用 % 和  /
//
//
//	//代码
//	int days = 97;
//	int week = days / 7; 
//	int leftDays = days % 7;
//
//	/*
//	定义一个变量保存华氏温度，华氏温度转换摄氏温度的公式为：
//	5/9*(华氏温度-100),请求出华氏温度对应的摄氏温度
//
//	思路
//	1. 用 huaShi 华氏温度
//	2. 用 sheShi 摄氏温度
//	3. 使用公式来进行转换 5/9*(华氏温度-100)
//	*/
//
//	double huaShi = 146.7;
//	double sheShi =  5.0/9*(huaShi-100);
//
//	printf("\n 华氏温度 %.2f 对应的摄氏温度是 %.2f", huaShi, sheShi);
//	printf("\n有 %d个星期零%d天 放假", week, leftDays);
//	getchar();
//}