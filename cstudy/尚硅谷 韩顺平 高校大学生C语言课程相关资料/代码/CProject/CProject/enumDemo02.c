//#include <stdio.h>
//
//enum DAY {
//      MON, TUE, WED, THU=9, FRI, SAT, SUN //���û�и���ֵ���ͻᰴ��˳��ֵ
//} day; // ��ʾ ������һ��ö������ enum Day ,ͬʱ������һ������ day(������ enum DAY)
//
//
//int main() {
//	
//	// ����ö��Ԫ��, ö�ٵ�ÿ��Ԫ�ض���Ӧ��ֵ
//	//day++ ��������棬���ǿ�������
//	for (day = MON; day <= SUN; day++) { //SUN = 12
//		printf("ö��Ԫ�أ�%d \n", day); // 1, 2, 3, 4,5,6,7
//	}
//	//day = FRI;
//	//printf("%d", day); // 10
//	getchar();
//	return 0;
//
//}