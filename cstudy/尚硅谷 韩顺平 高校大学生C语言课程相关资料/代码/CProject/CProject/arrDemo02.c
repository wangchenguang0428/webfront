//#include <stdio.h>
//void main() {
//	/*
//	从终端循环输入5个成绩，保存到double数组,并输出
//
//	*/
//
//	//定义数组和初始化数组的方式
//	int arr2[3] = {10, 20, 80};
//	//如果在定义时，直接就指定值，可以省略数组大小
//	int arr3[] = {110, 220, 800};
//	//定义一个数组
//	double arr[5];
//	int arrLen = sizeof(arr) / sizeof(double); 
//	int i;
//	for(i = 0; i < arrLen; i++) {
//		printf("\n 请输入一个小数");
//		scanf("%lf", &arr[i]);
//	}
//
//	//输出整个数组
//	printf("\n======================\n");
//	for(i = 0; i < arrLen; i++) {
//		printf("arr[%d]=%.2f ", i, arr[i]);
//	}
//	getchar(); //过滤回车
//	getchar();
//	
//}