//#include <stdio.h>
//
//void f1(int arr[]) {
//	printf("\nf1������ �� arr�ĵ�ַ = %p", &arr);
//	arr[0] = arr[0] + 1;
//}
//void main() {
//
//	int arr[3] = {3,4,5};
//	int i;
//	printf("\nmain������ �� arr�ĵ�ַ = %p", arr);
//	
//	//����Ĭ������ ��ַ����(����ָ��)
//	f1(arr);
//
//	//���� main�����е� arr
//	for(i = 0; i < 3; i++) {
//	printf("arr[%d]=%d ", i , arr[i]);  // 4,4,5
//	}
//	getchar();
//}