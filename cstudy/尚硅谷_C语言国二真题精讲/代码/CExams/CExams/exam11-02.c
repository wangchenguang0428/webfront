///*给定程序modi.c 中，fun 函数的功能是：判断两个指针所指存储单元中
//的值的符号是否相同；若相同函数返回1，否则返回0。这两个存储单元中的值都不
//为0。
//请改正程序中的错误，使它能得出正确结果。
//注意：不要改动main 函数，*/
//#include < stdio.h >
//#include < conio.h>
//
////分析
////1. 错误1 fun 函数有返回值 int , fun(double *a,*b) => int fun(double *a,*b)
////2. 错误2 fun函数形参格式错误 (double *a,*b) =》 (double *a,double *b)
////3. 错误3 ,因为是 判断 符号是否相同， if(a*b >0.0) 本意是 让a 和 b 指向的值相乘
////    改成 => if((*a)* (*b) >0.0)
//int fun(double *a,double *b)
//{
//if((*a)* (*b) >0.0)
//return 1;
//else return 0;
//}
//main()
//{ double n,m;
//printf("Enter n,m:");scanf("%lf %lf",&n,&m);
//printf("\nThe value of function is:%d\n",fun(&n,&m));
//getchar();
//getchar();
//}