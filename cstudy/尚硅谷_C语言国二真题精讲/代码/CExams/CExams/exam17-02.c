//*��������modi.c �У�����fun �Ĺ����ǣ����ַ���tt �е�Сд��ĸ��
//Ϊ��Ӧ�Ĵ�д��ĸ�������ַ����䡣���磬������"Ab,cD"�������"AB,CD"�� ��
//���������еĴ���ʹ���ܵó���ȷ����� ע�⣺��Ҫ�Ķ�main ������*/
//#include < conio.h >
//#include < stdio.h >
//#include < string.h >
//
////����:
////1. ����1��if(('a'<=tt[i]) || (tt[i]<='z')) ��Ϊ�����ǽ� a-z ���ַ�ת�ɴ�д��,��� &&
////                  �޸ĳ� if(('a'<=tt[i]) && (tt[i]<='z')) 
//
////2.����2.  tt[i]+=32; ��Ϊ��д����ĸ ASCIII С�� Сд����ĸ����� 32
////					tt[i]+=32;  �ĳ� tt[i]-=32;
//char *fun(char tt[])
//{ int i;
//for(i=0;tt[i];i++)//���� tt����
//if(('a'<=tt[i]) && (tt[i]<='z'))
//tt[i]-=32;
//return(tt);
//}
//main()
//{ int i;
//char tt[81];
//printf("\nPlease enter a string:");
//gets(tt);
//printf("\nThe result string is:\n%s", fun(tt));
//}