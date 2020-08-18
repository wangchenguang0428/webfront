//#include <stdio.h>
//
//void test2(int *p); //函数声明，接收int *
//void main() {
//	int num=90;
//	int *p = &num; //将 num 的地址赋给 p
//	test2(&num); //传地址
//	printf("\nmain() 中的num=%d", num); // num = 91
//	test2(p); //传指针
//	printf("\nmain() 中的num=%d", num);// num = 92
//	getchar();
//}
//void test2(int *p) {
//	*p += 1; //*p 就访问 num的值 
//}
