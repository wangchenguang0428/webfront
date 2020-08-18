//#include <stdio.h>
//
//int main () {
//   int  var[] = {10, 100, 200};
//   int  *ptr;
//   ptr = var;//ptr 指向var 首地址(第一个元素)
//   //if(ptr == var[0]) {//错误,类型不一样 (int *)  和  (int ) 
//	  // printf("ok1");
//   //}
//   if(ptr == &var[0]) { // 可以
//	   printf("\nok2"); //输出
//   }
//   if(ptr == var) { //可以
//	printf("\nok3"); //输出
//   }
//   if(ptr >= &var[1]) { //可以比较,但是返回false
//	printf("\nok4");//不会输出
//   }
//   getchar();
//   return 0; }
