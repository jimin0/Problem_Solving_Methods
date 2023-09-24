/*
*  This is a program to check whether the partial matched word exists in the given text
*  Input: (1) Full text, (2) sub-string
*  Outout: (Yes) print matched (No) print not matched
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/* A function to count the number of character */
int strlen(char* a) {
	int count = 0;
	while (*a++) {
		count++;
	}
	return count;
}


/*
* A function to divide two sub strings for the given string
* Intput: (1) Sub-string given, (2) First sub-string divided, (3) Second sub-string divided
*/
void divide_words(char* input, char* p1, char* p2) {
}


/* 
* A function to count the number of words in the given text
* Intput: (1) Full text, (2) First sub-string, (3) Second sub-string
* return value: "0" there is no matched word partially, "1" there is matched word partially
*/
int check_words(char* text, char* sub_a, char* sub_b) {

}

int main() {
	char text_arr[256], sub_arr[256], sub_a[256], sub_b[256];

	// get words information
	puts("Text matching program\n");
	printf("Type text:");
	gets_s(text_arr);
	printf("Type sub-string for matching:");
	gets_s(sub_arr);

	// divide the subwords using "*" character
	divide_words(sub_arr, sub_a, sub_b);

	// find whether matached words existing in the text 
	if (check_words(text_arr, sub_a, sub_b)) {
		printf("Match found!\n");
	}
	else {
		printf("There is no matched pattern!\n");
	}
	return 0;
}
