//#include <stdio.h>
//
//*
//编写一个Dog结构体，包含name(char[10])、age(int)、weight(double)属性
//编写一个say函数，返回字符串，信息中包含所有成员值。
//
//在main方法中，创建Dog结构体变量，调用say函数，将调用结果打印输出。
//
//
//*/
////定义Dog结构体
//struct Dog {
//	char * name;
//	int age;
//	double weight;
//};
////say函数，返回字符串，信息中包含所有成员值
//char * say(struct Dog dog) {
//	//将这个信息放入到一个字符串(字符数组)
//	static char info[50]; //局部静态变量
//	sprintf(info, "name=%s age=%d weight=%.2f", dog.name, dog.age, dog.weight);
//	dog.name = "小花";
//	return info;
//}
//
//void main() {
//	//测试
//	//定义结构体变量
//	struct Dog dog;
//	char * info = NULL;
//	dog.name = "小黄";
//	dog.age = 1;
//	dog.weight = 3.4;
//	info = say(dog); //结构体变量默认是值传递
//	printf("\n 小狗信息=%s", info);
//	printf("\n main 小狗名字=%s", dog.name);
//	getchar();
//}