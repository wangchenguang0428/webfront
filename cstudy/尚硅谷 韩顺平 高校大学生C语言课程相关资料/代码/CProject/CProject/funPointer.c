//#include <stdio.h>
//
////说明
////1. max 函数
////2. 接收两个int ,返回较大数
//int max(int a, int b){
//    return a>b ? a : b;
//}
//
//int main(){
//    int x, y, maxVal;
//   
//	//说明 函数指针
//	//1. 函数指针的名字 pmax
//	//2. int 表示 该函数指针指向的函数是返回int 类型
//	//3. (int, int) 表示 该函数指针指向的函数形参是接收两个 int 
//	//4. 在定义函数指针时，也可以写上形参名  int (*pmax)(int x, int y) = max;
//    int (*pmax)(int x, int y) = max;  //
//    printf("Input two numbers:");
//   
//	scanf("%d %d", &x, &y);
//	// (*pmax)(x, y) 通过函数指针去调用 函数max
//	// 调用方式 2 pmax(x,y)
//    maxVal = (*pmax)(x, y);
//    printf("Max value: %d pmax=%p pmax本身的地址=%p\n", maxVal, pmax, &pmax);
//	getchar();
//	getchar();
//    return 0;
//}
//
