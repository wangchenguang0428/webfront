//#include <stdio.h>
//
//void main() {
//	
//	/*
//	岳小鹏参加C二级考试，他和父亲岳不群达成承诺：
//如果：
//成绩为100分时，奖励一辆BMW；
//成绩为(80，99]时，奖励一台iphone7plus；
//当成绩为[60,80]时，奖励一个 iPad；
//其它时，什么奖励也没有。
//请从键盘输入岳小鹏的C二级考试，并加以判断, 输出提示
//	分析
//	1. 定义一个double 保存成绩
//	2. 因为判断条件有多个，因此我们使用多分支处理
//	*/
//
//	double score = 0.0;
//	printf("请输入成绩");
//	scanf("%lf", &score);
//	
//	if( score == 100)  {
//		printf("奖励一辆BMW");
//	} else if (score > 80 && score <= 99) {
//		printf("奖励一台iphone7plus");
//	} else if (score >= 60 && score <= 80) {
//		printf("奖励一台iPad");
//	} else {
//		printf("没有奖励");
//	}
//
//	getchar();//得到的回车
//	getchar();//控制暂停
//}