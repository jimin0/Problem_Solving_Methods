

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//#define NUM 3
//
//struct XYZ {
//	int width;
//	int height;
//	int depth;
//	int volume;
//};
//
//void init(struct XYZ *xyz) {
//	printf("Type info (width, height, depth):");
////	scanf("%d %d %d", &((*xyz).width), &((*xyz).height), &((*xyz).depth));
////	(*xyz).volume = (*xyz).width * (*xyz).height * (*xyz).depth;
//	scanf("%d %d %d", &xyz->width, &xyz->height, &xyz->depth);
//	xyz->volume = xyz->width * xyz->height * xyz->depth;
//}
//
////void print(struct XYZ xyz) {
////	printf("\nPrinting the result\n");
////	printf("width=%d height=%d depth=%d volume=%d\n", xyz.width, xyz.height, xyz.depth, xyz.volume);
////}
//
//void print(struct XYZ *xyz) {
//	printf("\nPrinting the result\n");
//	printf("width=%d height=%d depth=%d volume=%d\n", xyz->width, xyz->height, xyz->depth, xyz->volume);
//}
//
//int main() {
//	struct XYZ a, b;
//	init(&a);
//	init(&b);
////	print(a);
////	print(b);
//	print(&a);
//	print(&b);
//}


//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//#define NUM 3
//
//struct XYZ {
//	int width;
//	int height;
//	int depth;
//	int volume;
//};
//
//void init(struct XYZ *xyz) {
//	for (int i = 0; i < NUM; i++) {
//		printf("Type %d-th info (width, height, depth):", i);
//		scanf("%d %d %d", &xyz[i].width, &xyz[i].height, &xyz[i].depth);
//		xyz[i].volume = xyz[i].width * xyz[i].height * xyz[i].depth;
//	}
//}
//
//void print(struct XYZ *xyz) {
//	printf("\nPrinting the result\n");
//	for (int i = 0; i < NUM; i++) {
//		printf("width=%d height=%d depth=%d volume=%d\n", xyz[i].width, xyz[i].height, xyz[i].depth, xyz[i].volume);
//	}
//}
//
//int main() {
//	struct XYZ xyz[NUM];
//	init(xyz);
//	print(xyz);
//}


//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//#define NUM 3
//
//struct XYZ {
//	int width;
//	int height;
//	int depth;
//	int volume;
//};
//
//void init(struct XYZ* xyz) {
//	for (int i = 0; i < NUM; i++) {
//		printf("Type %d-th info (width, height, depth):", i);
//		scanf("%d %d %d", &xyz[i].width, &xyz[i].height, &xyz[i].depth);
//		xyz[i].volume = xyz[i].width * xyz[i].height * xyz[i].depth;
//	}
//}
//
//// swaping code here
//void swap(struct XYZ* a, struct XYZ* b) {
//	struct XYZ tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//void print(struct XYZ* xyz) {
//	printf("\nPrinting the result\n");
//	for (int i = 0; i < NUM; i++) {
//		printf("width=%d height=%d depth=%d volume=%d\n", xyz[i].width, xyz[i].height, xyz[i].depth, xyz[i].volume);
//	}
//}
//
//int main() {
//	struct XYZ xyz[NUM];
//	init(xyz);
//	swap(&xyz[0], &xyz[1]);
//	print(xyz);
//}



