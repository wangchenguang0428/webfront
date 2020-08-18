//#include <stdio.h>
//
//int *func(){
//    //int n = 100;//局部变量, 在func 返回时，就会销毁
//    
//	static int n = 100; // 如果这个局部变量是 static 性质的，那么n 存放数据的空间在静态数据区
//	return &n;
//}
//int main(){
//    int *p = func(); //func 返回指针
//	int n;
//	printf("okoook~~"); //可能是使用到 局部变量  int n = 100 占用空间
//	printf("okoook~~"); 
//	printf("okoook~~"); 
//    n = *p;
//    printf("\nvalue = %d\n", n);// 思考，是否能够输出100? 不一定
//	getchar();
//    return 0;
//}
