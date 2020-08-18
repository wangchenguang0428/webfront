///*请编写函数fun()，其功能是：将s所指字符串中下标为奇数的字符删
//除，串中剩余字符形成的新串放在t所指数组中。
//例如，当s 所指字符串中的内容为siegAHdied，则在t 所指数组中的内容应是
//seAde。
//注意：部分源程序给出如下。
//请勿改动主函数main 和其他函数中的任何内容，仅在函数fun 的花括号中填入所编
//写的若干语句。
//试题程序：*/
//#include< conio.h >
//#include< stdio.h >
//#include< string.h >
////分析
////1. 传入一个字符串 s, 将s 中的下标为奇数的字符去掉(过滤)，赋给t
////2. 使用for循环，处理下标为偶数的即可
//void fun(char *s,char t[]){
//	int i,j=0, sLen = strlen(s);
//	for(i = 0; i < sLen; i++) {
//		if(i % 2 == 0) {
//			t[j++] = s[i]; //s[i]字符赋给 t[j], 然后j自增
//		}
//	}
//	//当for循环结束后，给t字符数组加上结束标志
//	t[j] = '\0';
//}
//main()
//{ char s[100],t[100];
//printf("\nPlease enter string S: ");
//scanf("%s",s);
//fun(s,t);
//printf("\nThe result is:%s\n ",t);
//}