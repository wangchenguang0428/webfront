//#include < stdio.h >
//
///*
// 例如：h 值为
//8.32433，则函数返回8.320000； h 值为8.32533，则函数返回8.330000。 注意：部分
//源程序存在文件prog.c 中。 请勿改动主函数main 和其他函数中的任何内容，仅在
//函数fun 的花括号中填入你编写的若干语句。
//*/
////增加代码
////分析思路
////1. 写一个算法，对一个小数进行四舍五入的处理
////2. 先将原数值加上要保留的位 下一位的值的一半 8.32433 + 0.005
////3. 对新值*100, 求它的商 /100
//float fun(float h){
//
//	long num;
//	h += 0.005;
//	h = h * 100; 
//	num = h; // 对h 求整数
//	h = num;
//	h = h / 100;
//	return h;
//}
//main()
//{ float a;
//
//printf("Enter a: ");
//scanf("%f",&a);
//printf("The original data is: ");
//printf("%f \n\n",a);
//printf("The result: %f\n",fun(a));
//getchar();
//getchar();
//
//}