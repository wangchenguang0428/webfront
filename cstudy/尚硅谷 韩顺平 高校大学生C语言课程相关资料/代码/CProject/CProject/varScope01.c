//#include <stdio.h>
//
//int n = 20; //函数外部定义的变量，就是全局变量
//void sayHello() {
//	char name[]  = "tom"; //name 就是局部变量，作用域在sayHello函数中
//	printf("hello %s \n", name);
//}
//
////函数形参，会被视为f10的局部变量
////说明：当局部变量和全局变量同名时，以局部变量为准(就近原则)
//
//void f10(int n) { 
//	printf("\nn=%d", n);
//}
//void main() {
//
//	int i = 0;
//	//sayHello();
//	//这里我们不能使用到sayHello的name变量
//	//printf("name= %s", name); //这里将提示，没有定义name
//
//	f10(10);
//
//
//	
//	for (i = 0; i < 10; i++){
//		int k = 90; //k 的作用域在for 代码块中
//		printf("i=%d k = %d\n", i, k);
//	}
//	//// 这里不能使用for 中定义的k 变量
//	//printf("k=%d", k); 
//
//
//
//	getchar();
//}
