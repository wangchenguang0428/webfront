//#include <stdio.h>
//void main() {
//	
//	/*
//	 �����ά���飬���ڱ��������࣬
//	 ÿ��������ͬѧ�ɼ��������ÿ���༶ƽ���֡��Լ����а༶ƽ����
//	 ����
//	 1. ����һ�� scores[3][5]
//	 2. ����������ֵ
//	 3. �ٴα�����ͳ���ֺܷ�ƽ����
//	 4. ���
//	*/
//	double score[3][5]; //
//	int rows = sizeof(score) / sizeof(score[0]), cols = sizeof(score[0])/sizeof(double), i, j; // 
//	//classTotalScore �����༶�ܳɼ� totalScore ����ѧ���ɼ�
//	double totalScore = 0.0, classTotalScore = 0.0;
//	for (i = 0; i < rows; i++ ) {
//		for (j = 0; j < cols ; j++ ) {
//			score[i][j] = 0.0; //��ʼ��
//		}
//	}
//	//��������ÿ��ѧ������ɼ�
//	for (i = 0; i < rows; i++ ) {
//		for (j = 0; j < cols ; j++ ) {
//			printf("������� %d �����  �� %d �� ѧ���ĳɼ�", i + 1, j + 1);
//			scanf("%lf", &score[i][j]);
//		}
//	}
//	//getchar();
//	//��ʾ�³ɼ����
//	for (i = 0; i < rows; i++ ) {
//		for (j = 0; j < cols ; j++ ) {
//			printf("%.2f ",score[i][j]);
//		}
//		printf("\n");
//	}
//	//ͳ�Ƹ�������ܳɼ���������ѧ�����ܳɼ�
//	for (i = 0; i < rows; i++ ) {
//		classTotalScore = 0.0; // ÿ����0 
//		for (j = 0; j < cols ; j++ ) {
//			classTotalScore += score[i][j]; //�ۼ�ÿ������ܳɼ�
//		}
//		printf("\n�� %d �����ƽ���ɼ��� %.2f" , i+1,  classTotalScore/cols );
//		totalScore += classTotalScore; //���ð༶���ܷ֣��ۼƵ� totalScore
//	}
//	printf("\n����ѧ���ܳɼ���  %.2f ƽ���ɼ� %.2f" ,  totalScore, totalScore/(rows * cols));
//	getchar();
//	getchar();
//
//}