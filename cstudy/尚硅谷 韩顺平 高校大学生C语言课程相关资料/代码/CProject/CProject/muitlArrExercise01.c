//#include <stdio.h>
//
//void main() {
//	
//	int map[3][3] = {{0,0,1},{1,1,1},{1,1,3}};
//	
//	//����
//	//�ȵõ���
//	//1. sizeof(map)  �õ����map����Ĵ�С 9 * 4 = 36 
//	//2. sizeof(map[0]) �õ� map�У���һ���ж�� 3 * 4 = 12 
//	int rows = sizeof(map) / sizeof(map[0]); // 3
//	/*printf("rows=%d", rows);*/
//
//	//�õ���
//	int cols =  sizeof(map[0]) / sizeof(int); // 12 / 4 = 3
//	int i,j, sum=0;
//	for(i = 0; i < rows; i++) {
//		for(j = 0; j < cols; j++) {
//			printf("%d ",  map[i][j]);
//			sum += map[i][j];//�ۼƵ�sum
//		}
//		printf("\n");
//	}
//	printf("\n sum=%d", sum);
//	getchar();
//}