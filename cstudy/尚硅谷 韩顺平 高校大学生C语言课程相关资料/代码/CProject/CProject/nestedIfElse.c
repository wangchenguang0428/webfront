//#include <stdio.h>
//void main() {
//	
//	/*
//	参加百米运动会，如果用时8秒以内进入决赛，否则提示淘汰。并且根据性别提示进入男子组或女子组。
//	【可以让学员先练习下】, 输入成绩和性别，进行判断。1分钟思考
//
//	分析
//	1. 变量 double time 保存时间
//	2. 变量 char gender 保存性别
//	3. 使用嵌套分支
//	*/
//
//	double time = 0.0;
//	char gender = ' ';
//	printf("请输入跑步成绩(s) ");
//	scanf("%lf", &time);
//
//	//根据time 判断是否进入决赛
//	if( time <= 8 ) {
//		//进入
//		printf("请输入性别(m/f)");
//		scanf("%c", &gender); // 接收到上次回车
//		scanf("%c", &gender); // 这次才接收到性别
//
//		if(gender == 'm') {//male 男
//			printf("请进入男子组");
//		} else {
//			printf("请进入女子组");
//		}
//
//	} else {
//		printf("你被淘汰");
//	}
//	getchar(); //回车
//	getchar(); //暂停
//}