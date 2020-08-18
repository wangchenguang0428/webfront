//#include <stdio.h>
//
//void main() {
//	
//	/*
//	张老太养了两只猫猫:一只名字叫小白,今年3岁,白色。还有一只叫小花,今年100岁,花色。
//	请编写一个程序，当用户输入小猫的名字时，就显示该猫的名字，年龄，颜色。
//	如果用户输入的小猫名错误，则显示 张老太没有这只猫猫。
//
//	分析：
//	1. 猫猫有 三个成员(变量)组成
//	2. 使用结构体解决
//	*/
//	//创建 结构体Cat  【是数据类型】
//
//	struct Cat { // 结构体名 Cat, Cat 就是我们自己构造的一个数据类型
//		char * name;  //名字，使用指针，指向一个字符串
//		int age; //年龄
//		char *color; //颜色
//	};
//	//使用Cat 结构体，创建变量
//	struct Cat cat1; // cat1 就是 struct Cat 的一个变量 
//	struct Cat cat2; // cat2 就是 struct Cat 的一个变量 
//	//给cat1 的各个成员赋值
//	cat1.name = "小白";
//	cat1.age = 3;
//	cat1.color = "白色";
//
//	//给cat2 的各个成员赋值
//	cat2.name = "小花";
//	cat2.age = 100;
//	cat2.color = "花色";
//
//	//输出两只猫的信息
//	printf("\n 第1只猫 name=%s age=%d color=%s", cat1.name, cat1.age, cat1.color);
//	printf("\n 第2只猫 name=%s age=%d color=%s", cat2.name, cat2.age, cat2.color);
//	
//
//	getchar();
//
//}