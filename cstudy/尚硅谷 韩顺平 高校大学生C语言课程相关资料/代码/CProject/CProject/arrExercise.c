//#include <stdio.h>
//
//void main() {
//	
//	/*
//	创建一个char类型的26个元素的数组，分别 放置'A'-'Z‘。
//	使用for循环访问所有元素并打印出来。提示：字符数据运算 'A'+1 -> 'B'
//
//	*/
//	char arr[26];
//	int i;
//	for (i =0; i < 26; i++) {
//		arr[i] = 'A' + i;
//	}
//
//	//输出
//	for(i = 0; i < 26; i++ ){
//		printf("%c ", arr[i]);
//	}
//	getchar();
//
//	/*
//	请求出一个数组的最大值，并得到对应的下标
//	分析
//	1. 定义数组 大小 5
//	2. 假定 max = arr[0] 就是最大值，然后我们依次和数组后面的数进行比较，如果发现比 有比max
//	更大数，就相应的变化(把更大数赋给 max)，当我们遍历完整个数组，max 就是最大数
//	*/
//
//	int arr[] = {0,-1,89, 99, 4,0,23,876, 9876,3,4,6};
//	int arrLen = sizeof(arr) / sizeof(int);
//	int max = arr[0];
//	int maxIndex = 0;
//	int i ;
//	for(i = 1; i <  arrLen; i++) {
//		//如果发现比 有比max更大数，就相应的变化(把更大数赋给 max)
//		if( arr[i] > max) {
//			max = arr[i];
//			maxIndex = i;
//		}
//	}
//	printf("max=%d maxIndex=%d", max, maxIndex);
//	getchar();
//}