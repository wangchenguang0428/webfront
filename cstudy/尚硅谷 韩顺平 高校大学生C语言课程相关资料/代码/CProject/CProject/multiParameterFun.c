//#include <stdio.h>
//#include <stdarg.h>
//
////˵��
////num ��ʾ���ݵĲ�����ʽ
////... ��ʾ���Դ��ݶ��������numһ�¼���
//int fun(int num, ...) //�ɱ亯�����������ĸ������Բ�ȷ��, ʹ��... ��ʾ
//{
//	int i, totalSum=0; //totalSum һ��Ҫ��ʼ��
//	int val = 0;
//	va_list v1;			//v1ʵ����һ���ַ�ָ�룬��ͷ�ļ�������ҵ� 
//	va_start(v1, num);		//ʹv1ָ��ɱ��б��е�һ��ֵ����num��ĵ�һ������ 
//	printf("*v = %d\n",*v1);
//	for(i = 0; i < num; i++)		//num ��һ��Ϊ�˷�ֹ�±곬�� 
//	{
//		val = va_arg(v1, int);	//�ú�������v1ָ���ֵ����ʹv1�����ƶ�һ��int�ľ��룬ʹ��ָ����һ��int 
//		printf("val = %d\n", val); // val = 10 val=30 val=60
//		totalSum += val;
//	 } 
//	va_end(v1);	//�ر�v1ָ�룬ʹ��ָ��null
//	return totalSum;
//}
//
//void main() {
//	int res = fun(8, 10,30,60, -100,1,5,7,98);
//	printf("����=%d", res);
//	getchar();
//}
