
// homework3_1224
/*
	����ü �Ѱ� ����� : �������
	int ���̵�
	int mile
	int gallon  (���ᰡ �� �Ǵ���)

	������ �Է¹ް� �� �Է¿� ���ؼ� port
	�� ��ȣ + �Ÿ� +����� ���� + ����(���� / ����)

	5���� ��տ��� ���
	*/
#include<stdio.h>

struct Car {			// ����ü Car
	int id;
	int mile;
	int gallon;
};
void main() {

	struct Car car[5];			// car �迭 ����
	float total_m=0,total_g=0, avg;
	// �Է� 
	for (int i = 0; i < 5; i++) {
		printf("Type the %d-th Car information (ID, Miles, Gallons): ",i);
		scanf_s("%d %d %d", &car[i].id, &car[i].mile, &car[i].gallon);	
	}

	// ���
	for (int i = 0; i < 5; i++) {
		printf("Type the %d-th Car information (ID, Miles, Gallons): ", i);
		avg = (float)car[i].mile / (float)car[i].gallon;		// ���� ���ϱ�
		total_m += car[i].mile;					// mile�� ���ձ��ϱ�
		total_g += car[i].gallon;				// gallon�� ���ձ��ϱ�
		printf("ID = %d Miles = %d Gallons=%d Ave.Miles=%.2f(miles/gal)\n", car[i].id,car[i].mile,car[i].gallon,avg);

	}
	printf("The average of miles per gallons for all the cars: %.2f\n", total_m/total_g);		// ������ ��� ���

}