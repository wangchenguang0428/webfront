//#include <stdio.h>
//
//union data{ // data ����һ��������(�ڴ沼��)�� ����������Ա, �������ݿռ�, �ÿռ�Ĵ�С��ռ�����ĳ�ԱΪ׼
//	int n;
//	char ch;
//	short m;
//};
//void main(){
//	union data a; //��������һ�� ���������  a
//	printf("%d, %d\n", sizeof(a), sizeof(union data) ); // 4, 4
//	a.n = 0x40;//16����
//	printf("%d, %c, %d\n", a.n, a.ch, a.m);
//	a.ch = '9'; //
//	printf("%d, %c, %d\n", a.n, a.ch, a.m);
//	a.m = 0x2059;
//	printf("%d, %c, %d\n", a.n, a.ch, a.m);
//	a.n = 0x3E25AD54;
//	printf("%d, %c, %d\n", a.n, a.ch, a.m);
//	getchar();
//}
