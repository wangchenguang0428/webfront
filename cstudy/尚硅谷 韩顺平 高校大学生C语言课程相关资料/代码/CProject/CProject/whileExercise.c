//#include <stdio.h>
//#include <string.h>
//void main() {
//
////	��ӡ1��100֮�������ܱ�3��������  
//	int i = 1;
//	int max = 100;
//	while(i <= max) {
//		if( i % 3 == 0 ) {
//			printf("\n i=%d �ܱ�3����", i);
//		}
//		i++;
//	}
//	getchar();
//
////��ӡ40��200֮�����е�ż�� 
//	int i = 40;
//	int max = 200;
//	while(i <= max) {
//		if( i % 2 == 0 ) {
//			printf("\n i=%d ��ż��", i);
//		}
//		i++;
//	}
//	getchar();
//
////��������������ֱ������ "exit" Ϊֹ[ʹ��while���]
//	//����
//	//1. ��Ҫ�����û������룬�ַ���[�ַ�����]
//	//2. ��ʾ�� <string.h> ��һ��strcmp �������ж������ַ����Ƿ���ͬ
//	// int strcmp(const char *str1, const char *str2) // ����0 ��ʾ��ȣ���0��ʾ�����
//
//	char name[10] = "";
//	
//	while( strcmp(name,"exit") != 0) { // exit  = > 0 != 0
//		printf("\n����������");
//		scanf("%s", name); // ���ﲻ��Ҫ �� &name, ��Ϊ ��������ƾ��ǵ�ַ
//		printf("\n�������������=%s", name);
//	}
//	printf("�˳�while");
//	getchar(); //���� �س�
//	getchar(); // ��ͣ����̨
//
//
//}