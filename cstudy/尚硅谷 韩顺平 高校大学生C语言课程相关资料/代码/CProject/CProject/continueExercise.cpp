//#include <stdio.h>
//void main() {
//	
//	//从键盘读入个数不确定的整数，并判断读入的正数和负数的个数，
//	//输入为0时结束程序【使用for循环 ，break, continue完成】 【positive 正数，negative】
//
//	//分析
//	//1. 定义变量 positive 保存正数的个数
//	//2. 定义变量 negative 保存负数的个数
//
//	//3. 使用for + break + continue
//
//	int positive = 0;
//	int negative = 0;
//	int num = 0; //接收从控制台输入的数
//
//	for(; ;) { // 是一个死循环
//		printf("请输入数");
//		scanf("%d", &num);
//		if(num == 0) {
//			break; //跳出for
//		}
//
//		if(num > 0 ) {//正数
//			positive++; //累计
//			continue;
//		}
//		//num 是一个负数
//		negative++;
//	}
//
//	printf("正数个数%d  负数个数%d", positive,negative );
//	getchar();
//	getchar();
//
//
//	/*某人有100,000元,每经过一次路口，需要交费,规则如下:
//当现金>50000时,每次交5%
//当现金<=50000时,每次交1000
//编程计算该人可以经过多少次路口,使用 while break方式完成
//
//	分析
//	1. money 保存 金额 
//	2. 定义变量 count 统计可以经过多少个路口
//	3.  while break
//	4. break 条件是 money < 1000时
//*/
//
//	int count = 0; //路口数
//	int money = 100000; //现有的钱
//	while(1){ //死循环
//
//		//判断是否该退出
//		if(money < 1000) { //退出while条件
//			break;
//		}
//
//		//当现金>50000时,每次交5%
//		if(money >50000) {
//			money = money * 0.95;
//			
//		} else if(money <= 50000) {
//			money -= 1000;
//			
//		}
//		count++; //经过的路口增加1
//	}
//	printf("100,000元 可以经过 %d 个路口 剩余 %d 元", count, money);
//	getchar();
//
//}