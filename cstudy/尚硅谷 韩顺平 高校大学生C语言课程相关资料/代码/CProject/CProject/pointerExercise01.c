//#include <stdio.h>
//
//void main() {
//
////写一个程序，获取一个int变量num的地址，并显示到终端
////将num的地址赋给指针 ptr , 并通过ptr去修改num的值.
////分析 ptr 的类型 是 int *  , 注意指针的类型和 该指针指向的变量类型是对应关系 
////并画出案例的内存布局图
//
//	//int num = 88;
//	//int * ptr = &num;
//	////先输出num没有修改的情况
//	//printf("\nnum的值=%d num的地址=%p", num, &num); // num= 88
//	//*ptr = 99; // 通过ptr去修改num的值, num 变量的值也就相应的被修改
//	//printf("\n num的值=%d num的地址=%p", num, &num);// num = 99
//
//	int a = 300; // a = 300
//	int b = 400; // b = 400
//	int * ptr = &a; //ok ptr 指向 a
//	*ptr = 100; // a = 100 
//	ptr = &b; //  ok ptr 指向 b
//	*ptr = 200; // b = 200
//	printf("\n a=%d,b=%d,*ptr=%d", a, b, *ptr); //a = 100, b = 200, *ptr = 200
//
//	getchar();
//
//
//
//	getchar();
//
//}