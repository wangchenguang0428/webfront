///*请编一个函数int day(int k,int m,int n)，其功能是：返回小蚕需要多
//少天才能爬到树顶（树高k 厘米，小蚕每天白天向上爬m 厘米，每天晚上因睡觉向
//下滑n 厘米，爬到顶后不再下滑）（n＜m＜k）。
//例如，若分别 输入253、71、29 给 k、m、n，则输出结果为：6。
//注意：此程序存贮在prog.c中。
//请勿改动主程序main、函数WriteData 和函数compute 中的任何内容，仅在函数
//day 的花括号中填入你编写的若干语句。*/
//#include < conio.h >
//#include < stdio.h >
//
////分析
////1. k 表示树高 m 每天爬的高度 n 表示每天下滑的高度
////2. 因为蚕每天实际爬的高度  m - n
////3. 使用一个for循环 来计算它什么时候可以爬到 k 的高度，就表示爬到顶
//int day( int k, int m, int n ){
//	int days, height =0; //days ， height 就是小蚕实际爬的高度
//	for(days=1; 1; days++) { // 这里我们使用的是无限循环
//		height += m; //爬了m
//		if(height >= k) { //说明爬到顶, 就返回days
//			return days;
//		}
//		height -= n;// 否则，下滑n
//	}
//}
//main()
//{ int k, m, n;
//printf("\nPlease enter 3 numbers: ");
//scanf("%d %d %d", &k, &m, &n );
//printf( "\nFor %d days, worm will be at the top.",day(k,m,n));
//getchar();
//getchar();
//}
///* 以下部分与考生答题无关, 考生不必阅读, 但不得进行任何修改 */
//void WriteData(int num)
//{ FILE *fp;
//fp = fopen("dat92.dat", "w") ;
//fprintf(fp, "%d", num);
//fclose(fp);
//}
//void compute()
//{ int k, m, n;
//FILE *fp;
//fp=fopen("c9670903.in","r");
//fscanf(fp, "%d %d %d", &k, &m, &n );
//fclose(fp);
//WriteData(day(k,m,n));
//}