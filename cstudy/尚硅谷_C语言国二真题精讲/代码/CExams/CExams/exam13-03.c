///*���дһ������fun(char *s)��
//1) �����Ĺ����ǰ��ַ��������е���ĸ��д�ڸ���ĸ����һ����ĸ��
//2) ���һ����ĸz ��д����ĸa��
//3) ��д��ĸ��Ϊ��д��ĸ��Сд��ĸ��ΪСд��ĸ
//4) �������ַ����䡣 
//���磬ԭ�е��ַ���Ϊ��Mn.123xyZ��
//����øú����󣬴��е�����Ϊ��No.123yzA�� ע�⣺����Դ��������ļ�prog.c
//�С� ����Ķ�������main �����������е��κ����ݣ����ں���fun �Ļ���������
//�����д��������䡣*/
//#include < conio.h >
//#include < string.h >
//#include < stdio.h >
//#include < ctype.h >
//#define N 81
////����
////1. ��Ϊ�Ƕ� ���е���ĸ���������Ҫ�Դ�����ַ������б���
////2. ����Ĺ����� '��ĸ' + 1 ������ 'z' ,'Z' ��Ҫ��������
////3. ʹ�� for + switch
//void fun(char *s){
//	//����ѭ������ i, �����ַ����ĳ���
//	int i, length;
//	length = strlen(s);
//	for( i = 0; i < length; i++) {
//		//�������ַ�����
//		if( !((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))) {
//			continue;
//		}
//		//�������Ҫ������ַ�
//		switch(s[i]) {
//			case 'z' : 
//				s[i] = 'a';
//				break;
//			case 'Z' : 
//				s[i] = 'A';
//				break;
//			default :
//				s[i] = s[i] + 1;
//				break;
//		}
//	}
//}
//main()
//{ char a[N];
//printf("Enter a string:");gets(a);
//printf("The original string is :");puts(a);
//fun(a);
//printf("The string after modified: ");
//puts(a);
//getchar();
//getchar();
//}