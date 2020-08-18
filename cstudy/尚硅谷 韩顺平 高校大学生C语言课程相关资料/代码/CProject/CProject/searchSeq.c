//#include <stdio.h>
//
//
//int seqSearch(int  arr[], int arrLen, int val) {
//	
//	int i;
//	for(i = 0; i < arrLen; i++) {
//		if(arr[i] == val) {
//			return i;
//		}
//	}
//
//	//如果在for循环中，没有执行到return ,说明没有找到
//	return -1;
//
//}
//
//void main() {
//	
//	//有一个数列：{23， 1， 34,89， 101}
//	//猜数游戏：从键盘中任意输入一个数，判断数列中是否包含该数【顺序查找】 要求: 如果找到了，
//	//就提示找到，并给出下标值, 找不到提示 没有。
//
//	//分析思路
//	//1. 安装数组进行遍历，一个一个的比较，如果相等，则找到
//	int arr[] = {23, 1, 34,89,101};
//	int arrLen = sizeof(arr) / sizeof(int);
//	int index = seqSearch(arr, arrLen, -101);
//	if (index != -1) { //找到
//		printf("找到 下标为 %d", index);
//	} else {
//		printf("没有找到");
//	}
//	getchar();
//
//
//}