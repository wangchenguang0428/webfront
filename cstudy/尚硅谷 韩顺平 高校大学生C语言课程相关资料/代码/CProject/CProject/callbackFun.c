//#include <stdlib.h> 
//#include <stdio.h>
//// 回调函数
////1.  int (*f)(void) 
////2. f 就是 函数指针 , 它可以接收的函数是 (返回 int ,没有形参的函数)
////3. f 在这里被 initArray 调用，充当了回调函数角色
//void initArray(int *array, int arraySize, int (*f)(void)) {
//    int i ;
//	//循环10
//    for ( i=0; i<arraySize; i++) {
//        array[i] = f(); //通过 函数指针调用了 getNextRandomValue 函数
//	}
//}
// 
//// 获取随机值
//int getNextRandomValue(void) {
//    return rand();//rand 系统函数， 会返回一个随机整数
//}
// 
//int main(void) {
//    int myarray[10],i; //定义一个数组和 int
//  
//	//说明
//	//1. 调用 initArray 函数
//	//2. 传入了一个函数名 getNextRandomValue (地址), 需要使用函数指针接收
//	initArray(myarray, 10, getNextRandomValue);
//   
//	//输出赋值后的数组
//	for(i = 0; i < 10; i++) {
//        printf("%d ", myarray[i]);
//    }
//    printf("\n");
//	getchar();
//    return 0;
//}
