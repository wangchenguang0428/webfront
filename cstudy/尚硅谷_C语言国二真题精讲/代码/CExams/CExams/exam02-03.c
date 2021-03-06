///*请编写一个函数int fun(int x)，它的功能是：判断整数x 是否是同构
//数。若是同构数，函数返回1；否则返回0。所谓“同构数”是指这样的数，它出现在
//它的平方数的右边。 例如：输入整数5，5的平方数是25，5 是25 中右侧的数，
//所以5 是同构数。x 的值由主函数从键盘读入，要求不大于100。 注意：部分源程
//序存在文件prog.c 中。 请勿改动主函数main 和其他函数中的任何内容，仅在函数
//fun 的花括号中填入你编写的若干语句。*/
//#include < conio.h >
//#include < stdio.h >
//#include < stdlib.h>
////分析思路
//// 考点就是根据同构数的定义写出判断算法
////1. 小于10的同构数的平方减去同构数本身与10取模结果为0   5 => 25  - 5 = 20 %10 = 0
////2. 在10 到 100之间的同构数 的平方减去同构数本身与100取模，结果为0 
////3. 根据判断1-100之间的同构数的规律，完成代码
//int fun(int x){
//	if( x < 10) {
//		return !((x * x - x) % 10);//小于10的同构数的平方减去同构数本身与10取模结果为0
//	} else {
//		return !((x * x - x) % 100); //在10 到 100之间的同构数 的平方减去同构数本身与100取模，结果为0
//	}
//}
//main()
//{ int x,y;
//printf("\nPlease enter a integernumbers:");scanf("%d",&x);
//if(x >100){printf("data error !\n");exit(0);}
//y=fun(x);
//if (y) printf("%d YES\n",x);
//else printf("%d NO!\n",x);
////注意，在考试中，不能修改main函数的代码
//getchar();
//getchar();
//}