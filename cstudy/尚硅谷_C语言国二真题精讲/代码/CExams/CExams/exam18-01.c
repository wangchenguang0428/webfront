///*����ͨ������ѧ���ṹ��������洢��ѧ����ѧ�š�������3�ſεĳ�
//��������ѧ�����ݾ��Զ����Ʒ�ʽ������ļ��С�����fun �Ĺ����Ǵ��β�
//filename ��ָ���ļ��ж���ѧ�����ݣ�������ѧ�Ŵ�С������������ö����Ʒ�
//ʽ��������ѧ�����������filename ��ָ���ļ��У�����ԭ�����ļ����ݡ�*/
//#include < stdio.h >
//#define N 5
//typedef struct student { //������һ���ṹ������ struct student
//long sno;
//char name[10];
//float score[3];
//} STU; //STU ���ǽṹ������ ����
//
////����
////1 �ո�1 ��Ϊ�ļ����Զ����Ƶ���ʽ������д�����ݵģ�������Ƕ�ȡʱ��
////   Ҳ��Ҫ����Ӧ����ʽ�򿪶�ȡ, ��д "rb" 
////2, �ո�2 ����ѧ�Ŵ�С��������� ��д > s[j].sno
////3. �ո�3 ������õĽṹ������ s ��д�뵽 �ļ��� ����д ���������� fwrite
//void fun(char *filename)
//{ FILE *fp; int i, j;
//STU s[N], t;
//fp = fopen(filename, "rb"); 
//fread(s, sizeof(STU), N, fp); //��fp �ļ��� ��ȡ sizeof(STU)*N, �� s��
//fclose(fp);
//for (i=0; i< N-1; i++)
//for (j=i+1; j< N; j++)
//	if (s[i].sno > s[j].sno) //������ѧ�Ŵ�С���������
//{ t = s[i]; s[i] = s[j]; s[j] = t; }
//fp = fopen(filename, "wb"); //�� �ļ�
//fwrite(s, sizeof(STU), N, fp); //������õĽṹ������ s ��д�뵽 �ļ���
//fclose(fp);
//}
//main()
//{ STU t[N]={ {10005,"ZhangSan", 95, 80, 88},//t �ǽṹ�����飬���5��ѧ������Ϣ
//{10003,"LiSi", 85, 70, 78},
//{10002,"CaoKai", 75, 60, 88},
//{10004,"FangFang", 90, 82, 87},
//{10001,"MaChao", 91, 92, 77}}, ss[N];//ss Ҳ�ǽṹ������
//int i,j; FILE *fp;
//fp = fopen("student.dat", "wb");//��������ʽ�򿪣�student.dat �ļ���������ڣ��ʹ���
//fwrite(t, sizeof(STU), 5, fp); //��t�ṹ��������Ϣд�뵽 fp��
//fclose(fp);
//printf("\n\nThe original data :\n\n");
//for (j=0; j< N; j++) //���t�ṹ��������Ϣ
//{ printf("\nNo: %ld Name: %-8s Scores:",t[j].sno, t[j].name);
//for (i=0; i< 3; i++) printf("%6.2f ",t[j].score[i]);
//printf("\n");
//}
//fun("student.dat");//����fun����
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