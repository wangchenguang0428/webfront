//#include <stdio.h>
//
//void main() {
//	/*
//	一个养鸡场有6只鸡，它们的体重分别是3kg,5kg,1kg,
//3.4kg,2kg,50kg 。请问这六只鸡的总体重是多少?平
//均体重是多少? 请你编一个程序。
//
//	*/
//
//	//1 定义数组
//	double hens[6];
//	double totalWeight = 0.0;
//	double avgWeight = 0.0;
//	int i, arrLen;
//	//2. 初始化数组的每个元素
//	//[下标]
//	hens[0] = 3; //第一个元素
//	hens[1] = 5; //第2个元素
//	hens[2] = 1;
//	hens[3] = 3.4;
//	hens[4] = 2;
//	hens[5] = 50;
//
//	
//	//3. 遍历数组
//	//如何得到数组大小
//	//  sizeof(hens)  数组的总的大小 
//	//  6 * 8 = 48
//	//  sizeof(double) 返回 一个double 占用的字节数 
//	//printf("sizeof(hens)=%d", sizeof(hens)); 
//	arrLen = sizeof(hens) /  sizeof(double);
//	for(i = 0; i < arrLen; i++) {
//		totalWeight += hens[i]; // 累计每只鸡体重
//	}
//	avgWeight = totalWeight / 6;
//	printf("总体重totalWeight=%.2f  平均体重 avgWeight=%.2f", totalWeight, avgWeight);
//	getchar();
//
//}