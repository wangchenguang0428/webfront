///*程序通过定义学生结构体变量，存储了学生的学号、姓名和3门课的成
//绩。所有学生数据均以二进制方式输出到文件中。函数fun 的功能是从形参
//filename 所指的文件中读入学生数据，并按照学号从小到大排序后，再用二进制方
//式把排序后的学生数据输出到filename 所指的文件中，覆盖原来的文件内容。*/
//#include < stdio.h >
//#define N 5
//typedef struct student { //定义了一个结构体类型 struct student
//long sno;
//char name[10];
//float score[3];
//} STU; //STU 就是结构体类型 别名
//
////分析
////1 空格1 因为文件是以二进制的形式创建并写入数据的，因此我们读取时，
////   也需要以相应的形式打开读取, 填写 "rb" 
////2, 空格2 按照学号从小到大排序后， 填写 > s[j].sno
////3. 空格3 将排序好的结构体数组 s 重写入到 文件中 ，填写 函数名就是 fwrite
//void fun(char *filename)
//{ FILE *fp; int i, j;
//STU s[N], t;
//fp = fopen(filename, "rb"); 
//fread(s, sizeof(STU), N, fp); //从fp 文件中 读取 sizeof(STU)*N, 到 s中
//fclose(fp);
//for (i=0; i< N-1; i++)
//for (j=i+1; j< N; j++)
//	if (s[i].sno > s[j].sno) //并按照学号从小到大排序后
//{ t = s[i]; s[i] = s[j]; s[j] = t; }
//fp = fopen(filename, "wb"); //打开 文件
//fwrite(s, sizeof(STU), N, fp); //将排序好的结构体数组 s 重写入到 文件中
//fclose(fp);
//}
//main()
//{ STU t[N]={ {10005,"ZhangSan", 95, 80, 88},//t 是结构体数组，存放5个学生的信息
//{10003,"LiSi", 85, 70, 78},
//{10002,"CaoKai", 75, 60, 88},
//{10004,"FangFang", 90, 82, 87},
//{10001,"MaChao", 91, 92, 77}}, ss[N];//ss 也是结构体数组
//int i,j; FILE *fp;
//fp = fopen("student.dat", "wb");//二进制形式打开，student.dat 文件如果不存在，就创建
//fwrite(t, sizeof(STU), 5, fp); //将t结构体数组信息写入到 fp中
//fclose(fp);
//printf("\n\nThe original data :\n\n");
//for (j=0; j< N; j++) //输出t结构体数组信息
//{ printf("\nNo: %ld Name: %-8s Scores:",t[j].sno, t[j].name);
//for (i=0; i< 3; i++) printf("%6.2f ",t[j].score[i]);
//printf("\n");
//}
//fun("student.dat");//调用fun函数
//
//printf("\n\nThe data after sorting :\n\n");
//fp = fopen("student.dat", "rb");
//fread(ss, sizeof(STU), 5, fp);
//fclose(fp);
//for (j=0; j< N; j++)
//{ printf("\nNo: %ld Name: %-8s Scores:",ss[j].sno, ss[j].name);
//for (i=0; i< 3; i++) printf("%6.2f ",
//ss[j].score[i]);
//printf("\n");
//}
//}