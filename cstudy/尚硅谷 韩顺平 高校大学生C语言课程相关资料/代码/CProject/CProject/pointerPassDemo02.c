//#include <stdio.h>
//
//
///* 函数声明 */
//double getAverage(int *arr, int size); //函数声明
//double getAverage2(int *arr, int size); //函数声明
//int main ()
//{
//   /* 带有 5 个元素的整型数组  */
//   int balance[5] = {1000, 2, 3, 17, 50};
//   double avg;
//   /* 传递一个指向数组的指针作为参数 */
//   avg = getAverage( balance, 5 ) ;
//   /* 输出返回值  */
//   printf("Average value is: %f\n", avg );
//    getchar();
//   return 0;
//}
////说明
////1. arr 是一个指针，
//double getAverage(int *arr, int size)
//{
//  int    i, sum = 0;       
//  double avg;          
//  for (i = 0; i < size; ++i)
//  {
//	  // arr[0] = arr + 0
//	  // arr[1] = arr + 1个int字节（4） 
//	  // arr[2] = arr +  2个int字节（8）
//	  //...
//    sum += arr[i];// arr[0] =>数组第一个元素的地址 arr[1]
//	 printf("\narr存放的地址=%p ", arr);
//  }
//  avg = (double)sum / size;
//  return avg;
//}
//
//double getAverage2(int *arr, int size)
//{
//  int    i, sum = 0;       
//  double avg;          
//  for (i = 0; i < size; ++i)
//  {
//    sum += *arr;
//	 printf("\narr存放的地址=%p ", arr);
//     arr++;  // 指针的++运算, 会对arr 存放的地址做修改
//	
//  }
//  avg = (double)sum / size;
//  return avg;
//}
//