//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//#define NUM 3
//
//struct XYZ {
//	int width;
//	int height;
//	int depth;
//	int volume;
//};
//
//void init(struct XYZ* xyz) {
//	for (int i = 0; i < NUM; i++) {
//		printf("Type %d-th info (width, height, depth):", i);
//		scanf("%d %d %d", &xyz[i].width, &xyz[i].height, &xyz[i].depth);
//		xyz[i].volume = xyz[i].width * xyz[i].height * xyz[i].depth;
//	}
//}
//
//void swap(struct XYZ* a, struct XYZ* b) {
//	struct XYZ tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//void sort_by_height(struct XYZ* a, int n) {
//	int i, j;
//	for (i = 0; i < n - 1; i++) {
//		for (j = n - 1; j > i; j--) {
//			if (a[j - 1].height > a[j].height)
//				swap(&a[j - 1], &a[j]);
//		}
//	}
//}
//
//void print(struct XYZ* xyz) {
//	printf("\nPrinting the result\n");
//	for (int i = 0; i < NUM; i++) {
//		printf("width=%d height=%d depth=%d volume=%d\n", xyz[i].width, xyz[i].height, xyz[i].depth, xyz[i].volume);
//	}
//}
//
//int main() {
//	struct XYZ xyz[NUM];
//	init(xyz);
//	sort_by_height(xyz, NUM);
//	print(xyz);
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//#define NUM 3
//
//struct XYZ {
//	int width;
//	int height;
//	int depth;
//	int volume;
//};
//
//void init(struct XYZ* xyz) {
//	for (int i = 0; i < NUM; i++) {
//		printf("Type %d-th info (width, height, depth):", i);
//		scanf("%d %d %d", &xyz[i].width, &xyz[i].height, &xyz[i].depth);
//		xyz[i].volume = xyz[i].width * xyz[i].height * xyz[i].depth;
//	}
//}
//
//void swap(struct XYZ* a, struct XYZ* b) {
//	struct XYZ tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//void sort_by_height(struct XYZ* a, int n) {
//	int i, j;
//	
//	for (i = 0; i < n - 1; i++) {
//		for (j = n - 1; j > i; j--) {
//			if (a[j - 1].height > a[j].height)
//				swap(&a[j - 1], &a[j]);
//		}
//	}
//}
//void sort_by_width(struct XYZ* a, int n) {
//	int i, j;
//
//	for (i = 0; i < n - 1; i++) {
//		for (j = n - 1; j > i; j--) {
//			if (a[j - 1].width > a[j].width)
//				swap(&a[j - 1], &a[j]);
//		}
//	}
//}
//void sort_by_depth(struct XYZ* a, int n) {
//	int i, j;
//
//	for (i = 0; i < n - 1; i++) {
//		for (j = n - 1; j > i; j--) {
//			if (a[j - 1].depth > a[j].depth)
//				swap(&a[j - 1], &a[j]);
//		}
//	}
//}
//void sort_by_volume(struct XYZ* a, int n) {
//	int i, j;
//
//	for (i = 0; i < n - 1; i++) {
//		for (j = n - 1; j > i; j--) {
//			if (a[j - 1].volume > a[j].volume)
//				swap(&a[j - 1], &a[j]);
//		}
//	}
//}
//
//void print(struct XYZ* xyz) {
//	printf("\nPrinting the result\n");
//	for (int i = 0; i < NUM; i++) {
//		printf("width=%d height=%d depth=%d volume=%d\n", xyz[i].width, xyz[i].height, xyz[i].depth, xyz[i].volume);
//	}
//}
//
//int main() {
//	struct XYZ xyz[NUM];
//	init(xyz);
//	print(xyz);
//	sort_by_height(xyz, NUM); // height
//	print(xyz);
//	sort_by_width(xyz, NUM); //width
//	print(xyz);
//	sort_by_depth(xyz, NUM); // depth
//	print(xyz);
//	sort_by_volume(xyz, NUM); // volume
//	print(xyz);
//}

//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//#define NUM 3
//
//struct XYZ {
//	int width;
//	int height;
//	int depth;
//	int volume;
//};
//
//void init(struct XYZ* xyz) {
//	for (int i = 0; i < NUM; i++) {
//		printf("Type %d-th info (width, height, depth):", i);
//		scanf("%d %d %d", &xyz[i].width, &xyz[i].height, &xyz[i].depth);
//		xyz[i].volume = xyz[i].width * xyz[i].height * xyz[i].depth;
//	}
//}
//
//void swap(struct XYZ* a, struct XYZ* b) {
//	struct XYZ tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//void sort_by_mode(struct XYZ* a, int n, int mode) {
//	int i, j;
//	for (i = 0; i < n - 1; i++) {
//		for (j = n - 1; j > i; j--) {
//			if (mode == 1) {
//				if (a[j - 1].height > a[j].height)
//					swap(&a[j - 1], &a[j]);
//			}
//			else if (mode == 2) {
//				if (a[j - 1].width > a[j].width)
//					swap(&a[j - 1], &a[j]);
//			}
//			else if (mode == 3) {
//				if (a[j - 1].depth > a[j].depth)
//					swap(&a[j - 1], &a[j]);
//			}
//			else if (mode == 4) {
//				if (a[j - 1].volume > a[j].volume)
//					swap(&a[j - 1], &a[j]);
//			}
//		}
//	}
//}
//
//void print(struct XYZ* xyz) {
//	printf("\nPrinting the result\n");
//	for (int i = 0; i < NUM; i++) {
//		printf("width=%d height=%d depth=%d volume=%d\n", xyz[i].width, xyz[i].height, xyz[i].depth, xyz[i].volume);
//	}
//}
//
//int main() {
//	struct XYZ xyz[NUM];
//	init(xyz);
//	sort_by_mode(xyz, NUM, 1); // height
//	print(xyz);
//	sort_by_mode(xyz, NUM, 2); // width
//	print(xyz);
//	sort_by_mode(xyz, NUM, 3); // depth
//	print(xyz);
//	sort_by_mode(xyz, NUM, 4); // volume
//	print(xyz);
//}