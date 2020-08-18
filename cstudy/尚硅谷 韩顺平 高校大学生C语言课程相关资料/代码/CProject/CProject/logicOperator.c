//#include <stdio.h>
//void main() {
//	
//	double score = 70;//成绩
//	if(score>=60 && score<=80){
//		printf("ok1");
//	} else {
//		printf("ok2");
//	}
//
//	int a = 10, b = 99;
//	//说明：
//	//1. 在进行 && 操作时, 如果第一个条件为false ,则后面的条件不在判断
//	//2. 该现象称为 短路现象，所以 逻辑与 也称为 短路逻辑与
//	if(a < 2 && ++b>99) {  // 
//		printf("ok100");
//	}
//	printf("b=%d\n", b); //b=99
//	getchar();
//
//
//
//	int a = 10, b = 99;
//	//说明
//	//1. 在进行逻辑与时，如果第一个条件为真，则不再执行后面的条件，整个结果为真
//	//2. 该现象称为 逻辑或短路现象，因此 逻辑或也称为 短路逻辑或
//	if(a > 5 || b++>100) { // 
//		printf("ok100");
//	}
//	printf("b=%d\n", b); // b= 99
//	getchar();
//
//	//int score = 100;
//	//int res = score > 199;   // res = 0
//	//if(res) {
//	//	printf("hello, tom\n");
//	//}
//	//if(!res) { //T
//	//	printf("hello,jack\n");
//	//}
//
//
//
//	getchar();
//
//}