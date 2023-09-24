/*
 days 함수 짜고 그걸 활용 가능
 recent()함수를 짜서
	언제가 더 최근인지 출력하는지 반환 return
 recent()함수 동작
    

	값을 넣어줘도 됨.
	recnet() 콜바이 밸류형태로..

*/

#include<stdio.h>
struct Date {			// 구조체 Date 선언
	int month;
	int day;
	int year;
};

 int recent(Date day1, Date day2) {
	if (day1.year > day2.year) {			// 연도비교
		return 1;						

	}
	else if (day1.year == day2.year) {
		if (day1.month > day2.month) {
			return 1;
		}
		else if (day1.month ==  day2.month) {		// 달 비교
			if (day1.day > day2.day) {
				return 1;
			}
			else if (day1.day == day2.day)				// 날짜 비교
				printf("SAME\n");
			else
				return 2;
		}
		else
			return 2;
	}
	else
		return 2;

}
void main() {
	struct Date day1 = { 10,9,2001 };		// 값할당
	struct Date day2 = { 11,3,2001 };		//값할당
	
	int d = recent(day1, day2);  //함수호출
	if(d == 1)			
		printf("%d/%d/%d", day1.month,day1.day,day1.year);
	else if(d==2)
		printf("%d/%d/%d", day2.month, day2.day, day2.year);

}