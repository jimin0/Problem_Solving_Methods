/* Lab1-1: scratch */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define NUM 5

struct STUDENT {	// STUDENT ����ü ����
	char name[5];
	int kor;
	int math;
	int eng;
	float avg;
};

void init(struct STUDENT* stu) {				// ����
	for (int i = 0; i < NUM; i++) {
		printf("Type %d-th info (name, korean, math, english):", i);
		scanf("%s %d %d %d", &stu[i].name, &stu[i].kor, &stu[i].math, &stu[i].eng);
	}
}

void print(struct STUDENT* stu) {		// ����Լ�
	printf("\nPrinting the result\n");
	for (int i = 0; i < NUM; i++) {
		printf("%s Korean=%d Math=%d English=%d Average=%.2f\n", stu[i].name, stu[i].kor, stu[i].math, stu[i].eng, stu[i].avg);
	}
}

void AVG(struct STUDENT* stu) {		// ��� ���ϴ� �Լ�
	for (int i = 0; i < NUM; i++) {
		stu[i].avg = ((float)(stu[i].kor + stu[i].math + stu[i].eng)) / 3;		// stu.avg�� ���� ����
	}
}

int main() {
	struct STUDENT stu[NUM];
	init(stu);
	AVG(stu);		// ��� ���ϴ� �Լ� ȣ��
	print(stu);
}