//#include <stdio.h>
//
////˵������windows ����ϵͳ�� linux����ϵͳ�£�����Դ�벻һ��!!!
//
//*
//#include <windows.h>
//int main() {
//    Sleep(5000); //����
//    puts("hello, �й��~"); //���
//    getchar();
//    return 0;
//}
//
//*/
//
//#if _WIN32   //�����windowsƽ̨, ��ִ�� #include <windows.h>
//#include <windows.h>
//#elif __linux__  //�����ж��ǲ���linux ,�����linux ������<unistd.h>
//#include <unistd.h>
//#endif 
//int main() {
//    //��ͬ��ƽ̨�µ��ò�ͬ�ĺ���
//    #if _WIN32  //ʶ��windowsƽ̨
//    Sleep(5000); //����
//    #elif __linux__  //ʶ��linuxƽ̨
//    sleep(5); //��
//    #endif
//    puts("hello, �й��~"); //���
//    getchar();
//    return 0;
//}
