//#include <stdio.h>
//#define TOTAL 2  //��Ա����
//
//
////������һ���ṹ�� Person
//
////union MYUNION {
////	float score;
////	char course[20];
////};
//
//struct Person{
//	char name[20]; //name
//	int num; //���
//	char sex;//�Ա� f => Ů m=>��
//	char profession;//ְԱ s=>ѧ�� t=>��ʦ
//	union{  
//		float score;
//		char course[20];
//	} sc;//sc ��һ�����������
//	//union MYUNION sc;
//};
//
//
//void main(){
//	int i;
//	struct Person persons[TOTAL]; // ������һ���ṹ������ 
//	//������Ա��Ϣ
//	for(i=0; i<TOTAL; i++){
//		printf("Input info: ");
//		scanf("%s %d %c %c", persons[i].name, &(persons[i].num), &(persons[i].sex), &(persons[i].profession));
//		if(persons[i].profession == 's'){  //�����ѧ��
//			printf("�������ѧ���ɼ�:");
//			scanf("%f", &persons[i].sc.score);
//		}else{  //�������ʦ
//			printf("���������ʦ�γ�:");
//			scanf("%s", persons[i].sc.course);
//		}
//		fflush(stdin);//ˢ��
//	}
//	//�����Ա��Ϣ
//	printf("\nName\t\tNum\tSex\tProfession\tScore / Course\n");
//	for(i=0; i<TOTAL; i++){
//		if(persons[i].profession == 's'){  //�����ѧ��
//			printf("%s\t\t%d\t%c\t%c\t\t%f\n", persons[i].name, persons[i].num, persons[i].sex, persons[i].profession, persons[i].sc.score);
//		}else{  //�������ʦ
//			printf("%s\t\t%d\t%c\t%c\t\t%s\n", persons[i].name, persons[i].num, persons[i].sex, persons[i].profession, persons[i].sc.course);
//		}
//	}
//	getchar();
//	getchar();
//}
