////��������modi.c �Ĺ����ǣ�����һ������m��5��m��20��������
////getarr ���ú���rnd ���m ���������������sortpb ����m�����������С����
////����
////���磬����������7����Ӧ�����3 10 17 28 32 36 47��
////����������еĴ���ʹ���ܵó���ȷ�����
////ע�⣺��Ҫ�Ķ�main ������
//
////����
////1 ����1��  sortpb ( int n, int *a ) =�� void  sortpb ( int n, int *a )
////2. ����2     Int i, j, p, t => int i,j,p,t;
////3. ����3 :   If ( a[p] > a[i] ) p = i; => if ( a[p] > a[i] ) p = i;
////4. ����4:   static  t = 29, c = 217, m = 1024, r = 0; => static int t = 29, c = 217, m = 1024, r = 0;
////��ʾ����������޸����﷨���󣬴����������ȷ�ˣ�����Ҫȥ�Ķ�Դ��
//#include "conio.h"
//#include "stdio.h"
//void sortpb ( int n, int *a )
//{
//int i, j, p, t;
//for ( j = 0; j < n-1 ; j++ )
//{ p = j;
//for ( i = j + 1; i < n ; i ++ )
//if ( a[p] > a[i] ) p = i;
//if ( p != j )
//{ t = a[j]; a[j] = a[p]; a[p] = t; }
//}
//}
//double rnd ( )
//{ static int t = 29, c = 217, m = 1024, r = 0;
//r =( r*t + c )%m; return( ( double )r/m );
//}
//void getarr( int n, int *x )
//{ int i;
//for( i = 1; i <= n; i++, x++ ) *x = ( int )( 50*rnd() );
//}
//void putarr( int n, int *z )
//{ int i;
//for( i = 1; i <= n; i++, z++ )
//{ printf( "%4d", *z );
//if ( !( i%10 ) ) printf( "\n" );
//} printf("\n");
//}
//main()
//{ int aa[20], n;
//printf( "\nPlease enter an integer number between 5 and 20: " );
//scanf( "%d", &n );
//getarr( n, aa );
//printf( "\n\nBefore sorting %d numbers:\n", n ); putarr( n, aa );
//sortpb( n, aa );
//printf( "\nAfter sorting %d numbers:\n", n ); putarr( n, aa );
//getchar();
//getchar();
//}