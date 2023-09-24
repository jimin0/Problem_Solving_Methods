// exact_match


/*
*  This is a program to count the matched words in the given text
*  Input: (1) Full text, (2) sub-string
*  Outout: the number of matched words in the text
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

/* A function to count the number of words in the given text
* Intput: (1) Full text, (2) sub-string
* return value: the number of matched words in the text
*/


int match_count(char* text, char* sub) {
	int i, j,index=0;
	int cnt = 0;

	for (i = index; i < strlen(text); i++) {
		if (text[i] == sub[0]) { // text[i]��° �ܾ�� sub�� ù��° ���ڰ� ������ ��
			index = i+1;			// ���������� i+1�� index�� ����
			for (j = 1; j < strlen(text); j++) {
				if (sub[j] == text[index]) {	// sub�� [1]index�� text[index] ��
					//printf("%d\n", index);	index ��ġ Ȯ�� �ڵ�
					index++;
				}
				else
					break;
			}
			if (j == strlen(sub))	// j�� ���� ã�� �ܾ� ���̿� ������ cnt ++;
				cnt++;		
		}
	}
	return cnt;
}

int main() {
	int mat_num;
	char text_arr[256], sub_arr[256];

	// Get text and sub-string
	puts("Text matching program\n");
	printf("Type text:");
	gets_s(text_arr);
	printf("Type sub-string for matching:");
	gets_s(sub_arr);

	// Call a function to check the number of matched words   == �Լ�ȣ��
	mat_num = match_count(text_arr, sub_arr);
	printf("Matched words: %d\n", mat_num);

	return 0;
}

