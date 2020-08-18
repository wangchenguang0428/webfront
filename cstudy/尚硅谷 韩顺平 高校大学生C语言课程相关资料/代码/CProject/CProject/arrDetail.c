//#include <stdio.h>
//
//void f1(int arr[]) {
//	printf("\nf1函数中 的 arr的地址 = %p", &arr);
//	arr[0] = arr[0] + 1;
//}
//void main() {
//
//	int arr[3] = {3,4,5};
//	int i;
//	printf("\nmain函数中 的 arr的地址 = %p", arr);
//	
//	//数组默认是以 地址传递(传递指针)
//	f1(arr);
//
//	//遍历 main函数中的 arr
//	for(i = 0; i < 3; i++) {
//	printf("arr[%d]=%d ", i , arr[i]);  // 4,4,5
//	}
//	getchar();
//}