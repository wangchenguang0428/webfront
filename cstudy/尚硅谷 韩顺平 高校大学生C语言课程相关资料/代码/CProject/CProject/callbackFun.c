//#include <stdlib.h> 
//#include <stdio.h>
//// �ص�����
////1.  int (*f)(void) 
////2. f ���� ����ָ�� , �����Խ��յĺ����� (���� int ,û���βεĺ���)
////3. f �����ﱻ initArray ���ã��䵱�˻ص�������ɫ
//void initArray(int *array, int arraySize, int (*f)(void)) {
//    int i ;
//	//ѭ��10
//    for ( i=0; i<arraySize; i++) {
//        array[i] = f(); //ͨ�� ����ָ������� getNextRandomValue ����
//	}
//}
// 
//// ��ȡ���ֵ
//int getNextRandomValue(void) {
//    return rand();//rand ϵͳ������ �᷵��һ���������
//}
// 
//int main(void) {
//    int myarray[10],i; //����һ������� int
//  
//	//˵��
//	//1. ���� initArray ����
//	//2. ������һ�������� getNextRandomValue (��ַ), ��Ҫʹ�ú���ָ�����
//	initArray(myarray, 10, getNextRandomValue);
//   
//	//�����ֵ�������
//	for(i = 0; i < 10; i++) {
//        printf("%d ", myarray[i]);
//    }
//    printf("\n");
//	getchar();
//    return 0;
//}
