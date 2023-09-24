#include<stdio.h>
// 16 = g
// 4 =q
// 2 = p
// 1 =c
void liquid(int*,int*,int*,int*);
void main()
{
	int cup;
	int gallon, quart,pint;
	printf("Enter the number of cups: ");
	scanf_s("%d", &cup);
	liquid(&cup, &gallon, &quart, &pint);

	printf("The number of gallons is %d\n", gallon);
	printf("The number of quarts is %d\n", quart);
	printf("The number of pints is %d\n", pint);
	printf("The number of cups is %d\n", cup);

}
void liquid(int *c, int *g, int *q, int *p) {
	*g = *c / 16;
	*c -= *g*16;

	*q = *c / 4;
	*c -= *q*4;

	*p = *c / 2;
	*c -= *p*2;
}