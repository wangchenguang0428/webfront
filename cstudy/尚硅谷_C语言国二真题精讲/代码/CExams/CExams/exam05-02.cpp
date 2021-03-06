/*给定程序modi.c 的功能是：读入一个整数m（5≤m≤20），函数
getarr 调用函数rnd 获得m 个随机整数，函数sortpb 将这m个随机整数从小到大
排序。
例如，若输入整数7，则应输出：3 10 17 28 32 36 47。
请改正程序中的错误，使它能得出正确结果。
注意：不要改动main 函数，*/

//分析
//1. 因为改错有些就是语法错误
//2. 先解决语法错误，如果语法错误解决，输出也是正确，则不需再去阅读源码
//3. 如果语法错误解决了，但是输出仍然错误，才去阅读源码
//4. 错误1 sortpb ( int n, int *a ) =》 void sortpb ( int n, int *a )
//5. 错误2 Int i, j, p, t ==> int i,j,p,t;
//6. 错误3 If ( a[p] > a[i] ) p = i; => if( a[p] > a[i] ) p = i;
//7. 错误4  static  t = 29, c = 217, m = 1024, r = 0; =》  static int  t = 29, c = 217, m = 1024, r = 0;
#include "conio.h"
#include "stdio.h"
void sortpb ( int n, int *a )
{
int i, j, p, t;
for ( j = 0; j < n-1 ; j++ )
{ p = j;
for ( i = j + 1; i < n ; i ++ )
if( a[p] > a[i] ) p = i;
if ( p != j )
{ t = a[j]; a[j] = a[p]; a[p] = t; }
}
}
double rnd ( )
{ static int  t = 29, c = 217, m = 1024, r = 0;
r =( r*t + c )%m; return( ( double )r/m );
}
void getarr( int n, int *x )
{ int i;
for( i = 1; i < = n; i++, x++ ) *x = ( int )( 50*rnd() );
}
void putarr( int n, int *z )
{ int i;
for( i = 1; i < = n; i++, z++ )
{ printf( "%4d", *z );
if ( !( i%10 ) ) printf( "\n" );
} printf("\n");
}
void main()
{ int aa[20], n;
printf( "\nPlease enter an integer number between 5 and 20: " );
scanf( "%d", &n );
getarr( n, aa );
printf( "\n\nBefore sorting %d numbers:\n", n ); putarr( n, aa );
sortpb( n, aa );
printf( "\nAfter sorting %d numbers:\n", n ); putarr( n, aa );
}