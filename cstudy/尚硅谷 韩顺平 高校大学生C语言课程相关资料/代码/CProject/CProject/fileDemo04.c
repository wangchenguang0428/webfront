//#include <stdio.h>
//void main() {
//	
//	//创建一个文件指针
//	FILE *fp = NULL;
//
//	//打开该文件
//	fp = fopen("d:/test100.txt", "w+"); //w+ 模式是 文件会被截断为零长度
//	//fp = fopen("d:/test100.txt", "a+"); //w+ 模式是 文件会被截断为零长度
//	//将内容写入到文件中
//	fprintf(fp, "你好 北京~~\n");
//	fputs("你好，上海~~\n", fp);
//
//	//关闭文件!!!, 如果不关闭 ，我们的内容没有保存到文件中!!
//	fclose(fp);
//	printf("创建， 写入信息完成");
//	getchar();
//
//}