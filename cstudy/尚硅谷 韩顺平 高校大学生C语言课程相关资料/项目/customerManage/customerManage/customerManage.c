#include <stdio.h>
#include <string.h>

struct Customer {
	int id;
	int age;
	char name[10];
	char gender;
	char  phone[10];
	char  email[10];
};
char key ;
char loop=1;
int customerNum=1;


//�ͻ��ṹ������
struct Customer customers[20];

//�õ�һ���ͻ�����Ϣ
void getInfo(struct Customer *customer) {
	
	/*sprintf(info, "\n%d\t%s\t%c\t%d\t%s\t%s", (*customer).id, (*customer).name, 
		(*customer).gender, (*customer).age, (*customer).phone,(*customer).email);*/
	printf("\n%d\t%s\t%c\t%d\t%s\t%s", (*customer).id, (*customer).name, 
		(*customer).gender, (*customer).age, (*customer).phone,(*customer).email);
}

//�ṩ���ֲ���


//1. ���
void add(){
	//����Զ�����
	customers[customerNum].id = customerNum + 1;
	printf("\n---------------------��ӿͻ�---------------------");
	printf("\n������");
	scanf("%s", customers[customerNum].name);
	getchar();
	printf("\n�Ա�");
	scanf("%c", &(customers[customerNum].gender));
	getchar();
	printf("\n���䣺");
	scanf("%d", &(customers[customerNum].age));
	getchar();
	printf("\n�绰��");
	scanf("%s", customers[customerNum].phone);
	getchar();
	printf("\n���䣺");
	scanf("%s",customers[customerNum].email);
	getchar();
	printf("\n---------------------������---------------------");
	customerNum++;
	
}

//���������idȥ�Ҷ�Ӧ���±꣬����Ҳ�������-1
int findIndex(int id){
	int index = -1;
	int i;
	for (i = 0; i < customerNum ; i++) {
		if (customers[i].id == id) {
			index = i;
			break;
		}
	}
	return index;
}

//2. ɾ���ͻ�
int del(int id){
	//�ҵ�id��Ӧ��Ԫ���±�
	int index = findIndex(id);
	int i;
	if (index == -1) {
		return 0;//˵������ͻ�������..
	}else {
		//�ҵ�,�ʹ�index+1��ʼ����ǰ��
		for (i = index + 1; i < customerNum; i++) {
			customers[i - 1] = customers[i];
		}
		--customerNum;
		return 1;
	}
}

//��ʾ����

//1. ��ʾ����
void showList(){
	int i = 0;
	printf("\n---------------------------�ͻ��б�---------------------------");
	printf("\n���\t����\t�Ա�\t����\t�绰\t����");
	for (i = 0; i < customerNum; i++) {
		getInfo(&customers[i]);
	}
}

//2. ���ɾ�� ����
//---------------------ɾ���ͻ�---------------------
//��ѡ���ɾ���ͻ����(-1�˳�)��1
//ȷ���Ƿ�ɾ��(Y/N)��y
//---------------------ɾ�����---------------------

void delView(){
	int id;
	char choice = ' ';
	printf("\n---------------------ɾ���ͻ�---------------------");
	printf("\n��ѡ���ɾ���ͻ����(-1�˳�)��");
	scanf("%d", &id);
	getchar();
	if (id == -1) {
		printf("\n---------------------ɾ��û�����---------------------");
		return;
	}

	printf("ȷ���Ƿ�ɾ��(Y/N)��");
	scanf("%c", &choice);
	getchar();
	if (choice == 'Y') {
		if(del(id)){
			printf("\n---------------------ɾ�����---------------------");
		}else{
			printf("\n---------------------ɾ��û����ɣ��޴�id---------------------");
		}
	} 
}


//3. ���˵�
void mainMenu() {
	do {
		printf("\n-----------------�ͻ���Ϣ�������-----------------");
		printf("\n                 1 �� �� �� ��");
		printf("\n                 2 �� �� �� ��");
		printf("\n                 3 ɾ �� �� ��");
		printf("\n                 4 �� �� �� ��");
		printf("\n                 5 ��          ��");
		printf("\n��ѡ��(1-5):");
		scanf("%c", &key);
		getchar();

		switch (key) {
		case '1':
			add();
			break;
		case '2':
			break;
		case '3':
			delView();
			break;
		case '4':
			showList();
			break;
		case '5':
			loop = 0;
			break;
		default:
			printf("\n�����������������");
			break;
		}

	} while (loop);

	printf("\n���Ѿ��ɹ����˳���ϵͳ....");
	getchar();
}


void main() {
	////Ϊ�˲��Է���
	customers[0].id = 1;
	customers[0].age = 10;
	strcpy(customers[0].email , "xx@sohu.com");
	customers[0].gender = 'f';
	strcpy(customers[0].name , "zs");
	strcpy(customers[0].phone , "110");

	mainMenu();

	return ;
}

