/*
	한개는 콜바이 밸류 형태
			return 형태
	다른 한개는 콜바이 레퍼런스형태로

	값이 나오는 건 똑같게

	days() : 2000년도 1월 1일부터 카운트해서
	시간 계산 얼만큼 흘러갔는지

	첫쨋날도 카운트

	한달은 무조건 : 30일로 일년 = 360일로

	데이터ㅜㄱ조는 month,day,year로 설정

*/
// Call by value
#include<stdio.h>
struct Date {			// 구조체 Date
	int month;
	int day;
	int year;
};
int Days(Date date) {		//Days 함수 : 값에 의한 호출(Call by value)
	return 30 * (date.month - 1) + (date.day - 1) + (date.year - 2000)*360;
}
void main() {
	struct Date date;			//구조체 date 변수 선언

	printf("Type date (Month, Day, Year) : ");
	scanf_s("%d %d %d", &date.month, &date.day, &date.year);		// 입력
	
	int days;
	days = Days(date);

	printf("Days : %d\n", days);		//출력

}