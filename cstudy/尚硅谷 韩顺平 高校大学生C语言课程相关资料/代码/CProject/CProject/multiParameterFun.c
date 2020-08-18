//#include <stdio.h>
//#include <stdarg.h>
//
////说明
////num 表示传递的参数格式
////... 表示可以传递多个参数和num一致即可
//int fun(int num, ...) //可变函数，即参数的个数可以不确定, 使用... 表示
//{
//	int i, totalSum=0; //totalSum 一定要初始化
//	int val = 0;
//	va_list v1;			//v1实际是一个字符指针，从头文件里可以找到 
//	va_start(v1, num);		//使v1指向可变列表中第一个值，即num后的第一个参数 
//	printf("*v = %d\n",*v1);
//	for(i = 0; i < num; i++)		//num 减一是为了防止下标超限 
//	{
//		val = va_arg(v1, int);	//该函数返回v1指向的值，并使v1向下移动一个int的距离，使其指向下一个int 
//		printf("val = %d\n", val); // val = 10 val=30 val=60
//		totalSum += val;
//	 } 
//	va_end(v1);	//关闭v1指针，使其指向null
//	return totalSum;
//}
//
//void main() {
//	int res = fun(8, 10,30,60, -100,1,5,7,98);
//	printf("和是=%d", res);
//	getchar();
//}
