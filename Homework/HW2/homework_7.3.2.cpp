// 10,8 달러를 q,d,n,p로만들기

//q : 0.25 dollar
//d : 0.1 
//n: 0.05
//p : 0.01
#include<stdio.h>
float change(float ,int);
void main() {
	float money;
	int q, d, n, p,step=1;

	printf("TOTAL VALUE ENTERED: ");
	scanf_s("%f", &money);

	q = change(money,step);
	money = money - (q * 0.25);
	step++;

	d = change(money,step);
	money = money - (d * 0.1);
	step++;

	n = change(money,step);
	money = money - (n * 0.05) + 0.005;
	step++;

	p = change(money,step);
	money = money - (p * 0.01);

	printf("%5d quarters\n%5d dimes\n%5d nickes\n%5d pennis",q,d,n,p);


}

float change(float money, int step)
{
	if (step == 1) {
		if (money >= 0.25) {
			return money / 0.25;
		}
		else
			return 0;
	}
	else if (step == 2) {
		if (money >= 0.1) {
			return money / 0.1;
		}
		else
			return 0;
	}
	else if (step == 3) {
		if (money >= 0.05) {
			return money / 0.05;
		}
		else
			return 0;
	}
	else if (step == 4) {
		if (money >= 0.01) {
			return money / 0.01;
		}
		else
			return 0;
	}
}
