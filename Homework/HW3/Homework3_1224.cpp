
// homework3_1224
/*
	구조체 한개 만들기 : 차량기록
	int 아이디
	int mile
	int gallon  (연료가 얼마 되는지)

	정보를 입력받고 그 입력에 대해서 port
	차 번호 + 거리 +사용한 연료 + 연비(갤런 / 마일)

	5개의 평균연비 출력
	*/
#include<stdio.h>

struct Car {			// 구조체 Car
	int id;
	int mile;
	int gallon;
};
void main() {

	struct Car car[5];			// car 배열 선언
	float total_m=0,total_g=0, avg;
	// 입력 
	for (int i = 0; i < 5; i++) {
		printf("Type the %d-th Car information (ID, Miles, Gallons): ",i);
		scanf_s("%d %d %d", &car[i].id, &car[i].mile, &car[i].gallon);	
	}

	// 출력
	for (int i = 0; i < 5; i++) {
		printf("Type the %d-th Car information (ID, Miles, Gallons): ", i);
		avg = (float)car[i].mile / (float)car[i].gallon;		// 연비 구하기
		total_m += car[i].mile;					// mile의 총합구하기
		total_g += car[i].gallon;				// gallon의 총합구하기
		printf("ID = %d Miles = %d Gallons=%d Ave.Miles=%.2f(miles/gal)\n", car[i].id,car[i].mile,car[i].gallon,avg);

	}
	printf("The average of miles per gallons for all the cars: %.2f\n", total_m/total_g);		// 연비의 평균 출력

}