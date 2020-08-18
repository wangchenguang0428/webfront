///*给定程序modi.c 中函数fun 的功能是：把 m(1≤m≤10)个字符串连接
//起来，组成一个新串，放入pt中。 例如：把3 个串："abc","CD","EF"串连起来，
//结果是"abcCDEF"。 请改正函数 fun 中的语法错误，使它能统计出正确结果。 注
//意：不要改动 main 函数。*/
//#include < conio.h >
//#include < stdio.h >
//#include < string.h >
////分析
////1. 题已经说明，函数 fun 中的语法错误，因此，我们不需要阅读源码
////2. 根据c语言的语法规则，进行修改即可
////3. 测试看结果是否正确
////4. Int 改成 int
////5. pt[i]=str[k,i]; 改成 pt[i]=str[k][i];
//int fun(char str[][10], int m, char *pt)
//{ 
//int k,q,i;
//for(k=0;k< m;k++)
//{ q=strlen(str[k]);
//for(i=0;i< q;i++)
//pt[i]=str[k][i];
//pt+=q;
//pt[0]=0;
//}
//}
//main()
//{ int m,h;
//char s[10][10], p[120];
//printf("\nPlease enter m:");
//scanf("%d", &m); gets(s[0]);
//printf("\nPlease enter %d string:\n",m);
//for (h=0; h<m; h++) gets(s[h]);
//fun(s,m,p);
//printf("\nThe result is:%s\n",p);
//}