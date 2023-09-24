#include<stdio.h>
#define NUM 10
void extend(double* price, double* quantity, double* amount) {
	for (int i = 0; i < 10; i++) {
		amount[i] = price[i] * quantity[i];
	}
}
int main() {
	double price[] = { 10.62, 14.89, 13.21, 16.55, 18.62, 9.47, 6.58, 18.32, 12.15, 3.98 };
	double quantity[] = { 4, 8.5, 6, 8.35, 9, 15.3, 3, 5.4, 2.9, 4.8 };
	double amount[NUM] = { 0.0 };

	extend(price, quantity, amount);

	for (int i = 0; i < 10; i++) {
		printf("%lf\n", amount[i]);
	}
	return 0;
}