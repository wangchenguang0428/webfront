///*给定程序的功能是：从键盘输入若干行文件（每行不超过80 个字符），
//写到文件myfile4.txt 中，用-1 作为字符串输入结束的标志。然后将文件的内容读
//出显示在屏幕上。文件的读写分别由自定义函数ReadText 和WriteText 实现。*/
//#include < stdio.h >
//#include < string.h >
//#include < stdlib.h >
////分析
////功能的要求明确，将用户输入到屏幕上的内容 写入文件 myfile4.txt
////然后将myfile4.txt 内容在读取，显示在屏幕
//
////1. 空格1， void WriteText(FILE __【1】__ ) 形参应该是一个文件指针 填写 *fw
////2. 空格2， fputs( __【2】__ ,fw); 将读取到的内容写入到fw 指向的文件中, 填写 str
////3. 空格3,  printf("%s", ___【3】___); 将从文件中读取到的内容输出,填写str
//void WriteText(FILE *);
//void ReadText(FILE *);
//FILE *fp;//文件指针，全局变量
//main()
//{ if((fp=fopen("myfile4.txt", "w"))==NULL)
//{printf("open fail!!\n"); exit(0);}
//WriteText(fp);//将用户输入写入文件
//fclose(fp);//关闭文件
//
//if((fp=fopen("myfile4.txt","r"))==NULL)
//{printf(" open fail!!\n"); exit(0);}
//ReadText(fp);//读取文件
//fclose(fp);
//getchar();
//getchar();
//}
//void WriteText(FILE *fw )
//{ char str[81];
//printf("\nEnter string with -1 to end :\n");
//gets(str);//读取一行
//while(strcmp(str,"-1")!=0) { //判断是不是-1,如果不是-1,则进行
//fputs( str ,fw); fputs("\n",fw);
//gets(str);
//}
//}
//void ReadText(FILE *fr)
//{ char str[81];
//printf("\nRead file and output to screen :\n");
//fgets(str, 81, fr);//从fr 读取81最多, 到str 字符数组
//while(!feof(fr)) { // 只要不是文件结束
//printf("%s", str);
//fgets(str,81,fr);
//}
//}