//#include <stdio.h>
//void main() {
//	
//	/*
//	 定义二维数组，用于保存三个班，
//	 每个班五名同学成绩，并求出每个班级平均分、以及所有班级平均分
//	 分析
//	 1. 创建一个 scores[3][5]
//	 2. 遍历，给赋值
//	 3. 再次遍历，统计总分和平均分
//	 4. 输出
//	*/
//	double score[3][5]; //
//	int rows = sizeof(score) / sizeof(score[0]), cols = sizeof(score[0])/sizeof(double), i, j; // 
//	//classTotalScore 各个班级总成绩 totalScore 所有学生成绩
//	double totalScore = 0.0, classTotalScore = 0.0;
//	for (i = 0; i < rows; i++ ) {
//		for (j = 0; j < cols ; j++ ) {
//			score[i][j] = 0.0; //初始化
//		}
//	}
//	//遍历，给每个学生输入成绩
//	for (i = 0; i < rows; i++ ) {
//		for (j = 0; j < cols ; j++ ) {
//			printf("请输入第 %d 个班的  第 %d 个 学生的成绩", i + 1, j + 1);
//			scanf("%lf", &score[i][j]);
//		}
//	}
//	//getchar();
//	//显示下成绩情况
//	for (i = 0; i < rows; i++ ) {
//		for (j = 0; j < cols ; j++ ) {
//			printf("%.2f ",score[i][j]);
//		}
//		printf("\n");
//	}
//	//统计各个班的总成绩，和所有学生的总成绩
//	for (i = 0; i < rows; i++ ) {
//		classTotalScore = 0.0; // 每次清0 
//		for (j = 0; j < cols ; j++ ) {
//			classTotalScore += score[i][j]; //累计每个班的总成绩
//		}
//		printf("\n第 %d 个班的平均成绩是 %.2f" , i+1,  classTotalScore/cols );
//		totalScore += classTotalScore; //将该班级的总分，累计到 totalScore
//	}
//	printf("\n所有学生总成绩是  %.2f 平均成绩 %.2f" ,  totalScore, totalScore/(rows * cols));
//	getchar();
//	getchar();
//
//}