//#include <stdio.h>
//
//void main() {
//	
//	char str1[ ]={"I am happy"};  // 默认后面加 '\0'
//	char str2[ ]="I am happy"; // 省略{}号 ,默认后面加 '\0'
//	char str3[ ]={'I',' ','a','m',' ','h','a','p','p','y'}; // 字符数组后面不会加 '\0', 可能有乱码
//	char str4[5]={'C','h','i','n','a'}; //字符数组后面不会加 '\0', 可能有乱码
//	char * pStr = "hello";//ok
//
//
//
//	printf("\n str1=%s", str1);
//	printf("\n str2=%s", str2);//ok
//	printf("\n str3=%s", str3);//乱码
//	printf("\n str4=%s", str4);//乱码
//
//	getchar();
//
//}