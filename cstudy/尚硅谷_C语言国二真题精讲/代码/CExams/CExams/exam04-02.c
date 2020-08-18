///*给定程序modi.c 中，函数fun 的功能是：求两数平方根之和，作为函
//数值返回。 例如，输入12 和20，输出结果是：y=7.936238。 请改正程序中的
//错误，使它能得出正确结果。 注意：不要改动main 函数，*/
//#include < stdio.h >
//#include < math.h >
////分析
////1. 因为在main函数中，调用 fun 函数时，传递的是 &a &b, 因此 fun的形参就是 指针类型
////    第一错误 double fun(double *a,  *b) 改成  double fun(double *a, double *b)
////2. 因为 sqrt 函数接收的是数，而我们传入的是 指针，不对, 修改如下
////    	c=sqrt(a)+sqrt(b); 改成  c=sqrt(*a)+sqrt(*b);
//double fun(double *a, double *b)
//{ double c;
//
//c=sqrt(*a)+sqrt(*b);
//return c;
//}
//main()
//{ double a,b,y;
//printf("Enter a&b :");scanf("%lf %lf",&a,&b);
//y=fun(&a,&b); printf("y=%f\n",y);
//}