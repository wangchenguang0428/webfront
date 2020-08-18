//#include <stdio.h>
//
//void main() {
//	
////	使用 switch 把小写类型的 char型转为大写(键盘输入)。只转换 a, b, c, d, e. 其它的输出 “other”。
//
//	/*char c1 = 'u';
//
//	switch(c1) {
//	case 'a' :
//		printf("A");
//		break;
//	case 'b' :
//		printf("B");
//		break;
//	case 'c' :
//		printf("C");
//		break;
//	case 'd' :
//		printf("D");
//		break;
//	case 'e' :
//		printf("E");
//		break;
//	default :
//		printf("other");
//	}
//	getchar();*/
//
////对学生成绩大于60分的，输出“合格”。低于60分的，输出“不合格”。(注：输入的成绩不能大于100)
//
//	//double d1 = 0.0;
//	//printf("请输入成绩");
//	//scanf("%lf", &d1);
//
//	//switch( (int)(d1/60) ) { //即 switch() 括号中，可以是一个复杂表达式
//	//case 0 :
//	//	printf("不合格");
//	//	break;
//	//case 1:
//	//	printf("合格");
//	//	break;
//	//default :
//	//	printf("输入成绩有误");
//	//}
//	//getchar();
//	//getchar();
//
////根据用于指定月份，打印该月份所属的季节。3,4,5 春季 6,7,8 夏季  9,10,11 秋季 12, 1, 2 冬季
//
//	int month = 0;
//	printf("请输入月份");
//	scanf("%d", &month);
//	switch(month){
//	case 3: //switch 穿透来简化
//	case 4:
//	case 5:
//		printf("春季");
//		break;
//	case 6: //switch 穿透来简化
//	case 7:
//	case 8:
//		printf("夏季");
//		break;
//	case 9: //switch 穿透来简化
//	case 10:
//	case 11:
//		printf("秋季");
//		break;
//	case 12: //switch 穿透来简化
//	case 1:
//	case 2:
//		printf("冬季");
//	}
//	getchar();
//	getchar();
//
//}