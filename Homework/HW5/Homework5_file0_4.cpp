/*Hoework 4 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main() {

	FILE* infile;
	char line[100];
	int lcount = 0;

	if ((infile = fopen("charstream.txt", "r")) == NULL) {	//read�� file�� ����
		printf("File Could Not Be Opened.\n");
	}
	/* Get each line from the input file and write the line and
	line number to the screen */

	// gets : �ٹٲ޹���(\n)���������� ������ �д� ��.
	while (fgets(line, sizeof(line), infile) != NULL) {
		lcount++;
		printf("Line %d : %s", lcount, line);		// �ܼ�â�� printf
	}

	fclose(infile);
}

