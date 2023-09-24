//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//#define NUM 5
//
//struct STUDENT {
//	char name[20];
//	int korean;
//	int math;
//	int english;
//	float average;
//	int rank;
//};
//
//void init(struct STUDENT* stu) {
//	for (int i = 0; i < NUM; i++) {
//		printf("Type %d-th info (name, korean, math, english):", i);
//		scanf("%s %d %d %d", &stu[i].name, &stu[i].korean, &stu[i].math, &stu[i].english);
//		stu[i].average = (float)(stu[i].korean + stu[i].math + stu[i].english) / 3.0;
//	}
//}
//
//void print(struct STUDENT* stu) {
//	printf("\nPrinting the result\n");
//	for (int i = 0; i < NUM; i++) {
//		printf("Rank%d:%s Korean=%d Math=%d English=%d Averag=%.2f\n", i + 1, stu[i].name, stu[i].korean, stu[i].math, stu[i].english, stu[i].average);
//	}
//}
//void swap(struct STUDENT* a, struct STUDENT* b) {
//	struct STUDENT tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//void ranking(struct STUDENT* stu) {
//	int i, j;
//	for (i = 0; i < NUM - 1; i++) {
//		for (j = 1; j < NUM - i; j++) {
//			if (stu[j - 1].average < stu[j].average)
//				swap(&stu[j - 1], &stu[j]);
//		}
//	}
//	for (i = 0; i < NUM; i++) {
//		stu[i].rank = i;
//	}
//}
//
//int main() {
//	struct STUDENT stu[NUM];
//	init(stu);
//	ranking(stu);
//	print(stu);
//}
