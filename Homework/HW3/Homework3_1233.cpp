// call by reference

#include<stdio.h>
// ����ü ����
struct Date {
	int month;
	int day;
	int year;
};

void Days(struct Date *date, int *day) {	//������ ���� ȣ�� (call by reference)
	*day =  30 * (date->month - 1) + (date->day - 1) + (date->year - 2000) * 360;
	
}
void main() {
	struct Date date;			//����ü date ���� ����

	int day;

	printf("Type date (Month, Day, Year) : ");
	scanf_s("%d %d %d", &date.month, &date.day, &date.year);		// �Է�

	Days(&date, &day);	// �ּ�����,�����Һ����ּҵ� �Բ�

	printf("Days : %d", day);		//���
}