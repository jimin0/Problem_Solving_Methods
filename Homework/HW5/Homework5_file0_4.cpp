/*Hoework 4 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main() {

	FILE* infile;
	char line[100];
	int lcount = 0;

	if ((infile = fopen("charstream.txt", "r")) == NULL) {	//read는 file로 읽음
		printf("File Could Not Be Opened.\n");
	}
	/* Get each line from the input file and write the line and
	line number to the screen */

	// gets : 줄바꿈문자(\n)있을때까지 라인을 읽는 것.
	while (fgets(line, sizeof(line), infile) != NULL) {
		lcount++;
		printf("Line %d : %s", lcount, line);		// 콘솔창에 printf
	}

	fclose(infile);
}

