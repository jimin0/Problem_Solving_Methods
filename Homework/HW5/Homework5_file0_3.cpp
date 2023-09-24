
/*Homework 3*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main() {
	int a, sum = 0;
	FILE* inFile;		// �Է�
	FILE* outFile;		// ���

	inFile = fopen("myinFile.txt", "r");
	if (inFile == NULL) {
		printf("Input File Could Not Be Opened.");
	}

	outFile = fopen("myoutFile.txt", "w"); // �ٿ������� a, ���������� w
	if (outFile == NULL) {
		printf("Output File Could Not Be Opened.");
	}
	/* Read and sum the integers from the input file and
		write the sum to the output file */
	
	// ������ ������ ���� �ް�, ������ ���� ��� sum�� �ֱ�
	while (fscanf(inFile, "%d", &a) != EOF) /* loops until EOF */
		sum = sum + a;
	// printf�� Ư�� ���� myFile�� ����ϰ� �; fprintf
	fprintf(outFile, "The sum is %d\n", sum);

	fclose(inFile);
	fclose(outFile);
}
