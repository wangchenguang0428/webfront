///*��������modi.c �У�����fun �Ĺ����ǣ���ð�ݷ���6 ���ַ�������
//��С��˳���������
//����������еĴ���ʹ���ܵó���ȷ�Ľ����
//ע�⣺��Ҫ�Ķ�main ������*/
//#include < stdio.h >
//#include < conio.h >
//#include <string.h>
//#define MAXLINE 20
//
////����
////1. ���ȣ����Ǳ����Դ������Ķ��������µ�˼·
////2. char *pstr[6] pstr ��һ��ָ������ , ÿ��Ԫ�ض���һ��ָ�룬�ֱ�ָ���ַ���
////3. char str[6][MAXLINE]; str ��һ����ά�ַ����飬 ��ÿһ��Ԫ�أ�����һ���ַ���
////4. for(i=0;i< 6;i++) pstr[i]=str[i]; ��pstr �еĸ���ָ��ָ�� �����ַ���
//
////5. 
///*
//printf("\nEnter 6 string(1 string at each line):\n");
//for (i=0;i< 6;i++) scanf("%s",pstr[i]);
//���û�����6���ַ���
//
//*/
//
////6. fun(pstr); ���ú������������
////7. 
///*
//printf("The strings after sorting:\n");
//for(i=0;i< 6;i++) printf("%s\n",pstr[i]);
//
//������������
//*/
//
////8. ����1��strcmp(*(pstr+i),pstr+j �Ƚ������ַ����Ĵ�С, �޸ĳ� 
////    strcmp(*(pstr+i),*(pstr+j)	
//
////9 ����2�� *(pstr+i)=pstr+j; ��Ϊ���ڽ������ݣ����Ҳ��Ҫʹ�� ȡֵ��
////   �ĳɣ� *(pstr+i)=*(pstr+j);
//void fun(char *pstr[6])
//{ int i,j;
//char *p;
////ð������
//for (i=0;i< 5;i++) {
//for(j=i+1;j< 6;j++) {
//if(strcmp(*(pstr+i),*(pstr+j))< 0)
//{
//p=*(pstr+i);
//*(pstr+i)=*(pstr+j);
//*(pstr+j)=p;
//}
//}
//}
//}
//main()
//{int i;
//char *pstr[6],str[6][MAXLINE];
//for(i=0;i< 6;i++) pstr[i]=str[i];
//printf("\nEnter 6 string(1 string at each line):\n");
//for (i=0;i< 6;i++) scanf("%s",pstr[i]);
//fun(pstr);
//printf("The strings after sorting:\n");
//for(i=0;i< 6;i++) printf("%s\n",pstr[i]);
//getchar();
//getchar();
//}