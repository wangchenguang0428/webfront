///*��������modi.c �к���fun �Ĺ����ǣ��� m(1��m��10)���ַ�������
//���������һ���´�������pt�С� ���磺��3 ������"abc","CD","EF"����������
//�����"abcCDEF"�� ��������� fun �е��﷨����ʹ����ͳ�Ƴ���ȷ����� ע
//�⣺��Ҫ�Ķ� main ������*/
//#include < conio.h >
//#include < stdio.h >
//#include < string.h >
////����
////1. ���Ѿ�˵�������� fun �е��﷨������ˣ����ǲ���Ҫ�Ķ�Դ��
////2. ����c���Ե��﷨���򣬽����޸ļ���
////3. ���Կ�����Ƿ���ȷ
////4. Int �ĳ� int
////5. pt[i]=str[k,i]; �ĳ� pt[i]=str[k][i];
//int fun(char str[][10], int m, char *pt)
//{ 
//int k,q,i;
//for(k=0;k< m;k++)
//{ q=strlen(str[k]);
//for(i=0;i< q;i++)
//pt[i]=str[k][i];
//pt+=q;
//pt[0]=0;
//}
//}
//main()
//{ int m,h;
//char s[10][10], p[120];
//printf("\nPlease enter m:");
//scanf("%d", &m); gets(s[0]);
//printf("\nPlease enter %d string:\n",m);
//for (h=0; h<m; h++) gets(s[h]);
//fun(s,m,p);
//printf("\nThe result is:%s\n",p);
//}