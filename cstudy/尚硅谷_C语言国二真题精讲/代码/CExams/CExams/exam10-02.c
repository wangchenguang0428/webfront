///*给定程序modi.c 中，函数fun 的功能是：用冒泡法对6 个字符串按由
//大到小的顺序进行排序。
//请改正程序中的错误，使它能得出正确的结果。
//注意：不要改动main 函数，*/
//#include < stdio.h >
//#include < conio.h >
//#include <string.h>
//#define MAXLINE 20
//
////分析
////1. 首先，我们必须对源码进行阅读，理解大致的思路
////2. char *pstr[6] pstr 是一个指针数组 , 每个元素都是一个指针，分别指向字符串
////3. char str[6][MAXLINE]; str 是一个二维字符数组， 即每一个元素，就是一个字符串
////4. for(i=0;i< 6;i++) pstr[i]=str[i]; 让pstr 中的各个指针指向 各个字符串
//
////5. 
///*
//printf("\nEnter 6 string(1 string at each line):\n");
//for (i=0;i< 6;i++) scanf("%s",pstr[i]);
//让用户输入6个字符串
//
//*/
//
////6. fun(pstr); 调用函数，完成排序
////7. 
///*
//printf("The strings after sorting:\n");
//for(i=0;i< 6;i++) printf("%s\n",pstr[i]);
//
//输出排序后的情况
//*/
//
////8. 错误1：strcmp(*(pstr+i),pstr+j 比较两个字符串的大小, 修改成 
////    strcmp(*(pstr+i),*(pstr+j)	
//
////9 错误2： *(pstr+i)=pstr+j; 因为是在交换内容，因此也需要使用 取值符
////   改成： *(pstr+i)=*(pstr+j);
//void fun(char *pstr[6])
//{ int i,j;
//char *p;
////冒泡排序
//for (i=0;i< 5;i++) {
//for(j=i+1;j< 6;j++) {
//if(strcmp(*(pstr+i),*(pstr+j))< 0)
//{
//p=*(pstr+i);
//*(pstr+i)=*(pstr+j);
//*(pstr+j)=p;
//}
//}
//}
//}
//main()
//{int i;
//char *pstr[6],str[6][MAXLINE];
//for(i=0;i< 6;i++) pstr[i]=str[i];
//printf("\nEnter 6 string(1 string at each line):\n");
//for (i=0;i< 6;i++) scanf("%s",pstr[i]);
//fun(pstr);
//printf("The strings after sorting:\n");
//for(i=0;i< 6;i++) printf("%s\n",pstr[i]);
//getchar();
//getchar();
//}