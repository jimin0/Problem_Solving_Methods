//partial_match

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
	int i=0;
	int index=0;

	for (i = 0; i < strlen(input); i++) {
		if (input[i] == '*') {
			index = i;
			break;
		}
	}
	if (i == strlen(input))			// 별이 아예 없을때 
		index = 257;

	if (index == 257) {
		p1[0] = NULL;
		p2[0] = NULL;
	}
	else {			// 별이 존재할때
		for (i = 0; i < index; i++) {
			p1[i] = input[i];											// * 전에 문자들 p1에 저장하기
		}
		p1[index] = NULL;												// 쓰레기값 안나오기위해
		// printf("%s\n", p1);											// p1 확인 
		int j = 0;
		for (i = index + 1; i < strlen(input); i++) {
			p2[j] = input[i];
			j++;
		}
		p2[j] = NULL; 
		// printf("%s\n", p2);		// p2 확인
	}
									
}

/*
* A function to count the number of words in the given text
* Intput: (1) Full text, (2) First sub-string, (3) Second sub-string
* return value: "0" there is no matched word partially, "1" there is matched word partially
*/

//// 1면 있다 0이면 없다.
int check_words(char* text, char* sub_a, char* sub_b) {
	int i,j,index,cnt = 0;
	if (sub_a[0] == NULL || sub_b[0] == NULL)		// * 앞이나 뒤가 NULL 이거나 별이 존재하지 않을때
		return 0;			// no matching
	for (i = 0; i < strlen(text); i++) {		
		if (cnt == 0) {										// sub_a부터 확인하기
			if (text[i] == sub_a[0]) {
					index = i+1;							// 다음 글자를 비교하기 위해서 i+1 값 저장   
					for (j = 1; j < strlen(sub_a); j++) {
						if (text[index] != sub_a[j]) {
							break;
						}
						index++;
					}
					if (j == strlen(sub_a))
						cnt++;
					i = index;					// i값 반환
			}
		}
		else if (cnt == 1) {				// sub_2 확인하기
			if (text[i] == sub_b[0]) {
				index = i + 1;
				for (j = 1; j < strlen(sub_b); j++) {
					if (text[index] != sub_b[j]) {
						return 0;
					}
					index++;
				}
				if (j == strlen(sub_b))
					return 1;
			}
		}
		
	}
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
