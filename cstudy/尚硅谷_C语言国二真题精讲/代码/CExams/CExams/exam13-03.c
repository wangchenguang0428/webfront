///*请编写一个函数fun(char *s)，
//1) 函数的功能是把字符串中所有的字母改写在该字母的下一个字母，
//2) 最后一个字母z 改写成字母a。
//3) 大写字母仍为大写字母，小写字母仍为小写字母
//4) 其他的字符不变。 
//例如，原有的字符串为：Mn.123xyZ，
//则调用该函数后，串中的内容为：No.123yzA。 注意：部分源程序存在文件prog.c
//中。 请勿改动主函数main 和其他函数中的任何内容，仅在函数fun 的花括号中填
//入你编写的若干语句。*/
//#include < conio.h >
//#include < string.h >
//#include < stdio.h >
//#include < ctype.h >
//#define N 81
////分析
////1. 因为是对 所有的字母处理，因此需要对传入的字符串进行遍历
////2. 处理的规则是 '字母' + 1 ，但是 'z' ,'Z' 需要单独处理
////3. 使用 for + switch
//void fun(char *s){
//	//定义循环变量 i, 计算字符串的长度
//	int i, length;
//	length = strlen(s);
//	for( i = 0; i < length; i++) {
//		//其他的字符不变
//		if( !((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))) {
//			continue;
//		}
//		//下面就是要处理的字符
//		switch(s[i]) {
//			case 'z' : 
//				s[i] = 'a';
//				break;
//			case 'Z' : 
//				s[i] = 'A';
//				break;
//			default :
//				s[i] = s[i] + 1;
//				break;
//		}
//	}
//}
//main()
//{ char a[N];
//printf("Enter a string:");gets(a);
//printf("The original string is :");puts(a);
//fun(a);
//printf("The string after modified: ");
//puts(a);
//getchar();
//getchar();
//}