/*Hoework 5 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main() {
	int i;
	FILE* myFile;
	myFile = fopen("myinFile2.txt", "r");
	/* Read the input file one character at a time, and write
	the character to the screen. */

	if (myFile == NULL)
		printf("\nFile Could Not Be Opened");
	else {
		char ch = fgetc(myFile);
		while (ch != EOF) {
			putchar(ch); // 콘솔창에 띄움
			ch = fgetc(myFile);
		}
		printf("\nFinished printing the file\n");
	}
	fclose(myFile);
}