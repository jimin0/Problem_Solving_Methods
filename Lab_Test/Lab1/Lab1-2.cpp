/* Lab1-2: scratch */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define NUM 5

struct STUDENT {	// STUDENT 구조체 선언
	char name[5];
	int kor;
	int math;
	int eng;
	float avg;
};
void init(struct STUDENT* stu) {				// 저장 함수
	for (int i = 0; i < NUM; i++) {
		printf("Type %d-th info (name, korean, math, english):", i);
		scanf("%s %d %d %d", &stu[i].name, &stu[i].kor, &stu[i].math, &stu[i].eng);
	}
}

void print(struct STUDENT* stu) {		// 출력함수
	printf("\nPrinting the result\n");
	for (int i = 0; i < NUM; i++) {
		printf("%s Korean=%d Math=%d English=%d Average=%.2f\n", stu[i].name, stu[i].kor, stu[i].math, stu[i].eng, stu[i].avg);
	}
}

void AVG(struct STUDENT* stu) {		// 평균 구하는 함수
	for (int i = 0; i < NUM; i++) {
		stu[i].avg = ((float)(stu[i].kor + stu[i].math + stu[i].eng)) / 3;		// stu.avg에 각각 저장
	}
}


void print_first_rank(struct STUDENT* stu) {
	printf("\nPrinting the first rank info\n");
	struct STUDENT tmp;
	int index = 0;

	/* code here to find the first rank */
	for (int i = 1; i < NUM; i++) {
		if (stu[i].avg > stu[index].avg)
			index = i;					// 값이 큰거 저장
	}
	/* code here for printing */
	// printf("index = %d", index);
	printf("%s Korean=%d Math=%d English=%d Average=%.2f\n", stu[index].name, stu[index].kor, stu[index].math, stu[index].eng, stu[index].avg);

}

int main() {
	struct STUDENT stu[NUM];
	init(stu);
	AVG(stu);
	print(stu);
	print_first_rank(stu);
}