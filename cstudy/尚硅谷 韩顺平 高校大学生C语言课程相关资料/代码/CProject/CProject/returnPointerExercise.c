//#include <stdio.h>
//#include <stdlib.h>
////��дһ������������һ��һά����
//int * f1() {
//	static int arr[10]; //�������static ,��arr �Ŀռ��ھ�̬����������
//
//	int i = 0;
//	for (i = 0; i < 10;i++) {
//		arr[i] = rand();
//	}
//
//	return arr;
//}
//
//void main() {
//
//	int *p;
//	int i;
//	p = f1(); //p ָ������ f1 ���ɵ�������׵�ַ(����һ��Ԫ�صĵ�ַ)
//	for ( i = 0; i <10; i++) {
//		printf("\n%d", *(p+i));
//	}
//	getchar();
//}