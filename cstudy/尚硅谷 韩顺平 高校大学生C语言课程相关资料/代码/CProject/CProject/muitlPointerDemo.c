//#include <stdio.h>
//
//int main () {
//    int  var; 
//   int  *ptr; //一级指针
//   int  **pptr; //二级指针
//   int ***ppptr; // 三级指针
//   var = 3000; 
//  
//   ptr = &var; // var 变量的地址赋给 ptr
//
//   pptr = &ptr;// 表示将 ptr 存放的地址，赋给 pptr
//
//   ppptr = &pptr; // 表示将 pptr 存放的地址，赋给 ppptr
//
//   printf("var的地址=%p  var = %d \n", &var, var );// 0x1133  3000
//   printf("ptr 的本身的地址=%p ptr存放的地址=%p *ptr = %d \n", &ptr, ptr, *ptr );
//   printf("pptr 本身地址 = %p pptr存放的地址=%p  **pptr = %d\n", &pptr, pptr, **pptr);
//   printf("ppptr 本身地址 = %p ppptr存放的地址=%p  ***pptr = %d\n", &ppptr, ppptr, ***ppptr);
//   getchar();
//   return 0;
//
//}
