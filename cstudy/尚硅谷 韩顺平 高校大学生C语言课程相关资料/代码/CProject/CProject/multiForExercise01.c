//#include <stdio.h>
//void main() {
//
//	//ͳ��3����ɼ������ÿ������5��ͬѧ������������ƽ���ֺ����а༶��ƽ����[ѧ���ĳɼ��Ӽ�������]��
//
//	//����
//	// ��̼��� 1. ������� 2. �ȼ��ٸ���(�ֽ�) 3. ������Ҫ���ӻ��޸���Ӧ�Ĵ���
//	//1. �������ƽ����
//	//2. ���а༶��ƽ����, �õ����а༶���ܷ� allClassTotalScore
//	//3. ���������ʾ �༶���� classNum , ���������ʾ ѧ������ stuNum
//	//4. ������� classTotalScore ÿ���༶�ܷ�
//	//5. ������� score , ����ѧ���ɼ�
//	//6. ʹ������forѭ��
//
//	//�����¹��� ͳ�������༰��������ÿ������5��ͬѧ
//	//����
//	//1. ����һ������ count �����漰������
//	//2. �����յ�һ��ѧ���ɼ��󣬾Ϳ����Ƿ񼰸�����������ۼƵ� count
//
//	int stuNum = 5;
//	int classNum = 3;
//	double classTotalScore= 0.0;
//	double score = 0.0;
//	double allClassTotalScore = 0.0; //���а༶�ܳɼ�
//	int count = 0; //��������
//	int i, j;
//	for ( i = 1; i <= classNum; i++) { //���ư༶ѭ������
//		
//		//ÿ�θ�һ���༶����ɼ�ʱ����Ҫ����
//		classTotalScore = 0.0;
//		for( j = 1; j <= stuNum; j++) { //����ѧ��ѭ������
//			printf("\n�������%d�༶�� ��%d��ѧ���ĳɼ�", i , j);
//			scanf("%lf", &score);
//			if(score >= 60) {
//				count++;
//			}
//			classTotalScore += score; //�ۼƳɼ�
//		}
//		allClassTotalScore += classTotalScore; //�ۼ����а༶�ɼ�
//		//���ڲ��forѭ�������󣬾͵õ��˸ð༶ ���ܳɼ�
//		printf("\n��%d���༶�� ƽ���� = %.2f", i, classTotalScore / stuNum);
//	}
//
//
//	//������а༶�ĳɼ�
//	printf("\n���а༶�� ƽ���� = %.2f", allClassTotalScore / (stuNum * classNum));
//	printf("\n���а༶�� �������� = %d", count);
//	getchar();
//	getchar();
//
//}