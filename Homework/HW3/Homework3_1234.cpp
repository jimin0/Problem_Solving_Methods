/*
 days �Լ� ¥�� �װ� Ȱ�� ����
 recent()�Լ��� ¥��
	������ �� �ֱ����� ����ϴ��� ��ȯ return
 recent()�Լ� ����
    

	���� �־��൵ ��.
	recnet() �ݹ��� ������·�..

*/

#include<stdio.h>
struct Date {			// ����ü Date ����
	int month;
	int day;
	int year;
};

 int recent(Date day1, Date day2) {
	if (day1.year > day2.year) {			// ������
		return 1;						

	}
	else if (day1.year == day2.year) {
		if (day1.month > day2.month) {
			return 1;
		}
		else if (day1.month ==  day2.month) {		// �� ��
			if (day1.day > day2.day) {
				return 1;
			}
			else if (day1.day == day2.day)				// ��¥ ��
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
	struct Date day1 = { 10,9,2001 };		// ���Ҵ�
	struct Date day2 = { 11,3,2001 };		//���Ҵ�
	
	int d = recent(day1, day2);  //�Լ�ȣ��
	if(d == 1)			
		printf("%d/%d/%d", day1.month,day1.day,day1.year);
	else if(d==2)
		printf("%d/%d/%d", day2.month, day2.day, day2.year);

}