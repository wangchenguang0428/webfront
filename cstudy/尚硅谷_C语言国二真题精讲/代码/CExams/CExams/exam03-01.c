//*给定程序的功能是求出1 到1000 之内能被7 或11 整除但不能同时被
//77 整除的所有整数放在数组a 中，通过n 返回这些数的个数。*/
//#include < stdio.h >
//
////分析
////1. 空格1  i 就是满足条件的数 
////2. 空格2  表示填写满足条件的数的个数
////3. a 指针，指向的是数组
//void fun(int *a, int *n)
//{ int i, j = 0 ;
//for(i = 1 ; i <= 1000 ; i++) {
//
//if(((i % 7 == 0) || (i % 11 == 0)) && i % 77 != 0)
//a[j++] = i ;
//}
//
//*n = j ;
//}
//main()
//{ int aa[1000], n, k ;
//
//fun ( aa, &n) ;
//for ( k = 0 ; k < n ; k++ )
//if((k + 1) % 10 == 0) printf("\n") ;
//else printf("%5d", aa[k]) ;
//getchar();
//getchar();
//}