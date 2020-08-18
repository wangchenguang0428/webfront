//#include <stdio.h>
//
////说明
////1. MAX 就是带参数的宏
////2. (a,b) 就是形参
////3.  (a>b) ? a : b是带参数的宏对应字符串，该字符串中可以使用形参
//#define MAX(a,b) (a>b) ? a : b
//int main(){
//    int x , y, max;
//    printf("input two numbers: ");
//    scanf("%d %d", &x, &y);
//
//	//说明
//	//1.  MAX(x, y); 调用带参数宏定义
//	//2.  在宏替换时(预处理，由预处理器)， 会进行字符串的替换，同时会使用实参， 去替换形参
//	//3. 即MAX(x, y) 宏替换后  (x>y) ? x : y
//    max = MAX(x, y);
//    printf("max=%d\n", max);
//    getchar();
//    getchar();
//    return 0;
//}
