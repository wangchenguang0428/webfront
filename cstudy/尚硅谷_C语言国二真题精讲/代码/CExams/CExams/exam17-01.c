///*��������Ĺ����ǣ��Ӽ��������������ļ���ÿ�в�����80 ���ַ�����
//д���ļ�myfile4.txt �У���-1 ��Ϊ�ַ�����������ı�־��Ȼ���ļ������ݶ�
//����ʾ����Ļ�ϡ��ļ��Ķ�д�ֱ����Զ��庯��ReadText ��WriteText ʵ�֡�*/
//#include < stdio.h >
//#include < string.h >
//#include < stdlib.h >
////����
////���ܵ�Ҫ����ȷ�����û����뵽��Ļ�ϵ����� д���ļ� myfile4.txt
////Ȼ��myfile4.txt �����ڶ�ȡ����ʾ����Ļ
//
////1. �ո�1�� void WriteText(FILE __��1��__ ) �β�Ӧ����һ���ļ�ָ�� ��д *fw
////2. �ո�2�� fputs( __��2��__ ,fw); ����ȡ��������д�뵽fw ָ����ļ���, ��д str
////3. �ո�3,  printf("%s", ___��3��___); �����ļ��ж�ȡ�����������,��дstr
//void WriteText(FILE *);
//void ReadText(FILE *);
//FILE *fp;//�ļ�ָ�룬ȫ�ֱ���
//main()
//{ if((fp=fopen("myfile4.txt", "w"))==NULL)
//{printf("open fail!!\n"); exit(0);}
//WriteText(fp);//���û�����д���ļ�
//fclose(fp);//�ر��ļ�
//
//if((fp=fopen("myfile4.txt","r"))==NULL)
//{printf(" open fail!!\n"); exit(0);}
//ReadText(fp);//��ȡ�ļ�
//fclose(fp);
//getchar();
//getchar();
//}
//void WriteText(FILE *fw )
//{ char str[81];
//printf("\nEnter string with -1 to end :\n");
//gets(str);//��ȡһ��
//while(strcmp(str,"-1")!=0) { //�ж��ǲ���-1,�������-1,�����
//fputs( str ,fw); fputs("\n",fw);
//gets(str);
//}
//}
//void ReadText(FILE *fr)
//{ char str[81];
//printf("\nRead file and output to screen :\n");
//fgets(str, 81, fr);//��fr ��ȡ81���, ��str �ַ�����
//while(!feof(fr)) { // ֻҪ�����ļ�����
//printf("%s", str);
//fgets(str,81,fr);
//}
//}