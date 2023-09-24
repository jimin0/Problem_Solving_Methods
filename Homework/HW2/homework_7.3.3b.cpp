#include<stdio.h>
void secs(int, int, int,int *);
void main() {
	int hours, min, sec;
	int total = 0;
	printf("Type hours, minutes, and seconds(e.g., 10 10 10): ");
	scanf_s("%d %d %d", &hours, &min, &sec);
	secs(hours, min, sec,&total);
	printf("Total seconds: %d", total);
}

void secs(int h, int m, int s, int *tol) {
	*tol  = h * 3600 + m * 60 + s;
}