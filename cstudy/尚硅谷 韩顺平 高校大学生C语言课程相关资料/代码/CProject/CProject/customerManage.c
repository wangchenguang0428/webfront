//#include <stdio.h>
//#include <string.h>
//
////����ṹ����������
//struct Customer {
//	int id; //���
//	int age; //����
//	char name[10]; //����
//	char gender; // 'f' Ů  'm' ��
//	char phone[16]; //�绰����
//	char email[20]; //����
//};
//
//int loop = 1; //�����Ƿ��˳����˵�
//char key; 
//int customerNum  = 1; //��ʾ��ǰ�ж��ٸ��ͻ�
//char choice = ' '; //��ʾ�û�ѡ�����Y/N
////�ͻ��ṹ������
//struct Customer customers[100]; //�����100���ͻ�, ����100����������չ
//
////��ʾһ��Customer ��������Ϣ
////�������ǽ��յ��ǽṹ��ָ�룬���Ч��
//void getCustomerInfo(struct Customer *customer) {
//	printf("\n%d\t%s\t%c\t%d\t%s\t%s", (*customer).id, (*customer).name, (*customer).gender,(*customer).age, (*customer).phone,(*customer).email);
//}
//
//
////��ӿͻ�
//void add() {
//	customers[customerNum].id = customerNum + 1;//��Ű�����������
//	printf("\n---------------------��ӿͻ�---------------------");
//	printf("\n������");
//	scanf("%s", customers[customerNum].name);
//	getchar();
//	printf("\n�Ա�");
//	scanf("%c", &(customers[customerNum].gender));
//	getchar();
//	printf("\n���䣺");
//	scanf("%d", &(customers[customerNum].age));
//	getchar();
//	printf("\n�绰��");
//	scanf("%s", customers[customerNum].phone);
//	getchar();
//	printf("\n���䣺");
//	scanf("%s", customers[customerNum].email);
//	getchar();
//	printf("\n---------------------������---------------------");
//	customerNum++; // ����������
//
//
//}
//
////���������id, ����index ,���û�У��ͷ���-1
//int findIndex(int id) {
//	int index = -1;
//	int i;
//	for( i = 0; i < customerNum ; i++ ){
//		if(customers[i].id == id) {//�ҵ�
//			index = i;
//		}
//	}
//	return index;
//}
//
////˵��
////1. ����int ,��� 1 ��˵��ɾ���ɹ�
////2. ����0, ��ʾɾ��ʧ��
////3. ���յ���Ҫɾ���Ŀͻ�id
//int del(int id) {
//	int index = findIndex(id);
//	int i;
//	if(index == -1) {//˵��������id ����ͻ�
//		return 0; //��ʾɾ��ʧ��
//	} else {
//		//˵�����ڣ���Ҫɾ��, ɾ���ı��ʾ��ǽ����Ϊid ������ͻ��Ƴ�
//		//1. customers�����index +1 λ�� ��ʼ������ǰ��
//		for( i = index + 1; i < customerNum; i++) {
//			customers[i-1] = customers[i];
//		}
//		//2. customerNum - 1
//		customerNum--;
//		return 1;
//	}
//}
//
////��ʾɾ���ͻ��Ľ��棬Ȼ�����
//*
//---------------------ɾ���ͻ�---------------------
//��ѡ���ɾ���ͻ����(-1�˳�)��1
//ȷ���Ƿ�ɾ��(Y/N)��y
//---------------------ɾ�����---------------------
//
//*/
//void delView() {
//	int id = 0;
//	char choice = ' ';
//	printf("\n---------------------ɾ���ͻ�---------------------");
//	printf("\n��ѡ���ɾ���ͻ����(-1�˳�)��");
//	scanf("%d", &id); 
//	getchar();
//	if(id == -1) {
//		printf("\n---------------------�����ɾ����---------------------");
//		return;
//	}
//	
//	printf("\nȷ���Ƿ�ɾ��(Y/N)��");
//	scanf("%c", &choice);
//	getchar();
//
//	if(choice == 'Y') {
//		if(!del(id)) {
//			printf("\n---------------------ɾ��ʧ�ܣ�id������---------------------");
//		} else {
//			printf("\n---------------------ɾ���ɹ�!!---------------------");
//		}
//	}
//}
//
////��ʾ�ͻ���Ϣ�б�
//void listCustomers() {
//	int i = 0; 
//	printf("---------------------------�ͻ��б�---------------------------");
//	printf("\n���\t����\t�Ա�\t����\t�绰\t����");
//	for ( i = 0; i < customerNum; i++) {//��ʾ�ͻ��ı��
//		getCustomerInfo(&customers[i]);
//	}
//
//}
//
//
////��ʾ���˵�
//void mainMenu() {
//	do {
//
//		printf("\n\n\n-----------------�ͻ���Ϣ�������-----------------");
//		printf("\n                    1 �� �� �� ��");
//		printf("\n                    2 �� �� �� ��");
//		printf("\n                    3 ɾ �� �� ��");
//		printf("\n                    4 �� �� �� ��");
//		printf("\n                    5 ��          ��");
//		printf("\n��ѡ��(1-5)��");
//		scanf("%c", &key);
//		getchar(); //���˻س�
//                         
//		switch(key) {
//			case '1':
//					add();
//					break;
//			case '2':
//					printf("�� �� �� ��");
//					break;
//			case '3':
//					delView();
//					break;
//			case '4':
//					listCustomers();
//					break;
//			case '5':
//					do {
//						printf("\nȷ���Ƿ��˳�(Y/N)��");
//						scanf("%c", &choice);
//						getchar();
//					} while(choice != 'Y' && choice != 'N'); //�������Ĳ���'Y' , ���Ҳ���'N'
//					if(choice == 'Y') {
//						loop = 0;
//					} // ����������N ,��������������ʾ�˵�
//					break;
//			default :
//					printf("\n ���������� ����������...");
//					break;
//		}
//	}while(loop);
//
//	printf("\n ���˳��˿ͻ�����ϵͳ");
//	getchar();
//}
//void main() {
//	//Ϊ�˲�����ʾ�ͻ���Ϣ,���ǿ����ȳ�ʼ��һ���ͻ�, ����������ͨ�����������
//	customers[0].id = 1;
//	customers[0].age = 10;
//	strcpy(customers[0].email, "yy@sohu.com");
//	customers[0].gender = 'f';
//	strcpy(customers[0].name, "zs");
//	strcpy(customers[0].phone, "110");
//	
//
//	mainMenu(); //���ú�������ʾ�˵�
//}