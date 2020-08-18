//#include <stdio.h>
//
//const int MAX = 3;
//int main () {
//   int  var[] = {10, 100, 200};
//   int  i, *ptr;
// 
//   /* 指针中最后一个元素的地址 */
//   ptr =  &var[MAX-1]; // &var[2]
//   for ( i = MAX; i > 0; i--) {// 反向遍历
//      printf("ptr存放的地址=%p\n", ptr);
//      printf("存储值：var[%d] = %d\n", i-1, *ptr );
// 
//       ptr--; // ptr = ptr - 1(1个int的字节数 [4个字节]) 
//   }
//   getchar();
//   return 0;
//}
