//#include <stdio.h>
//#include <stdlib.h>
////编写一个函数，返回一个一维数组
//int * f1() {
//	static int arr[10]; //必须加上static ,让arr 的空间在静态数据区分配
//
//	int i = 0;
//	for (i = 0; i < 10;i++) {
//		arr[i] = rand();
//	}
//
//	return arr;
//}
//
//void main() {
//
//	int *p;
//	int i;
//	p = f1(); //p 指向是在 f1 生成的数组的首地址(即第一个元素的地址)
//	for ( i = 0; i <10; i++) {
//		printf("\n%d", *(p+i));
//	}
//	getchar();
//}