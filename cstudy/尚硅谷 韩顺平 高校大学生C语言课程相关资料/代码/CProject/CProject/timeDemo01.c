//#include <stdio.h>
//#include <time.h> //��ͷ�ļ��У����������ں�ʱ����صĺ���
//
//void test() { // ����test����������ִ�л���ʱ��
//	int i = 0;
//	int sum = 0;
//	int j = 0;
//	for(i = 0; i < 77777777;i++) {
//		sum = 0;
//		for (j = 0; j< 10;j++) {
//			sum += j;
//		}
//	}
//}
//
//
//int main () {
//   //time_t curtime; //time_h ��һ���ṹ������
//   //time(&curtime); //time() ��ɳ�ʼ��
//
//   ////ctime ����һ����ʾ����ʱ����ַ���������ʱ���ǻ��ڲ��� timer
//   //printf("��ǰʱ�� = %s", ctime(&curtime));
//   //getchar();
//   //return(0);
//
//
//	//�ȵõ�ִ��testǰ��ʱ��
//
//	time_t start_t, end_t;
//	double diff_t; //���ʱ���
//	printf("��������...\n");
//	time(&start_t); //��ʼ���õ���ǰʱ��
//
//
//	test(); //ִ��test
//
//	//�ٵõ�ִ��test���ʱ��
//
//	time(&end_t);//�õ���ǰʱ��
//    diff_t = difftime(end_t, start_t); //ʱ������ ent_t - start_t
//
//
//	//Ȼ��õ�����ʱ�����Ǻ��õ�ʱ��
//	printf("ִ��test()���� ������%.2f ��", diff_t);
//	getchar();
//
//	return 0;
//}
