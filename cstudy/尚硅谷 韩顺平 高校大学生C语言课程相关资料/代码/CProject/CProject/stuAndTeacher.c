//#include <stdio.h>
//#define TOTAL 2  //人员总数
//
//
////定义了一个结构体 Person
//
////union MYUNION {
////	float score;
////	char course[20];
////};
//
//struct Person{
//	char name[20]; //name
//	int num; //编号
//	char sex;//性别 f => 女 m=>男
//	char profession;//职员 s=>学生 t=>老师
//	union{  
//		float score;
//		char course[20];
//	} sc;//sc 是一个共用体变量
//	//union MYUNION sc;
//};
//
//
//void main(){
//	int i;
//	struct Person persons[TOTAL]; // 定义了一个结构体数组 
//	//输入人员信息
//	for(i=0; i<TOTAL; i++){
//		printf("Input info: ");
//		scanf("%s %d %c %c", persons[i].name, &(persons[i].num), &(persons[i].sex), &(persons[i].profession));
//		if(persons[i].profession == 's'){  //如果是学生
//			printf("请输入该学生成绩:");
//			scanf("%f", &persons[i].sc.score);
//		}else{  //如果是老师
//			printf("请输入该老师课程:");
//			scanf("%s", persons[i].sc.course);
//		}
//		fflush(stdin);//刷新
//	}
//	//输出人员信息
//	printf("\nName\t\tNum\tSex\tProfession\tScore / Course\n");
//	for(i=0; i<TOTAL; i++){
//		if(persons[i].profession == 's'){  //如果是学生
//			printf("%s\t\t%d\t%c\t%c\t\t%f\n", persons[i].name, persons[i].num, persons[i].sex, persons[i].profession, persons[i].sc.score);
//		}else{  //如果是老师
//			printf("%s\t\t%d\t%c\t%c\t\t%s\n", persons[i].name, persons[i].num, persons[i].sex, persons[i].profession, persons[i].sc.course);
//		}
//	}
//	getchar();
//	getchar();
//}
