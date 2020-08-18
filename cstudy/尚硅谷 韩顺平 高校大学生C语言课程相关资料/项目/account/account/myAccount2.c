
#include <stdio.h>
#include <string.h>
struct MyFamilyAccount {
	int flag;
	char details[3000];
	double balance ;
};
double money;
char note[20] = ""; // ��;
char temp[100] = "";
int loop = 1;
char choice = ' ';
void showDetails(struct MyFamilyAccount *myFamilyAccount) {
	if ((*myFamilyAccount).flag) {
		printf("%s", (*myFamilyAccount).details);
	} else {
		printf("��ǰû����֧��ϸ... ��һ�ʰ�!");
	}
}
void myExit() {
			printf("\n��ȷ��Ҫ�˳���? y/n");
			
			do {
				scanf("%c", &choice);
				getchar(); //�����س�
				if (choice == 'y' || choice == 'n') {
					break;
				} 
				printf("\n��������������������� y/n ?");
			} while (1);
			if (choice == 'y') {
				loop = 0;
			}
}

void income(struct MyFamilyAccount *myFamilyAccount) {

	printf("\n����������:");
	scanf("%lf", &money);
	getchar(); // �����س�
	printf("\n��������˵��:");	
	scanf("%s", note);
	getchar(); // �����س�
	(*myFamilyAccount).balance += money; //

	sprintf(temp,"\n����\t%.2f\t\t%.2f\t\t%s", (*myFamilyAccount).balance, money, note);
	strcat((*myFamilyAccount).details, temp);

	(*myFamilyAccount).flag = 1;
}

void pay(struct MyFamilyAccount *myFamilyAccount) {
	printf("\n����֧�����:");

	scanf("%lf", &money);
	printf("\n����֧��˵��:");

	scanf("%s", note);
	getchar(); //�����س�
	if (money > (*myFamilyAccount).balance) {
		printf("\n����....");
		return;
	}
	(*myFamilyAccount).balance -= money;
	sprintf(temp,"\n֧��\t%.2f\t\t%.2f\t\t%s", (*myFamilyAccount).balance, money, note);
	strcat((*myFamilyAccount).details, temp);
}
void mainMenu(struct MyFamilyAccount *myFamilyAccount) {
	char key = ' ';
	do {

		printf("\n-----------------��ͥ��֧�������������+�ṹ�塿~~-----------------");
		printf("\n1 ��֧��ϸ");
		printf("\n2 �Ǽ�����");
		printf("\n3 �Ǽ�֧��");
		printf("\n4 ��        ��");
		printf("\n��ѡ��(1-4):");
		scanf("%c", &key);
		getchar(); //���˵�
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
			printf("\n��������");
			break;
		}

	} while (loop);

	printf("\n���Ѿ��ɹ��˳����ϵͳ....");
	getchar();

}
void main() {
	struct MyFamilyAccount myFamilyAccount;
	//��ʼ��
	myFamilyAccount.balance = 0.0;
	memset(myFamilyAccount.details,3000*sizeof(char),0);
	strcpy(myFamilyAccount.details, "-----------------��ǰ��֧��ϸ��¼-----------------\n��֧\t�˻����\t��֧���\t˵    ��");
	myFamilyAccount.flag = 0;
	mainMenu(&myFamilyAccount);
	getchar();
	return;
}

