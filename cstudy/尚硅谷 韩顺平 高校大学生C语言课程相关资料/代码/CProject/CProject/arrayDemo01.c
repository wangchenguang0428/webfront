//#include <stdio.h>
//
//void main() {
//	/*
//	һ����������6ֻ�������ǵ����طֱ���3kg,5kg,1kg,
//3.4kg,2kg,50kg ����������ֻ�����������Ƕ���?ƽ
//�������Ƕ���? �����һ������
//
//	*/
//
//	//1 ��������
//	double hens[6];
//	double totalWeight = 0.0;
//	double avgWeight = 0.0;
//	int i, arrLen;
//	//2. ��ʼ�������ÿ��Ԫ��
//	//[�±�]
//	hens[0] = 3; //��һ��Ԫ��
//	hens[1] = 5; //��2��Ԫ��
//	hens[2] = 1;
//	hens[3] = 3.4;
//	hens[4] = 2;
//	hens[5] = 50;
//
//	
//	//3. ��������
//	//��εõ������С
//	//  sizeof(hens)  ������ܵĴ�С 
//	//  6 * 8 = 48
//	//  sizeof(double) ���� һ��double ռ�õ��ֽ��� 
//	//printf("sizeof(hens)=%d", sizeof(hens)); 
//	arrLen = sizeof(hens) /  sizeof(double);
//	for(i = 0; i < arrLen; i++) {
//		totalWeight += hens[i]; // �ۼ�ÿֻ������
//	}
//	avgWeight = totalWeight / 6;
//	printf("������totalWeight=%.2f  ƽ������ avgWeight=%.2f", totalWeight, avgWeight);
//	getchar();
//
//}