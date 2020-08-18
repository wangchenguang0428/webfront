//#include <stdio.h>
//
//enum DAY {
//      MON, TUE, WED, THU=9, FRI, SAT, SUN //如果没有给赋值，就会按照顺序赋值
//} day; // 表示 定义了一个枚举类型 enum Day ,同时定义了一个变量 day(类型是 enum DAY)
//
//
//int main() {
//	
//	// 遍历枚举元素, 枚举的每个元素都对应数值
//	//day++ 会给出警告，但是可以运行
//	for (day = MON; day <= SUN; day++) { //SUN = 12
//		printf("枚举元素：%d \n", day); // 1, 2, 3, 4,5,6,7
//	}
//	//day = FRI;
//	//printf("%d", day); // 10
//	getchar();
//	return 0;
//
//}