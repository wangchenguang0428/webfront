//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//void main(void) {
//
//	//һ��do--whileѭ����ʾ��Ϣͷ
//
//	int loop = 1;
//	int flag = 0;//��־�Ƿ��й���֧��ϸ��Ĭ��û��
//
//	//����һ���ַ�������¼��֧��ϸ
//	//ע�⣬����ַ�����Ҫ�ܹ���㣬Ҳ���Կ���ʹ�� ��̬����ռ�ķ�ʽ(ѧԱ)
//	char details[3000] = "-----------------��ǰ��֧��ϸ��¼-----------------\n��֧\t�˻����\t��֧���\t˵    ��";
//	char key = ' ';
//	double balance = 0.0;
//	double money = 0.0;
//	char note[20] = ""; // ��;
//	char choice = ' ';
//	//ע�⣬����ַ�����Ҫ�ܹ���㣬Ҳ���Կ���ʹ�� ��̬����ռ�ķ�ʽ(ѧԱ)
//	char temp[100] = "";
//	do {
//
//		printf("\n-----------------��ͥ��֧�������-----------------");
//		printf("\n1 ��֧��ϸ");
//		printf("\n2 �Ǽ�����");
//		printf("\n3 �Ǽ�֧��");
//		printf("\n4 ��        ��");
//		printf("\n��ѡ��(1-4):");
//		scanf("%c", &key);
//		printf("\nk=%c", key);
//		getchar(); // �����س�
//		switch (key) {
//		case '1':
//			if (flag) {
//				printf("%s", details);
//			} else {
//				printf("��ǰû����֧��ϸ... ��һ�ʰ�!");
//			}
//
//			break;
//		case '2':
//			printf("\n����������:");
//			scanf("%lf", &money);
//			getchar(); // �����س�
//			printf("\n��������˵��:");	
//			scanf("%s", note);
//			getchar(); // �����س�
//			balance += money; //
//			//details = "��Ǯ��";
//			//sprintf(details, "%s\n����\t%s\t%s\t%s", details, balance, money, note);
//			sprintf(temp,"\n����\t%.2f\t\t%.2f\t\t%s", balance, money, note);
//			strcat(details, temp);
//			
//			flag = 1;
//			break;
//		case '3':
//			printf("\n����֧�����:");
//			
//			scanf("%lf", &money);
//			printf("\n����֧��˵��:");
//			
//			scanf("%s", note);
//			getchar(); //�����س�
//			if (money > balance) {
//				printf("\n����....");
//				break;
//			}
//			balance -= money;
//			sprintf(temp,"\n֧��\t%.2f\t\t%.2f\t\t%s", balance, money, note);
//			strcat(details, temp);
//			break;
//		case '4':
//			printf("\n��ȷ��Ҫ�˳���? y/n");
//			
//			do {
//				scanf("%c", &choice);
//				getchar(); //�����س�
//				if (choice == 'y' || choice == 'n') {
//					break;
//				} 
//				printf("\n��������������������� y/n ?");
//			} while (1);
//			if (choice == 'y') {
//				loop = 0;
//			}
//			break;
//		default:
//			printf("\n��������");
//			break;
//		}
//
//	} while (loop);
//	
//	printf("\n���Ѿ��ɹ��˳����ϵͳ....");
//	system("pause");
//}
//
