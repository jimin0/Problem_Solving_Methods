///* Lab1 */
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
//		printf("%s Korean=%d Math=%d English=%d Averag=%.2f\n", stu[i].name, stu[i].korean, stu[i].math, stu[i].english, stu[i].average);
//	}
//}
//
//int main() {
//	struct STUDENT stu[NUM];
//	init(stu);
//	print(stu);
//}