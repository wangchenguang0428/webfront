//#include <stdio.h>
//
////˵��
////1. max ����
////2. ��������int ,���ؽϴ���
//int max(int a, int b){
//    return a>b ? a : b;
//}
//
//int main(){
//    int x, y, maxVal;
//   
//	//˵�� ����ָ��
//	//1. ����ָ������� pmax
//	//2. int ��ʾ �ú���ָ��ָ��ĺ����Ƿ���int ����
//	//3. (int, int) ��ʾ �ú���ָ��ָ��ĺ����β��ǽ������� int 
//	//4. �ڶ��庯��ָ��ʱ��Ҳ����д���β���  int (*pmax)(int x, int y) = max;
//    int (*pmax)(int x, int y) = max;  //
//    printf("Input two numbers:");
//   
//	scanf("%d %d", &x, &y);
//	// (*pmax)(x, y) ͨ������ָ��ȥ���� ����max
//	// ���÷�ʽ 2 pmax(x,y)
//    maxVal = (*pmax)(x, y);
//    printf("Max value: %d pmax=%p pmax����ĵ�ַ=%p\n", maxVal, pmax, &pmax);
//	getchar();
//	getchar();
//    return 0;
//}
//
