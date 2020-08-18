//#include <stdio.h>
//
//void main() {
//	
//	//c 是一个一维字符数组，给部分元素赋值
//	char c[7]={'t','o','m'}; 
//	
//	char str[4] = {'a','b','c','\0'};
//	char str2[] = {'j','a','c','k'}; // 这个后面系统也不会自动添加 '\0'
//	//输出 c , 系统会这样处理
//	//1. 从第一个字符开始输出，直到遇到 \0 , 表示该字符串结束
//	printf("\nc=%s", c);
//
//	printf("\nstr=%s", str); // abc?
//	printf("\nstr2=%s", str2); // jack乱码
//	getchar();
//}