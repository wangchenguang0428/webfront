//#include <stdio.h>
//
//
////��������û�з���ֵ��������дһ������,���ն�����һ������(��)��ӡ����Ӧ�Ľ�������
////���� totalLevle ��ͨ���βδ���
//void printStar(int totalLevle) {
//	
//	int i,j,k;
//	for(i = 1; i <= totalLevle; i++) {//���Ʋ�
//		//����ո�, ʹ��k���ƿո��ѭ��
//		for (k=1; k <= totalLevle - i; k++) {
//			printf(" ");
//		}
//		for(j = 1; j <= 2 *  i - 1; j++) {
//			if(j == 1 || j == 2 *  i - 1 || i == totalLevle) { //i ==5 ��ʾ���²�
//				printf("*");
//			} else {
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//
//}
//
////��дһ������,���ն�����һ������(1��9),��ӡ����Ӧ�ĳ˷���:��
//void print99(int n) {
//	int i,j;
//	for(i = 1; i <= n; i++) {
//		//��Ϊÿһ�ж���������ʽ, ����ʹ��forѭ������
//		for(j=1; j <= i; j++) {
//			printf("%d * %d = %d  ", j, i , i * j);
//		}
//		printf("\n");
//	}
//}
// 
////���庯����ʵ��������double���ֵ����ֵ��������
//double getMax(double d1, double d2) {
//	return d1 > d2 ? d1: d2;  //��Ԫ����
//}
//
////���庯�����������int �������ĺͣ�������
//int getSum(int n1, int n2, int n3) {
//	return n1 + n2 + n3;
//}
//void main() {
//
//	int totalLevel = 0;
//
//	printf("������������Ĳ���");
//	scanf("%d", &totalLevel);
//	//���ú��� 
//	printStar(totalLevel);
//	
//	getchar();
//	getchar();
//
//	int n = 0;
//	printf("������n");
//	scanf("%d", &n);
//	print99(n);
//	getchar();
//	getchar();
//
//	printf("���ֵ=%.2f", getMax(1.1,7.8));
//	getchar();
//
//}