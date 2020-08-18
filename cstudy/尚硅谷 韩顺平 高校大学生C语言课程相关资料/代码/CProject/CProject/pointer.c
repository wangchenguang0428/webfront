////讲解指针的入门
//#include <stdio.h>
//
//void main() {
//	int num = 1;
//	//定义一个指针变量，指针
//	//说明
//	//1. int * 表示类型为 指针类型
//	//2. 名称 ptr , ptr 就是一个 int * 类型
//	//3. ptr 指向了一个 int 类型的变量的地址
//	int *ptr = &num; 
//
//	//num的地址是多少
//	//说明1：如果要输出一个变量的地址，使用格式是 %p
//	//说明2: &num 表示取出num这个变量对应地址
//	printf("\nnum 的值=%d num 地址=%p", num, &num);
//
//	//1.指针变量，本身也有地址 &ptr
//	//2.指针变量,  存放的地址 ptr
//	//3.获取指针指向的值 *ptr
//	printf("\nptr 的地址是 %p ptr 存放的值是一个地址为 %p  ptr 指向的值=%d", &ptr,  ptr, *ptr);
//
//	getchar();
//}