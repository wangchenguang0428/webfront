///*下列给定程序中，函数fun()的功能是：输出M 行M 列整数方阵，然后
//求两条对角线上的各元素之和，返回此和数。
//试题程序：*/
//#include < conio.h >
//#include < stdio.h >
//#define M 5
////分析
////1. 方阵 如下
///*
//1,2,3,4,5
//4,3,2,1,0
//6,7,8,9,0
//9,8,7,6,5
//3,4,5,6,7
//和 ： 1+3+8+6 +7 = 25  5 +1+8+8+3 = 25 ==》 50
//
//*/
////2. 空格1 : fun函数会返回一个结果，是int , 空格1 应该填写 int
////3. 空格2: 因为 fun函数中会返回 sum , 需要定义，填写 sum = 0
////4. 空格3: 填写 x[i][i] + x[i][n-i-1]
///*
//for(i=0;i< n;i++) //n 是5
//sum+=___3___;  是求对角线的和   空格填写 xx[i][i] + xx[i][n-i-1], 找到规律
//*/
//int fun(int n,int xx[][M])
//{ int i, j,sum=0;
//printf("\nThe %d x %d matrix:\n",M,M);
//for(i=0;i< M;i++)
//{ for(j=0;j< M;j++)
//printf("%4d",xx[i][j]);
//printf("\n");
//}
//
//for(i=0;i< n;i++)
//sum+= xx[i][i] + xx[i][n-i-1];
//return(sum);
//}
//main()
//{ int
//aa[M][M]={{1,2,3,4,5},{4,3,2,1,0},{6,7,8,9,0},{9,8,7,6,5},{3,4,5,6,7}
//};
//printf("\nThe sum of all elements on 2 diagnals is %d",fun(M,aa));
//getchar();
//}