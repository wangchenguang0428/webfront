
#include <stdio.h>
#include <string.h>
struct MyFamilyAccount {
	int flag;
	char details[3000];
	double balance ;
};
double money;
char note[20] = ""; // 用途
char temp[100] = "";
int loop = 1;
char choice = ' ';
void showDetails(struct MyFamilyAccount *myFamilyAccount) {
	if ((*myFamilyAccount).flag) {
		printf("%s", (*myFamilyAccount).details);
	} else {
		printf("当前没有收支明细... 来一笔吧!");
	}
}
void myExit() {
			printf("\n你确定要退出吗? y/n");
			
			do {
				scanf("%c", &choice);
				getchar(); //跳过回车
				if (choice == 'y' || choice == 'n') {
					break;
				} 
				printf("\n你的输入有误，请重新输入 y/n ?");
			} while (1);
			if (choice == 'y') {
				loop = 0;
			}
}

void income(struct MyFamilyAccount *myFamilyAccount) {

	printf("\n本次收入金额:");
	scanf("%lf", &money);
	getchar(); // 跳过回车
	printf("\n本次收入说明:");	
	scanf("%s", note);
	getchar(); // 跳过回车
	(*myFamilyAccount).balance += money; //

	sprintf(temp,"\n收入\t%.2f\t\t%.2f\t\t%s", (*myFamilyAccount).balance, money, note);
	strcat((*myFamilyAccount).details, temp);

	(*myFamilyAccount).flag = 1;
}

void pay(struct MyFamilyAccount *myFamilyAccount) {
	printf("\n本次支出金额:");

	scanf("%lf", &money);
	printf("\n本次支出说明:");

	scanf("%s", note);
	getchar(); //跳过回车
	if (money > (*myFamilyAccount).balance) {
		printf("\n余额不足....");
		return;
	}
	(*myFamilyAccount).balance -= money;
	sprintf(temp,"\n支出\t%.2f\t\t%.2f\t\t%s", (*myFamilyAccount).balance, money, note);
	strcat((*myFamilyAccount).details, temp);
}
void mainMenu(struct MyFamilyAccount *myFamilyAccount) {
	char key = ' ';
	do {

		printf("\n-----------------家庭收支记账软件【函数+结构体】~~-----------------");
		printf("\n1 收支明细");
		printf("\n2 登记收入");
		printf("\n3 登记支出");
		printf("\n4 退        出");
		printf("\n请选择(1-4):");
		scanf("%c", &key);
		getchar(); //过滤掉
		switch (key) {
		case '1':
			showDetails(myFamilyAccount);
			break;
		case '2':
			income(myFamilyAccount);
			break;
		case '3':
			pay(myFamilyAccount);
			break;
		case '4':
			myExit();
			break;
		default:
			printf("\n输入有误");
			break;
		}

	} while (loop);

	printf("\n你已经成功退出软件系统....");
	getchar();

}
void main() {
	struct MyFamilyAccount myFamilyAccount;
	//初始化
	myFamilyAccount.balance = 0.0;
	memset(myFamilyAccount.details,3000*sizeof(char),0);
	strcpy(myFamilyAccount.details, "-----------------当前收支明细记录-----------------\n收支\t账户金额\t收支金额\t说    明");
	myFamilyAccount.flag = 0;
	mainMenu(&myFamilyAccount);
	getchar();
	return;
}

