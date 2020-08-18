//#include <stdio.h>
//
//void main() {
//	
//	//创建一个文件指针
//	FILE *fp = NULL;
//	//定义一个缓冲区
//	char buff[1024];
//
//	//打开文件
//	fp = fopen("d:/test200.txt", "r");
//	//方法1
//	//fscanf(fp, "%s", buff);
//	////输出
//	//printf("%s\n", buff);
//
//	//方法2 读取整个文件
//	//说明，循环读取fp指向的文件内容，如果读到NULL,就结束
//
//	while(fgets(buff, 1024,fp)!=NULL) {
//		printf("%s", buff);
//	}
//	
//	//关闭文件
//	fclose(fp);
//
//
//	getchar();
//}