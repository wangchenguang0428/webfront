//#include <stdio.h>
//
//void main() {
//	
//	//����һ���ļ�ָ��
//	FILE *fp = NULL;
//	//����һ��������
//	char buff[1024];
//
//	//���ļ�
//	fp = fopen("d:/test200.txt", "r");
//	//����1
//	//fscanf(fp, "%s", buff);
//	////���
//	//printf("%s\n", buff);
//
//	//����2 ��ȡ�����ļ�
//	//˵����ѭ����ȡfpָ����ļ����ݣ��������NULL,�ͽ���
//
//	while(fgets(buff, 1024,fp)!=NULL) {
//		printf("%s", buff);
//	}
//	
//	//�ر��ļ�
//	fclose(fp);
//
//
//	getchar();
//}