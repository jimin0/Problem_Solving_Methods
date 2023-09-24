#include<stdio.h>
int secs(int ,int ,int);
void main() {
	int hours, min, sec;
	int total = 0;
	printf("Type hours, minutes, and seconds(e.g., 10 10 10): ");
	scanf_s("%d %d %d", &hours, &min, &sec);
	total = secs(hours, min, sec);
	printf("Total seconds: %d", total);
}

int secs(int hours, int min, int sec) {
	return hours * 3600 + min * 60 + sec;
}