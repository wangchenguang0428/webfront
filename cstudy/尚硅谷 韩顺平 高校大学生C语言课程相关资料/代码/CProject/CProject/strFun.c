//#include <stdio.h>
//#include <string.h> // 头文件中声明字符串相关的系统函数
//
//void main() {
//
//	char src[50] = "abc", dest[50]; //定义了两个字符数组(字符串) , 大小为50
//	char * str = "abcdff";
//	printf("str.len=%d", strlen(str)); //统计字符串的大小
//	
//	//表示将 "hello" 拷贝到 src
//	//注意，拷贝字符串会将原来的内容覆盖
//	strcpy(src,  "hello");
//	printf("\s src=%s", src); 
//
//	strcpy(dest, "尚硅谷");
//	//strcat 是将 src 字符串的内容连接到 dest ,但是不会覆盖dest原来的内容，而是连接!! 
//	strcat(dest, src); // "hello尚硅谷"
//	printf("最终的目标字符串： dest=%s", dest);
//	getchar();
//
//}