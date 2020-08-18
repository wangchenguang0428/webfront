//#include < stdio.h >
///**********found**********/
//
////分析
////1. double a, b, double x,y 这样形参形式不对
//void fun ( double a, double b, double *x,double *y )
//{/**********found**********/
//*x = a * b; *y = a / b; //因为x,y 是指针，因此需要通过取值符 * 来接收值
//}
//main ( )
//{ double a, b, c, d;
//printf ( "Enter a , b : ");
//scanf ( "%lf%lf", &a, &b );
////分析
////1. &c 是地址，形参就应该是指针类型
////2. 因为是按照地址传递，因此 fun 函数操作的*x,*y 就是 c,d
//fun ( a , b, &c, &d ) ;
//printf (" c = %f d = %f\n ", c, d );
////特别说明，如果原来的题中，没有getchar(); 请不要添加
//getchar();
//getchar();
//}