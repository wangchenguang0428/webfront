//#include <stdio.h>
//
//
////二分查找
//int binarySearch(int arr[], int leftIndex, int rightIndex, int findVal) {
//	
//	
//	//先找到数组中间这个数 midVal
//	int midIndex = (leftIndex + rightIndex) / 2; 
//	int midVal = arr[midIndex];
//	//如果leftIndex > rightIndex, 说明这个数组都比较过，但是没有找到
//	if( leftIndex > rightIndex) {
//		return -1;//!!!!
//	}
//	//如果midVal >  findVal 说明， 应该在midVal 的左边查找
//	if(midVal > findVal) {
//		binarySearch(arr, leftIndex, midIndex-1, findVal);//!!!
//	} else if(midVal < findVal){//如果midVal <  findVal 说明， 应该在midVal 的右边查找
//		binarySearch(arr, midIndex+1, rightIndex, findVal);//!!!
//	} else {
//		return midIndex; //返回该数的下标
//	}
//
//
//}
//
//void main() {
//	
//	//请对一个有序数组进行二分查找 {1,8, 10, 89, 1000, 1234} ，
//	//输入一个数看看该数组是否存在此数，并且求出下标，
//	//如果没有就提示"没有这个数"。二分查找的前提是，该数组是一个有序数组
//
//	//思路分析
//	// 比如我们要查找的数是 findVal
//	//1. 先找到数组中间这个数 midVal，和findVal 比较
//	//2. 如果midVal >  findVal 说明， 应该在midVal 的左边查找
//	//3. 如果midVal <  findVal 说明， 应该在midVal 的右边查找
//	//4. 如果midVal ==  findVal， 说明找到
//	//5. 这里还有一个问题，没有考虑找不到情况-> 
//
//	int arr[] =  {1,8, 10, 89, 1000, 1234};
//	int arrLen = sizeof(arr) / sizeof(int);
//	int index = binarySearch(arr, 0, arrLen-1, -1000);
//	if(index != -1) {
//		printf("找到 index = %d", index);
//	} else {
//		printf("没有找到");
//	}
//	getchar();
//
//
//}