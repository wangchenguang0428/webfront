///*下列给定程序中函数fun()的功能是计算1/n!的值。 例如：给n 输入
//5，则输出0.008333。 请改正程序中的错误，使它能得到正确结果。 注意：不要
//改动main 函数，不得增行或删行，也不得更改程序的结构。 试题程序：*/
//#include < stdio.h >
//#include < conio.h >
///**********************found***********************/
//
////分析
////1. fun 函数返回的数据类型 应该是 double,而不能是 int
////2. result *=n++; 不对，因为我们求的是 n! 就是  1 * 2 * 3 * 4 * 5 =》 5 * 4 * 3 * 2 * 1
////    修改 成  result *=n-- ;
//double fun(int n)
//{ 
//	double result =1.0;
//	if(n==0)
//		return 1.0;
//	while(n >1 && n < 170)
//		/**********************found***********************/
//		result *=n-- ;
//	result=1/result;
//	return result;
//}
//main()
//{
//int n;
//printf("Input N:");
//scanf("%d",&n);
//printf("\n1/%d!=%lf\n",n,fun(n));
//getchar();
//getchar();
//}