//#include <stdio.h>
//
//
////���дһ������ swap(int *n1, int *n2) ���Խ��� n1 �� n2��ֵ
//
////˵��
////1. ������Ϊswap
////2. �β�������ָ������ int*
//void swap(int *n1, int *n2) {
//	int temp = *n1; //��ʾ�� n1 ���ָ��ָ��ı�����ֵ���� temp
//	*n1 = *n2; // ��ʾ�� n2 ���ָ��ָ��ı�����ֵ���� n1���ָ��ָ��ı���
//	*n2 = temp; //��ʾ�� temp ֵ���� n2���ָ��ָ��ı���
//}
//
//void main() {
//	
//	int n1 = 1;
//	int n2 = 2;
//	swap(&n1, &n2);
//	printf("main n1=%d n2=%d", n1, n2);// n1= 2 n2 = 1
//	getchar();
//}