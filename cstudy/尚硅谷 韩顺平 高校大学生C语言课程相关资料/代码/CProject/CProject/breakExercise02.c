//#include  <stdio.h>
//#include <string.h>
//void main() {
//
//	//int j,i;
//	//for( j = 0; j < 4; j++) {
//	//	for( i = 0; i < 10; i++) {
//	//		if(i == 2){ break ; }
//	//		printf("i = %d \n" , i);
//	//	}
//	//}
//	//getchar();
//
//	//100���ڵ�����ͣ���� ���� ��һ�δ���20�ĵ�ǰ����for��
//	int i = 1;
//	int sum = 0;
//	for(i = 1; i <= 100; i++) {
//		sum += i;
//		if(sum > 20) {
//			printf("���� ��һ�δ���20�ĵ�ǰ�� = %d", i);
//			break;
//		}
//	}
//	getchar();
//
//	//ʵ�ֵ�¼��֤�������λ��ᣬ����û���Ϊ�����޼ɡ� ,���롱888����ʾ��¼�ɹ���
//	//������ʾ���м��λ��ᣬ��ʹ��for ѭ�����
//
//	//����
//	//1. ����Ҫ����һ�������������¼�Ļ���(����) chance
//	//2. ���������ַ����飬���� �û���������
//	//3. ʹ��forѭ��+break , �����¼�ɹ�������ǰ�˳�
//	int chance = 3;
//	int loginCount = chance; //ֵ����
//	char name[10] = "";
//	char pwd[10] = "";
//	int i ; //ѭ������
//	for(i = 1; i <= loginCount; i++) {
//	
//		printf("\n����������");
//		scanf("%s", name);//�ַ����飬��Ҫ��&
//		printf("\n����������");
//		scanf("%s", pwd);
//
//		//�ж��ַ�����ͬʹ�� strcmp
//		if(strcmp("���޼�", name) == 0 && strcmp("888", pwd) == 0){
//			printf("\n��¼�ɹ�");
//			break; // for + break
//		} else {
//			//�����������
//			chance--;
//			printf("\n�㻹��%d�ε�¼����", chance);
//		}
//
//
//	}
//
//		getchar();
//		getchar();
//
//
//
//
//}