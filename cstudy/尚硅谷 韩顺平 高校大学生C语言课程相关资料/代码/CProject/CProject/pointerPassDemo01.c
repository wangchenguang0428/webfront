//#include <stdio.h>
//
//void test2(int *p); //��������������int *
//void main() {
//	int num=90;
//	int *p = &num; //�� num �ĵ�ַ���� p
//	test2(&num); //����ַ
//	printf("\nmain() �е�num=%d", num); // num = 91
//	test2(p); //��ָ��
//	printf("\nmain() �е�num=%d", num);// num = 92
//	getchar();
//}
//void test2(int *p) {
//	*p += 1; //*p �ͷ��� num��ֵ 
//}
