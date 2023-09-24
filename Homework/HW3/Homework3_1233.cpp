// call by reference

#include<stdio.h>
// 구조체 정의
struct Date {
	int month;
	int day;
	int year;
};

void Days(struct Date *date, int *day) {	//참조에 의한 호출 (call by reference)
	*day =  30 * (date->month - 1) + (date->day - 1) + (date->year - 2000) * 360;
	
}
void main() {
	struct Date date;			//구조체 date 변수 선언

	int day;

	printf("Type date (Month, Day, Year) : ");
	scanf_s("%d %d %d", &date.month, &date.day, &date.year);		// 입력

	Days(&date, &day);	// 주소전달,저장할변수주소도 함께

	printf("Days : %d", day);		//출력
}