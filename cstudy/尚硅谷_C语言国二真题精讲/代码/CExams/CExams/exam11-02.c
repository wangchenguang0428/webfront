///*��������modi.c �У�fun �����Ĺ����ǣ��ж�����ָ����ָ�洢��Ԫ��
//��ֵ�ķ����Ƿ���ͬ������ͬ��������1�����򷵻�0���������洢��Ԫ�е�ֵ����
//Ϊ0��
//����������еĴ���ʹ���ܵó���ȷ�����
//ע�⣺��Ҫ�Ķ�main ������*/
//#include < stdio.h >
//#include < conio.h>
//
////����
////1. ����1 fun �����з���ֵ int , fun(double *a,*b) => int fun(double *a,*b)
////2. ����2 fun�����βθ�ʽ���� (double *a,*b) =�� (double *a,double *b)
////3. ����3 ,��Ϊ�� �ж� �����Ƿ���ͬ�� if(a*b >0.0) ������ ��a �� b ָ���ֵ���
////    �ĳ� => if((*a)* (*b) >0.0)
//int fun(double *a,double *b)
//{
//if((*a)* (*b) >0.0)
//return 1;
//else return 0;
//}
//main()
//{ double n,m;
//printf("Enter n,m:");scanf("%lf %lf",&n,&m);
//printf("\nThe value of function is:%d\n",fun(&n,&m));
//getchar();
//getchar();
//}