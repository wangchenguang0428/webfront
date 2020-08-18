//#include <stdio.h>
//
//
////请编写一个函数 swap(int *n1, int *n2) 可以交换 n1 和 n2的值
//
////说明
////1. 函数名为swap
////2. 形参是两个指针类型 int*
//void swap(int *n1, int *n2) {
//	int temp = *n1; //表示将 n1 这个指针指向的变量的值赋给 temp
//	*n1 = *n2; // 表示将 n2 这个指针指向的变量的值赋给 n1这个指针指向的变量
//	*n2 = temp; //表示将 temp 值赋给 n2这个指针指向的变量
//}
//
//void main() {
//	
//	int n1 = 1;
//	int n2 = 2;
//	swap(&n1, &n2);
//	printf("main n1=%d n2=%d", n1, n2);// n1= 2 n2 = 1
//	getchar();
//}