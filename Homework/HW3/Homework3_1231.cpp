/*
	�Ѱ��� �ݹ��� ��� ����
			return ����
	�ٸ� �Ѱ��� �ݹ��� ���۷������·�

	���� ������ �� �Ȱ���

	days() : 2000�⵵ 1�� 1�Ϻ��� ī��Ʈ�ؼ�
	�ð� ��� ��ŭ �귯������

	ù¶���� ī��Ʈ

	�Ѵ��� ������ : 30�Ϸ� �ϳ� = 360�Ϸ�

	�����̤ͤ����� month,day,year�� ����

*/
// Call by value
#include<stdio.h>
struct Date {			// ����ü Date
	int month;
	int day;
	int year;
};
int Days(Date date) {		//Days �Լ� : ���� ���� ȣ��(Call by value)
	return 30 * (date.month - 1) + (date.day - 1) + (date.year - 2000)*360;
}
void main() {
	struct Date date;			//����ü date ���� ����

	printf("Type date (Month, Day, Year) : ");
	scanf_s("%d %d %d", &date.month, &date.day, &date.year);		// �Է�
	
	int days;
	days = Days(date);

	printf("Days : %d\n", days);		//���

}