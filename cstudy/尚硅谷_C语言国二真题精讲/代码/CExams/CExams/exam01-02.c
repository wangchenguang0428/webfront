//#include < stdio.h >
///**********found**********/
//
////����
////1. double a, b, double x,y �����β���ʽ����
//void fun ( double a, double b, double *x,double *y )
//{/**********found**********/
//*x = a * b; *y = a / b; //��Ϊx,y ��ָ�룬�����Ҫͨ��ȡֵ�� * ������ֵ
//}
//main ( )
//{ double a, b, c, d;
//printf ( "Enter a , b : ");
//scanf ( "%lf%lf", &a, &b );
////����
////1. &c �ǵ�ַ���βξ�Ӧ����ָ������
////2. ��Ϊ�ǰ��յ�ַ���ݣ���� fun ����������*x,*y ���� c,d
//fun ( a , b, &c, &d ) ;
//printf (" c = %f d = %f\n ", c, d );
////�ر�˵�������ԭ�������У�û��getchar(); �벻Ҫ���
//getchar();
//getchar();
//}