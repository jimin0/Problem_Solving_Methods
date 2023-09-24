#include<stdio.h>
void show(float* );
void main()
{
	float rates[] = { 6.5,8.2,8.5,8.3,8.6,9.4,9.6,9.8,10.0 };

	show(rates);

}
void show(float *rat) {
	for (int i = 0; i <9; i++) {
		printf("%.1f ", *(rat+i));
	}
	printf("\n");
}
