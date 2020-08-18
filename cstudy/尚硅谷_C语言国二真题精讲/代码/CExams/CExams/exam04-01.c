///*下列给定程序中，函数fun()的功能是：根据输入的3 个边长(整型值)，
//判断能否构成三角形：若能构成等边三角形，则返回3，若是等腰三角形，则返回
//2，若能构成三角形则返回1，若不能，则返回0。 试题程序：*/
//#include < math.h >
//#include < stdio.h >
////分析
////1. 空格1 是一个函数的返回数据类型，根据fun函数，我们发现return 都是整数,因此 填入 int
////2. 空格2 是判断，判断 给定的三边是否可以构成一个三角形 (条件 任意两边的和大于第三边)
////    ，因此填写  a + b > c && a + c > b && b + c > a
////3. 空格3 是 if 配对 的 else, 因此填写 else
//int fun(int a,int b,int c)
//{ if(a + b > c && a + c > b && b + c > a )
//{if(a==b&&b==c)
//return 3;
//else if(a==b||b==c||a==c)
//return 2;
//else return 1;
//}
//else  return 0;
//}
//main()
//{ int a,b,c,shape;
//printf("\nInput a,b,c: "); scanf("%d %d %d",&a,&b,&c);
//printf("\na=%d, b=%d, c=%d\n",a,b,c);
//shape=fun(a,b,c);
//printf("\n\nThe shape :%d\n",shape);
//getchar();
//getchar();
//}