//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//void main(void) {
//
//	//一个do--while循环显示信息头
//
//	int loop = 1;
//	int flag = 0;//标志是否有过收支明细，默认没有
//
//	//创建一个字符串来记录收支明细
//	//注意，这个字符串需要能够大点，也可以考虑使用 动态分配空间的方式(学员)
//	char details[3000] = "-----------------当前收支明细记录-----------------\n收支\t账户金额\t收支金额\t说    明";
//	char key = ' ';
//	double balance = 0.0;
//	double money = 0.0;
//	char note[20] = ""; // 用途
//	char choice = ' ';
//	//注意，这个字符串需要能够大点，也可以考虑使用 动态分配空间的方式(学员)
//	char temp[100] = "";
//	do {
//
//		printf("\n-----------------家庭收支记账软件-----------------");
//		printf("\n1 收支明细");
//		printf("\n2 登记收入");
//		printf("\n3 登记支出");
//		printf("\n4 退        出");
//		printf("\n请选择(1-4):");
//		scanf("%c", &key);
//		printf("\nk=%c", key);
//		getchar(); // 跳过回车
//		switch (key) {
//		case '1':
//			if (flag) {
//				printf("%s", details);
//			} else {
//				printf("当前没有收支明细... 来一笔吧!");
//			}
//
//			break;
//		case '2':
//			printf("\n本次收入金额:");
//			scanf("%lf", &money);
//			getchar(); // 跳过回车
//			printf("\n本次收入说明:");	
//			scanf("%s", note);
//			getchar(); // 跳过回车
//			balance += money; //
//			//details = "有钱了";
//			//sprintf(details, "%s\n收入\t%s\t%s\t%s", details, balance, money, note);
//			sprintf(temp,"\n收入\t%.2f\t\t%.2f\t\t%s", balance, money, note);
//			strcat(details, temp);
//			
//			flag = 1;
//			break;
//		case '3':
//			printf("\n本次支出金额:");
//			
//			scanf("%lf", &money);
//			printf("\n本次支出说明:");
//			
//			scanf("%s", note);
//			getchar(); //跳过回车
//			if (money > balance) {
//				printf("\n余额不足....");
//				break;
//			}
//			balance -= money;
//			sprintf(temp,"\n支出\t%.2f\t\t%.2f\t\t%s", balance, money, note);
//			strcat(details, temp);
//			break;
//		case '4':
//			printf("\n你确定要退出吗? y/n");
//			
//			do {
//				scanf("%c", &choice);
//				getchar(); //跳过回车
//				if (choice == 'y' || choice == 'n') {
//					break;
//				} 
//				printf("\n你的输入有误，请重新输入 y/n ?");
//			} while (1);
//			if (choice == 'y') {
//				loop = 0;
//			}
//			break;
//		default:
//			printf("\n输入有误");
//			break;
//		}
//
//	} while (loop);
//	
//	printf("\n你已经成功退出软件系统....");
//	system("pause");
//}
//
