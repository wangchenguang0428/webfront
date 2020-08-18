//*给定程序modi.c 中，函数fun 的功能是：将字符串tt 中的小写字母改
//为对应的大写字母，其它字符不变。例如，若输入"Ab,cD"，则输出"AB,CD"。 请
//改正程序中的错误，使它能得出正确结果。 注意：不要改动main 函数，*/
//#include < conio.h >
//#include < stdio.h >
//#include < string.h >
//
////分析:
////1. 错误1，if(('a'<=tt[i]) || (tt[i]<='z')) 因为我们是将 a-z 的字符转成大写的,因此 &&
////                  修改成 if(('a'<=tt[i]) && (tt[i]<='z')) 
//
////2.错误2.  tt[i]+=32; 因为大写的字母 ASCIII 小于 小写的字母，相差 32
////					tt[i]+=32;  改成 tt[i]-=32;
//char *fun(char tt[])
//{ int i;
//for(i=0;tt[i];i++)//遍历 tt数组
//if(('a'<=tt[i]) && (tt[i]<='z'))
//tt[i]-=32;
//return(tt);
//}
//main()
//{ int i;
//char tt[81];
//printf("\nPlease enter a string:");
//gets(tt);
//printf("\nThe result string is:\n%s", fun(tt));
//}