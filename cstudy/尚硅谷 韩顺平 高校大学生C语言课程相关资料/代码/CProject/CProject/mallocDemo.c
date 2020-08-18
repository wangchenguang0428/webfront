//#include <stdlib.h>
//#include <stdio.h>
//int main() {
//	void check(int *);
//	int * p,i;
//	// 在堆区开辟一个 5 * 4 的空间，并将地址 (void *） ， 转成  (int *) , 赋给 p
//	p = (int *)malloc(5*sizeof(int));
//	for( i = 0; i < 5; i++){
//		scanf("%d", p + i);
//	}
//	check(p);
//	//free(p); //销毁 堆区 p 指向的空间
//	getchar();
//	getchar();
//	return 0;
//}
//void check(int *p) {
//	int i;
//	printf("\n不及格的成绩 有: ");
//	for(i =0; i < 5; i++){
//		if(p[i] < 60) {
//			printf(" %d ", p[i]);
//		}
//	}
//}
