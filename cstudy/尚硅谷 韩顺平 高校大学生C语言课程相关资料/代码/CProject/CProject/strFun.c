//#include <stdio.h>
//#include <string.h> // ͷ�ļ��������ַ�����ص�ϵͳ����
//
//void main() {
//
//	char src[50] = "abc", dest[50]; //�����������ַ�����(�ַ���) , ��СΪ50
//	char * str = "abcdff";
//	printf("str.len=%d", strlen(str)); //ͳ���ַ����Ĵ�С
//	
//	//��ʾ�� "hello" ������ src
//	//ע�⣬�����ַ����Ὣԭ�������ݸ���
//	strcpy(src,  "hello");
//	printf("\s src=%s", src); 
//
//	strcpy(dest, "�й��");
//	//strcat �ǽ� src �ַ������������ӵ� dest ,���ǲ��Ḳ��destԭ�������ݣ���������!! 
//	strcat(dest, src); // "hello�й��"
//	printf("���յ�Ŀ���ַ����� dest=%s", dest);
//	getchar();
//
//}