//#include <stdio.h>
//void main() {
//	
//	//统计1——200之间能被5整除但不能被3整除的个数
//	//分析
//	//1. 使用 do - while
//	//2. 定义一个 count 保存满足条件的数的个数
//	//3. 定义 i = 1  max=200 控制循环的次数
//
//	int i = 1;
//	int max = 200;
//	int count = 0;
//	do {
//		//判断
//		if((i % 5 == 0) && (i % 3 != 0)) {
//			count++;//累积
//		}
//		i++;
//	}while(i <= max); // 循环条件
//
//	printf("1——200之间能被5整除但不能被3整除的个数 count= %d", count);
//	getchar();
//
//	/*
//	如果老公同意老婆购物，则老婆将一直购物，
//	直到老公说不同意为止[printf("老婆问：我可以继续购物吗？y/n")]
//
//	*/
//
//	char answer = ' '; 
//	do {
//		printf("老婆问：我可以继续购物吗？y/n"); 
//		scanf("%c", &answer); // 获取用户输入
//		getchar(); //过滤掉 回车符
//	} while(answer == 'y');
//	
//	printf("老婆终于退出购物~~~~");
//	getchar();
//
//}