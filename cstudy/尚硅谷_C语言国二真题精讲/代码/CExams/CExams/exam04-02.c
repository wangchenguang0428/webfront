///*��������modi.c �У�����fun �Ĺ����ǣ�������ƽ����֮�ͣ���Ϊ��
//��ֵ���ء� ���磬����12 ��20���������ǣ�y=7.936238�� ����������е�
//����ʹ���ܵó���ȷ����� ע�⣺��Ҫ�Ķ�main ������*/
//#include < stdio.h >
//#include < math.h >
////����
////1. ��Ϊ��main�����У����� fun ����ʱ�����ݵ��� &a &b, ��� fun���βξ��� ָ������
////    ��һ���� double fun(double *a,  *b) �ĳ�  double fun(double *a, double *b)
////2. ��Ϊ sqrt �������յ������������Ǵ������ ָ�룬����, �޸�����
////    	c=sqrt(a)+sqrt(b); �ĳ�  c=sqrt(*a)+sqrt(*b);
//double fun(double *a, double *b)
//{ double c;
//
//c=sqrt(*a)+sqrt(*b);
//return c;
//}
//main()
//{ double a,b,y;
//printf("Enter a&b :");scanf("%lf %lf",&a,&b);
//y=fun(&a,&b); printf("y=%f\n",y);
//}