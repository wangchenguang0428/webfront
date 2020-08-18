//#include <stdio.h>
//
//
////函数可以没有返回值案例，编写一个函数,从终端输入一个整数(层)打印出对应的金子塔。
////层数 totalLevle 是通过形参传入
//void printStar(int totalLevle) {
//	
//	int i,j,k;
//	for(i = 1; i <= totalLevle; i++) {//控制层
//		//输出空格, 使用k控制空格的循环
//		for (k=1; k <= totalLevle - i; k++) {
//			printf(" ");
//		}
//		for(j = 1; j <= 2 *  i - 1; j++) {
//			if(j == 1 || j == 2 *  i - 1 || i == totalLevle) { //i ==5 表示最下层
//				printf("*");
//			} else {
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//
//}
//
////编写一个函数,从终端输入一个整数(1—9),打印出对应的乘法表:【
//void print99(int n) {
//	int i,j;
//	for(i = 1; i <= n; i++) {
//		//因为每一行都在增加算式, 所以使用for循环控制
//		for(j=1; j <= i; j++) {
//			printf("%d * %d = %d  ", j, i , i * j);
//		}
//		printf("\n");
//	}
//}
// 
////定义函数，实现求两个double数字的最大值，并返回
//double getMax(double d1, double d2) {
//	return d1 > d2 ? d1: d2;  //三元运算
//}
//
////定义函数，求出三个int 类型数的和，并返回
//int getSum(int n1, int n2, int n3) {
//	return n1 + n2 + n3;
//}
//void main() {
//
//	int totalLevel = 0;
//
//	printf("请输入金字塔的层数");
//	scanf("%d", &totalLevel);
//	//调用函数 
//	printStar(totalLevel);
//	
//	getchar();
//	getchar();
//
//	int n = 0;
//	printf("请输入n");
//	scanf("%d", &n);
//	print99(n);
//	getchar();
//	getchar();
//
//	printf("最大值=%.2f", getMax(1.1,7.8));
//	getchar();
//
//}