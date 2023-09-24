//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int factorial(int n) {
//	if (n == 0) return 1;
//	else return (n * factorial(n - 1));
//}
//
//void main() {
//	int num = 0;
//	printf("Type a number for factorial:");
//	scanf("%d", &num);
//	printf("%d! = %d\n", num, factorial(num));
//}



//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int fib(int n) {
//	if (n < 0) return -1;
//	if (n < 2) return n;
//	return (fib(n - 1) + fib(n - 2));
//}
//
//void main() {
//	int num = 0;
//	printf("Type a number for fib:");
//	scanf("%d", &num);
//	printf("Fib(%d) = %d\n", num, fib(num));
//}


//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void wrt_backward() {
//	int c;
//	if ((c = getchar()) != '\n')
//		wrt_backward();
//	putchar(c);
//}
//
//void main() {
//	printf("Type a line:");
//	wrt_backward();
//	printf("\n");
//}

//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int factorial(int n) {
//	if (n == 0) return 1;
//	else return (n * factorial(n - 1));
//}
//
//void main() {
//	int num = 0;
//	printf("Type a number for factorial:");
//	scanf("%d", &num);
//	printf("%d! = %d\n", num, factorial(num));
//}



//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int iter_factorial(int n) {
//	int result = 1;
//	int k;
//	for (k = 1; k <= n; k++) {
//		result = result * k;
//	}
//	return result;
//}
//
//void main() {
//	int num = 0;
//	printf("Type a number for factorial:");
//	scanf("%d", &num);
//	printf("%d! = %d\n", num, iter_factorial(num));
//}


//
//#define _CRT_SECURE_NO_WARNINGS
//#define MAX 10
//#include <stdio.h>
//#include <stdlib.h>
//
//int sum_of(int a[], int n) {
//	if (n < 1 || n > MAX) {
//		printf("array boundary error");
//		exit(1);
//	}
//	else
//		if (n == 1)
//			return a[0];
//		else
//			return (a[n - 1] + sum_of(a, n - 1));
//}
//
//void main() {
//	int num = 4;
//	int arr[MAX] = { 20, 30, 10, 50, 15, 45, 80, 25 };
//	printf("Result: sum = %d\n", sum_of(arr, num));
//}
