///*���һ������int day(int k,int m,int n)���书���ǣ�����С����Ҫ��
//���������������������k ���ף�С��ÿ�����������m ���ף�ÿ��������˯����
//�»�n ���ף������������»�����n��m��k����
//���磬���ֱ� ����253��71��29 �� k��m��n����������Ϊ��6��
//ע�⣺�˳��������prog.c�С�
//����Ķ�������main������WriteData �ͺ���compute �е��κ����ݣ����ں���
//day �Ļ��������������д��������䡣*/
//#include < conio.h >
//#include < stdio.h >
//
////����
////1. k ��ʾ���� m ÿ�����ĸ߶� n ��ʾÿ���»��ĸ߶�
////2. ��Ϊ��ÿ��ʵ�����ĸ߶�  m - n
////3. ʹ��һ��forѭ�� ��������ʲôʱ��������� k �ĸ߶ȣ��ͱ�ʾ������
//int day( int k, int m, int n ){
//	int days, height =0; //days �� height ����С��ʵ�����ĸ߶�
//	for(days=1; 1; days++) { // ��������ʹ�õ�������ѭ��
//		height += m; //����m
//		if(height >= k) { //˵��������, �ͷ���days
//			return days;
//		}
//		height -= n;// �����»�n
//	}
//}
//main()
//{ int k, m, n;
//printf("\nPlease enter 3 numbers: ");
//scanf("%d %d %d", &k, &m, &n );
//printf( "\nFor %d days, worm will be at the top.",day(k,m,n));
//getchar();
//getchar();
//}
///* ���²����뿼�������޹�, ���������Ķ�, �����ý����κ��޸� */
//void WriteData(int num)
//{ FILE *fp;
//fp = fopen("dat92.dat", "w") ;
//fprintf(fp, "%d", num);
//fclose(fp);
//}
//void compute()
//{ int k, m, n;
//FILE *fp;
//fp=fopen("c9670903.in","r");
//fscanf(fp, "%d %d %d", &k, &m, &n );
//fclose(fp);
//WriteData(day(k,m,n));
//}