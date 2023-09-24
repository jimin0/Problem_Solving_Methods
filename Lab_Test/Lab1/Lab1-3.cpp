/* Lab1-3: scratch */
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
void init(struct STUDENT* stu) {				// 저장
	for (int i = 0; i < NUM; i++) {
		printf("Type %d-th info (name, korean, math, english):", i);
		scanf("%s %d %d %d", &stu[i].name, &stu[i].kor, &stu[i].math, &stu[i].eng);
	}
}

void print(struct STUDENT* stu) {		// 출력함수
	printf("\nPrinting the result\n");
	for (int i = 0; i < NUM; i++) {			// 랭킹출력은 index + 1
		printf("Rank %d : %s Korean=%d Math=%d English=%d Average=%.2f\n", i+1,stu[i].name, stu[i].kor, stu[i].math, stu[i].eng, stu[i].avg);
	}
}

void AVG(struct STUDENT* stu) {		// 평균 구하는 함수
	for (int i = 0; i < NUM; i++) {
		stu[i].avg = ((float)(stu[i].kor + stu[i].math + stu[i].eng)) / 3;		// stu.avg에 각각 저장
	}
}


void ranking(struct STUDENT* stu) {
	/* code here for ranking */
	int i, j;
	float tmp;
	for (i = 0; i < NUM - 1; i++) {				// 버블정렬
		for (j = NUM - 1; j > i; j--) {
			if (stu[j - 1].avg < stu[j].avg) {
				tmp = stu[j].avg;					// 스왑구문
				stu[j].avg = stu[j - 1].avg;
				stu[j - 1].avg = tmp;
			}
		}
	}
}

int main() {
	struct STUDENT stu[NUM];
	init(stu);
	AVG(stu);
	ranking(stu);
	print(stu);
}