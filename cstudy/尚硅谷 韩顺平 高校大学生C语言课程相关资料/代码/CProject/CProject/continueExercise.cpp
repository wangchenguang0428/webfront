//#include <stdio.h>
//void main() {
//	
//	//�Ӽ��̶��������ȷ�������������ж϶���������͸����ĸ�����
//	//����Ϊ0ʱ��������ʹ��forѭ�� ��break, continue��ɡ� ��positive ������negative��
//
//	//����
//	//1. ������� positive ���������ĸ���
//	//2. ������� negative ���渺���ĸ���
//
//	//3. ʹ��for + break + continue
//
//	int positive = 0;
//	int negative = 0;
//	int num = 0; //���մӿ���̨�������
//
//	for(; ;) { // ��һ����ѭ��
//		printf("��������");
//		scanf("%d", &num);
//		if(num == 0) {
//			break; //����for
//		}
//
//		if(num > 0 ) {//����
//			positive++; //�ۼ�
//			continue;
//		}
//		//num ��һ������
//		negative++;
//	}
//
//	printf("��������%d  ��������%d", positive,negative );
//	getchar();
//	getchar();
//
//
//	/*ĳ����100,000Ԫ,ÿ����һ��·�ڣ���Ҫ����,��������:
//���ֽ�>50000ʱ,ÿ�ν�5%
//���ֽ�<=50000ʱ,ÿ�ν�1000
//��̼�����˿��Ծ������ٴ�·��,ʹ�� while break��ʽ���
//
//	����
//	1. money ���� ��� 
//	2. ������� count ͳ�ƿ��Ծ������ٸ�·��
//	3.  while break
//	4. break ������ money < 1000ʱ
//*/
//
//	int count = 0; //·����
//	int money = 100000; //���е�Ǯ
//	while(1){ //��ѭ��
//
//		//�ж��Ƿ���˳�
//		if(money < 1000) { //�˳�while����
//			break;
//		}
//
//		//���ֽ�>50000ʱ,ÿ�ν�5%
//		if(money >50000) {
//			money = money * 0.95;
//			
//		} else if(money <= 50000) {
//			money -= 1000;
//			
//		}
//		count++; //������·������1
//	}
//	printf("100,000Ԫ ���Ծ��� %d ��·�� ʣ�� %d Ԫ", count, money);
//	getchar();
//
//}