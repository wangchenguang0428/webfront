//#include <stdio.h>
//
//int main () {
//    int  var; 
//   int  *ptr; //һ��ָ��
//   int  **pptr; //����ָ��
//   int ***ppptr; // ����ָ��
//   var = 3000; 
//  
//   ptr = &var; // var �����ĵ�ַ���� ptr
//
//   pptr = &ptr;// ��ʾ�� ptr ��ŵĵ�ַ������ pptr
//
//   ppptr = &pptr; // ��ʾ�� pptr ��ŵĵ�ַ������ ppptr
//
//   printf("var�ĵ�ַ=%p  var = %d \n", &var, var );// 0x1133  3000
//   printf("ptr �ı���ĵ�ַ=%p ptr��ŵĵ�ַ=%p *ptr = %d \n", &ptr, ptr, *ptr );
//   printf("pptr �����ַ = %p pptr��ŵĵ�ַ=%p  **pptr = %d\n", &pptr, pptr, **pptr);
//   printf("ppptr �����ַ = %p ppptr��ŵĵ�ַ=%p  ***pptr = %d\n", &ppptr, ppptr, ***ppptr);
//   getchar();
//   return 0;
//
//}
