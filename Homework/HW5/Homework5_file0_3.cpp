
/*Homework 3*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main() {
	int a, sum = 0;
	FILE* inFile;		// 입력
	FILE* outFile;		// 출력

	inFile = fopen("myinFile.txt", "r");
	if (inFile == NULL) {
		printf("Input File Could Not Be Opened.");
	}

	outFile = fopen("myoutFile.txt", "w"); // 붙여쓸려면 a, 덮으쓸려면 w
	if (outFile == NULL) {
		printf("Output File Could Not Be Opened.");
	}
	/* Read and sum the integers from the input file and
		write the sum to the output file */
	
	// 파일이 끝날때 까지 받고, 들어오는 값을 모두 sum에 넣기
	while (fscanf(inFile, "%d", &a) != EOF) /* loops until EOF */
		sum = sum + a;
	// printf를 특정 파일 myFile에 출력하고 싶어서 fprintf
	fprintf(outFile, "The sum is %d\n", sum);

	fclose(inFile);
	fclose(outFile);
}
