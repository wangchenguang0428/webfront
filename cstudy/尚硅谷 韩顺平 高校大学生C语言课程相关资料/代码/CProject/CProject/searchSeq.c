//#include <stdio.h>
//
//
//int seqSearch(int  arr[], int arrLen, int val) {
//	
//	int i;
//	for(i = 0; i < arrLen; i++) {
//		if(arr[i] == val) {
//			return i;
//		}
//	}
//
//	//�����forѭ���У�û��ִ�е�return ,˵��û���ҵ�
//	return -1;
//
//}
//
//void main() {
//	
//	//��һ�����У�{23�� 1�� 34,89�� 101}
//	//������Ϸ���Ӽ�������������һ�������ж��������Ƿ����������˳����ҡ� Ҫ��: ����ҵ��ˣ�
//	//����ʾ�ҵ����������±�ֵ, �Ҳ�����ʾ û�С�
//
//	//����˼·
//	//1. ��װ������б�����һ��һ���ıȽϣ������ȣ����ҵ�
//	int arr[] = {23, 1, 34,89,101};
//	int arrLen = sizeof(arr) / sizeof(int);
//	int index = seqSearch(arr, arrLen, -101);
//	if (index != -1) { //�ҵ�
//		printf("�ҵ� �±�Ϊ %d", index);
//	} else {
//		printf("û���ҵ�");
//	}
//	getchar();
//
//
//}