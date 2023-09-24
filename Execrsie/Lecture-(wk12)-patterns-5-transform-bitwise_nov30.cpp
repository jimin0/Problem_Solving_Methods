//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void main() {
//	int num = 5326;
//	printf("%d\n", num);
//	printf("%o\n", num);
//	printf("%x\n", num);
//	printf("\n");
//
//	num = 0463;
//	printf("%d\n", num);
//	printf("%o\n", num);
//	printf("%x\n", num);
//	printf("\n");
//
//	num = 0x3FC;
//	printf("%d\n", num);
//	printf("%o\n", num);
//	printf("%x\n", num);
//	printf("\n");
//}


//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void convert2v1(int num) {
//	int value = num;
//	while (value != 0) {
//		printf("%d", value & 1);
//		value = (value >> 1);
//	}
//	printf("\n");
//}
//
//void convert2v2(int num) {
//	int value = num;
//	int arr[100];
//	int count = 0;
//	while (value != 0) {
//		arr[count] = (value & 1);
//		value = (value >> 1);
//		count++;
//	}
//	for (int i = count - 1; i >= 0; i--) {
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//
//void main() {
//	convert2v1(10);
//	convert2v2(10);
//}

//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void convert2v2(int num) {
//	int value = num;
//	int arr[100];
//	int count = 0;
//	while (value != 0) {
//		arr[count] = (value & 1);
//		value = (value >> 1);
//		count++;
//	}
//	for (int i = count - 1; i >= 0; i--) {
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//
//void main() {
//	int a = 10;
//	int b = 15;
//
//	convert2v2(a);
//	convert2v2(b);
//
//	printf("a & b = %d\n", (a & b));
//	convert2v2((a & b));
//	printf("a | b = %d\n", (a | b));
//	convert2v2((a | b));
//	printf("a ^ b = %d\n", (a ^ b));
//	convert2v2((a ^ b));
//}

