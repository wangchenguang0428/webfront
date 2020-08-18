//#include <stdio.h>
//#include <string.h>
//
////定义一个结构体
//struct MyFamilyAccount {
//	int flag ; // 表示是否有至少一笔收入或者支出
//	char details[3000]; //明细
//	double balance; //余额
//};
//
////定义相关的变量, 全局变量
//char key = ' '; //表示用户输入了哪个菜单
//int loop = 1; // 控制是否退出菜单
//char note[20] = ""; //对收入或者支出的说明
//char temp[100] = ""; // 是用于格式化每次的收入或者支出，然后拼接到details
//double money = 0.0;
//char choice  = ' ';//表示用户选择的是y/n
//
////使用函数，完成退出
//void myExit() {
//	printf("\n你确定要退出吗? y/n");
//	do {
//		scanf("%c", &choice);
//		getchar();
//		if(choice == 'y' || choice == 'n') {
//			break;
//		}
//		printf("\n 你的输入有误，请重新输入 y/n");
//	}while(1);
//
//	if ( choice == 'y') {
//
//		loop = 0;
//	}
//}
//
////使用函数，显示明细
//void showDetails(struct MyFamilyAccount *myFamilyAccount) {
//
//	if((*myFamilyAccount).flag) {
//		printf("%s", (*myFamilyAccount).details);
//	} else {
//		printf("\n当前没有收支明细... 来一笔吧!");
//	}
//}
//
////使用函数，完成登记收入, 封装
//void income(struct MyFamilyAccount *myFamilyAccount) {
//	printf("\n本次收入金额：");
//	scanf("%lf", &money);
//	getchar();//过滤回车
//	(*myFamilyAccount).balance += money; //更新余额
//	printf("\n本次收入说明：");
//	scanf("%s", note);
//	getchar();//过滤回车
//	sprintf(temp, "\n收入\t%.2f\t\t%.2f\t\t\t%s", money, (*myFamilyAccount).balance, note); //将本次信息，写入到temp字符数组
//	//将信息拼接到 details
//	strcat((*myFamilyAccount).details, temp); 
//	(*myFamilyAccount).flag = 1;
//}
//
////完成一个登记支出
//void pay(struct MyFamilyAccount *myFamilyAccount) {
//				printf("\n本次支出金额：");
//				scanf("%lf", &money);
//				getchar();
//				//判断是否够支出
//				if(money > (*myFamilyAccount).balance) { //不够
//					printf("\n 余额不足...");
//					return;
//				}
//				printf("\n本次支出说明：");
//				scanf("%s", note);
//				getchar();
//				(*myFamilyAccount).balance -= money;
//				sprintf(temp, "\n支出\t%.2f\t\t%.2f\t\t\t%s", money, (*myFamilyAccount).balance, note); //将本次信息，写入到temp字符数组
//				//将信息拼接到 details
//				strcat((*myFamilyAccount).details, temp); 
//				(*myFamilyAccount).flag = 1;
//}
//
////函数专门显示菜单
//void mainMenu(struct MyFamilyAccount *myFamilyAccount) {
//
//		do {
//		printf("\n\n---------家庭收支记账软件-----------------");
//		printf("\n			1 收支明细");
//        printf("\n			2 登记收入");          
//        printf("\n			3 登记支出");           
//        printf("\n			4 退       出");          
//        printf("\n 请选择(1-4)：");                
//		scanf("%c", &key);
//		getchar();// 过滤回车 
//        
//		switch(key) {
//			case '1' :
//				showDetails(myFamilyAccount);
//				break;
//			case '2' :
//				income(myFamilyAccount);
//				break;
//			case '3' :
//				pay(myFamilyAccount);
//				break;
//			case '4' :
//				myExit();
//		}
//
//	}while(loop);
//
//	printf("你退出了家庭财务软件~~");
//	getchar();
//}
//
//void main() {
//	//创建一个结构体变量
//	struct MyFamilyAccount myFamilyAccount;
//	//初始化
//	myFamilyAccount.flag = 0;
//	myFamilyAccount.balance = 1000.0;
//	//使用拷贝的方式赋值
//	memset(myFamilyAccount.details, 3000, 0);
//	strcpy(myFamilyAccount.details, "-----------------当前收支明细记录-----------------\n收支\t收支金额\t账户金额	\t说  明");
//	//调用mainMenu 显示菜单
//	mainMenu(&myFamilyAccount);
//	getchar();
//}
