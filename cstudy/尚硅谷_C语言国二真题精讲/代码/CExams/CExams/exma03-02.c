//*��������modi.c �к���fun�Ĺ����ǣ���������������߳�������
//ֵ�����ж��ܷ񹹳������Σ� ���ɵ��ǵȱ������Σ����ǵ��������Ρ����ܹ��ɵ�
//�������κ�������3�����ܹ��ɵ��������κ�������2�����ܹ���һ�������κ�����
//��1�������ܹ��������κ�������0�� ���������fun ��ָ����λ�Ĵ���ʹ����
//�ó���ȷ�Ľ���� ע�⣺��Ҫ�Ķ�main ������*/
//#include < math.h >
//#include <stdio.h>
//
////����
//*
//1. �������ߵĺʹ��ڵ����ߣ�����Թ���������
//2. if(a+b >c && b+c >a && a+c >b) // Ϊ�棬Ȼ���ж���ʲô������
//3. a==b && b==c ���㣬����������ȣ��͹��ɵȱ����ǣ� �ĳ� return 3
//4. else ��Ӧ���� һ�������� ����� return 3 �ĳ�  return 1
//*/
//
//int fun(int a,int b,int c)
//{ if(a+b >c && b+c >a && a+c >b) {
//if(a==b && b==c)
//return 3;
//else if(a==b||b==c||a==c)
//return 2;
//else return 1;
//}
//else return 0;
//}
//main()
//{ int a,b,c,shape;
//printf("\nInput a,b,c: ");
//scanf("%d %d %d",&a,&b,&c);
//printf("\na=%d, b=%d, c=%d\n",a,b,c);
//shape =fun(a,b,c);
//printf("\n\nThe shape : %d\n",shape);
//getchar();
//getchar();
//}