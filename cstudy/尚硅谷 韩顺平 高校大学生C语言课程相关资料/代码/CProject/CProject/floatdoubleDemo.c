//#include <stdio.h>
//
//void main() {
//	
//	//�����ͳ���Ĭ��Ϊdouble�� ������float�ͳ���ʱ�����ӡ�f����F��
//
//	float d1 = 1.18909095; //�ӡ�double������float���ض�, 1.1 ��double
//	float d2 = 1.1f;//1.1f ���� float
//	double d3 = 1.3; // ok 
//
//
//	double d4 = 5.12;
//	double d5 = .512; // �ȼ� 0.512
//
//	double d6 = 5.12e2; //�ȼ� 5.12 * (10^2) = 512
//	double d7 = 5.12e-2; // �ȼ� 5.12 * (10^-2) = 5.12 / 100 = 0.0512
//
//	//�����ʱ�����%f Ĭ�ϱ���С���� 6λ
//	printf("d1=%.15f d2=%f d3=%f d4=%f d5=%f d6=%f d7=%f", d1,d2,d3,d4,d5,d6,d7);
//	getchar();
//
//
//}