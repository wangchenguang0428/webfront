/*请编写一个函数fun()，它的功能是：比较两个字符串的长度，（不得调
用C 语言提供的求字符串长度的函数），函数返回较短的字符串。若两个字符串长度
相等，则返回第1 个字符串。
例如，输入nanjing < CR > nanchang < CR >（< CR >为回车键），函数将返
回nanjing。
注意：部分源程序给出如下。
请勿改动主函数main 和其他函数中的任何内容，仅在函数fun 的花括号中填入所编
写的若干语句。
试题程序：*/
#include< stdio.h >
//分析
//1. 思路
//(1) 先统计s 和 t 指向的字符串的长度
//(2) 比如 s 和 t 长度，然后按照要求返回对应的指针即可
//(3) 在fun函数中，我们不需要创建临时字符数组，只需通过s和 t 去操作main函数的a,b 数组
char *fun(char *s, char *t){
	int i,j;
	for(i =0; s[i]!='\0';i++); // i 就是s指向字符串的长度
	for(j =0; t[j]!='\0';j++); // j 就是t指向字符串的长度

	//函数返回较短的字符串。若两个字符串长度相等，则返回第1 个字符串
	if(i <= j) { //
		return s;
	}else{
		return t;
	}
}
main()
{ char a[20],b[10],*p,*q;
int i;
printf("Input 1th string: ");
gets(a);
printf("Input 2th string: ");
gets(b);
printf("%s",fun(a,b));
}