///*给定程序modi.c 中，函数fun 的功能是：按以下递归公式求函数值
//fun(n)=10 (n=1)，fun(n)=fun(n-1)+2 (n>1) 例如，当给n 输入5 时，函数
//值为18；当给n 输入3 时，函数值为14。 请改正程序中的错误，使它能得出正确
//结果。 注意：不要改动main 函数。*/
//#include < stdio.h >
////分析
////1. 需要阅读源代码
////2. 错误1 if (n=1) 这里应该是判断 n == 1 , 而不是 赋值 ，应该改成  n == 1 即可
//int fun(int n)
//{ int c;
//if (n==1)
//c=10;
//else
//c=fun(n-1)+2;
//return(c);
//}
//main()
//{ int n;
//printf("Enter n:"); scanf("%d",&n);
//printf("The result:%d\n\n", fun(n));
//getchar();
//getchar();
//}