//#include <stdio.h>
//#include <string.h>
//
//void main() {
//	
//	//���1�� ��ʾ�˵�
//	//����
//	//1. ʹ�� do-while ����ʾ�˵�������û����� 4 ��ʾ�˳�����
//
//	//���2 �� �Ǽ�����
//	//����
//	//1. ��Ҫһ���ַ�������¼�������
//
//	//���3 �� �Ǽ�֧��
//	//����
//	//1. ��Ҫһ���ַ�������¼�������
//
//	//���4
//	/*
//	�û�����4�˳�ʱ��������ʾ"��ȷ��Ҫ�˳���? y/n"������������ȷ��y/n ��
//	����ѭ������ָ�ֱ������y ���� n
//	*/
//
//	//���5
//	/*
//	��û���κ���֧��ϸʱ����ʾ "��ǰû����֧��ϸ... ��һ�ʰ�!"
//
//	*/
//
//	//���6
//	/*
//	��֧��ʱ���ж�����Ƿ񹻣���������Ӧ����ʾ
//	*/
//
//	//������صı���
//	char key = ' '; //��ʾ�û��������ĸ��˵�
//	int loop = 1; // �����Ƿ��˳��˵�
//	char details[3000] = "-----------------��ǰ��֧��ϸ��¼-----------------\n��֧\t��֧���\t�˻����	\t˵  ��"; //��¼���е������֧�����
//	char note[20] = ""; //���������֧����˵��
//	char temp[100] = ""; // �����ڸ�ʽ��ÿ�ε��������֧����Ȼ��ƴ�ӵ�details
//	double money = 0.0;
//	double balance = 1000.0; // �˺����, ��ʼ��Ϊ1000.0
//	char choice  = ' ';//��ʾ�û�ѡ�����y/n
//	int flag = 0; //��ʾ�Ƿ�������һ���������֧��
//
//	
//	do {
//		printf("\n\n---------��ͥ��֧�������-----------------");
//		printf("\n			1 ��֧��ϸ");
//        printf("\n			2 �Ǽ�����");          
//        printf("\n			3 �Ǽ�֧��");           
//        printf("\n			4 ��       ��");          
//        printf("\n ��ѡ��(1-4)��");                
//		scanf("%c", &key);
//		getchar();// ���˻س� 
//        
//		switch(key) {
//			case '1' :
//				if(flag) {
//					printf("%s", details);
//				} else {
//					printf("\n��ǰû����֧��ϸ... ��һ�ʰ�!");
//				}
//				break;
//			case '2' :
//				printf("\n���������");
//				scanf("%lf", &money);
//				getchar();//���˻س�
//				balance += money; //�������
//				printf("\n��������˵����");
//				scanf("%s", note);
//				getchar();//���˻س�
//				sprintf(temp, "\n����\t%.2f\t\t%.2f\t\t\t%s", money, balance, note); //��������Ϣ��д�뵽temp�ַ�����
//				//����Ϣƴ�ӵ� details
//				strcat(details, temp); 
//				flag = 1;
//				break;
//			case '3' :
//				printf("\n����֧����");
//				scanf("%lf", &money);
//				getchar();
//				//�ж��Ƿ�֧��
//				if(money > balance) { //����
//					printf("\n ����...");
//					break;
//				}
//				printf("\n����֧��˵����");
//				scanf("%s", note);
//				getchar();
//				balance -= money;
//				sprintf(temp, "\n֧��\t%.2f\t\t%.2f\t\t\t%s", money, balance, note); //��������Ϣ��д�뵽temp�ַ�����
//				//����Ϣƴ�ӵ� details
//				strcat(details, temp); 
//				flag = 1;
//				break;
//			case '4' :
//				printf("\n��ȷ��Ҫ�˳���? y/n");
//				do {
//					scanf("%c", &choice);
//					getchar();
//					if(choice == 'y' || choice == 'n') {
//						break;
//					}
//					printf("\n ��������������������� y/n");
//				}while(1);
//
//				if ( choice == 'y') {
//
//					loop = 0;
//				}
//		}
//
//	}while(loop);
//
//	printf("���˳��˼�ͥ�������~~");
//	getchar();
//
//}