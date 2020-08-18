//#include <stdio.h>
//void main() {
//
//	/*判断一个整数是否是水仙花数，所谓水仙花数是指一个3位数，
//		其各个位上数字立方和等于其本身。例如： 153 = 1*1*1 + 5*5*5 + 3*3*3 
//		
//		思路分析
//		1. 先获取到一个三位数的各个位的数字 使用 / 和 %
//		2. 将得到各个数字(百位，十位，个位) 立方，并求和判断是否和原数相等
//		代码实现
//		
//		*/
//
//	int num = 154;
//	int num1 = num / 100; //百位
//	int num2 = num % 100  / 10; //十位
//	int num3 = num % 10; //个数
//	if(num == num1 * num1 * num1 + num2 * num2 * num2 + num3 * num3 * num3) {
//		printf("%d 就是水仙花数" , num);
//	} else {
//		printf("%d 不是水仙花数" , num);
//	}
//	getchar();
//
//
//	//编写程序，根据输入的月份和年份，求出该月的天数（1-12）,
//	//就是需要考虑闰年(2月份 29)和平年(2月份 28) 
//	
//	//规则
//	//1,3,5,7,8,10,12 --- 31
//	//2月份 :闰年(2月份 29)和平年(2月份 28) 
//	//其它月份都是30
//
//	int year = 2019;
//	int month = 2;
//
//	switch(month) {
//		case 1:
//		case 3:
//		case 5:
//		case 7:
//		case 8:
//		case 10:
//		case 12:
//			printf("%d 年的 %d月是%d", year, month, 31);
//			break;
//		case 2:
//			//判断year是闰年还是平年
//			if( (year % 4 == 0 && year % 100 !=0) || year % 400 == 0) {
//				printf("%d 年的 %d月是%d", year, month, 29);
//			} else{
//				printf("%d 年的 %d月是%d", year, month, 28);
//			}
//			break;
//		default:
//			printf("%d 年的 %d月是%d", year, month, 30);
//			break;
//	}
//
//	getchar();
//
//}