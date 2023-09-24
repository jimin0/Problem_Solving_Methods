#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main() {
	FILE* myInFile, * myOutFile;
	
	char ch;
	myInFile = fopen("data1.txt", "r");
	if (myInFile == NULL) {
		printf("Could not open data.txt!\n");
	}
	myOutFile = fopen("samedata.txt", "w");
	if (myOutFile == NULL) {
		printf("Could not open samedata.txt!\n");
	}

	while ((ch = fgetc(myInFile)) != EOF)
		fputc(ch,myOutFile);

	fclose(myInFile);
	fclose(myOutFile);
}