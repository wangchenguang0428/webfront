//#include <stdio.h>
//#include <time.h> //该头文件中，声明和日期和时间相关的函数
//
//void test() { // 运行test函数，看看执行花费时间
//	int i = 0;
//	int sum = 0;
//	int j = 0;
//	for(i = 0; i < 77777777;i++) {
//		sum = 0;
//		for (j = 0; j< 10;j++) {
//			sum += j;
//		}
//	}
//}
//
//
//int main () {
//   //time_t curtime; //time_h 是一个结构体类型
//   //time(&curtime); //time() 完成初始化
//
//   ////ctime 返回一个表示当地时间的字符串，当地时间是基于参数 timer
//   //printf("当前时间 = %s", ctime(&curtime));
//   //getchar();
//   //return(0);
//
//
//	//先得到执行test前的时间
//
//	time_t start_t, end_t;
//	double diff_t; //存放时间差
//	printf("程序启动...\n");
//	time(&start_t); //初始化得到当前时间
//
//
//	test(); //执行test
//
//	//再得到执行test后的时间
//
//	time(&end_t);//得到当前时间
//    diff_t = difftime(end_t, start_t); //时间差，按秒 ent_t - start_t
//
//
//	//然后得到两个时间差就是耗用的时间
//	printf("执行test()函数 耗用了%.2f 秒", diff_t);
//	getchar();
//
//	return 0;
//}
