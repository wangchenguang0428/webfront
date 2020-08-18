//#include <stdio.h>
//#include <string.h>
//
///*
//1.一个景区根据游人的年龄收取不同价格的门票。
//2.请编写游人结构体(Visitor)，根据年龄段决定能够购买的门票价格并输出
//3.规则：年龄>18 , 门票为20元，其它情况免费。
//4.可以循环从控制台输入名字和年龄，打印门票收费情况, 如果名字输入 n ,则退出程序。
//
//*/
//
////定义结构体
//struct Visitor {
//	char name[10]; 
//	int age;
//	double pay; //应付票价
//};
//
////编写函数处理业务
////说明：因为结构体默认是值传递，会拷贝一份完整数据，效率较低
////           因此，为了提高效率，我们直接接收地址(指针)
//void ticket(struct Visitor * visitor) {
//	//判断
//	if( (*visitor).age > 18) {
//		(*visitor).pay = 20;
//	} else {
//		(*visitor).pay = 0;
//	}
//}
//
//void main() {
//	
//	//测试
//	//创建结构体变量(创建一个游客)
//	struct Visitor visitor;
//	//循环的输入名字和年龄
//	while(1) {
//	
//		printf("\n 请输入游客名字");
//		scanf("%s", visitor.name);
//		//判断如果名字输入 n ,则退出程序
//		if(!strcmp("n", visitor.name) ) {
//			break; 
//		}
//		printf("\n 请输入游客年龄");
//		scanf("%d", &visitor.age);
//		//调用函数 ticket ， 获取应付的票价
//		ticket(&visitor);
//		printf("\n 该游客应付票价=%.2f", visitor.pay);
//	}
//
//	printf("退出程序");
//	getchar();
//	getchar();
//}