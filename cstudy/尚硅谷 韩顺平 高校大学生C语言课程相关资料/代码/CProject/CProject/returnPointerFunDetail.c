//#include <stdio.h>
//
//int *func(){
//    //int n = 100;//�ֲ�����, ��func ����ʱ���ͻ�����
//    
//	static int n = 100; // �������ֲ������� static ���ʵģ���ôn ������ݵĿռ��ھ�̬������
//	return &n;
//}
//int main(){
//    int *p = func(); //func ����ָ��
//	int n;
//	printf("okoook~~"); //������ʹ�õ� �ֲ�����  int n = 100 ռ�ÿռ�
//	printf("okoook~~"); 
//	printf("okoook~~"); 
//    n = *p;
//    printf("\nvalue = %d\n", n);// ˼�����Ƿ��ܹ����100? ��һ��
//	getchar();
//    return 0;
//}
