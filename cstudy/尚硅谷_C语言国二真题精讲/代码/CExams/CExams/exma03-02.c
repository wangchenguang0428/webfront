//*给定程序modi.c 中函数fun的功能是：根据输入的三个边长（整型
//值），判断能否构成三角形： 构成的是等边三角形，还是等腰三角形。若能构成等
//边三角形函数返回3，若能构成等腰三角形函数返回2，若能构成一般三角形函数返
//回1，若不能构成三角形函数返回0。 请改正函数fun 中指定部位的错误，使它能
//得出正确的结果。 注意：不要改动main 函数，*/
//#include < math.h >
//#include <stdio.h>
//
////分析
//*
//1. 任意两边的和大于第三边，则可以构成三角形
//2. if(a+b >c && b+c >a && a+c >b) // 为真，然后判断是什么三角形
//3. a==b && b==c 满足，就是三边相等，就构成等边三角， 改成 return 3
//4. else 就应该是 一般三角形 ，因此 return 3 改成  return 1
//*/
//
//int fun(int a,int b,int c)
//{ if(a+b >c && b+c >a && a+c >b) {
//if(a==b && b==c)
//return 3;
//else if(a==b||b==c||a==c)
//return 2;
//else return 1;
//}
//else return 0;
//}
//main()
//{ int a,b,c,shape;
//printf("\nInput a,b,c: ");
//scanf("%d %d %d",&a,&b,&c);
//printf("\na=%d, b=%d, c=%d\n",a,b,c);
//shape =fun(a,b,c);
//printf("\n\nThe shape : %d\n",shape);
//getchar();
//getchar();
//}