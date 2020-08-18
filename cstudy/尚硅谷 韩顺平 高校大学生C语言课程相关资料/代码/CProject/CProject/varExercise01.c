//#include <stdio.h>
//double price  = 200.0; //全局变量
//void test01() {
//	printf("%.2f \n", price); // 就是 全局变量 ： 200.0
//}
//void test02() { //编译器采用就近原则
//	double price = 250.0;  // 如果把 这句话 改成 double price = 250.0 ， 输出有什么变化?
//	printf("%.2f \n", price); // 250.0
//}
//void main() {//main函数
//	printf("main price=%.2f \n", price); // 200.00
//	test01(); // 200.0
//	test02(); // 250.0 ,  将 全局price 改成 250
//	test01();//  200.0
//	getchar();
//}
