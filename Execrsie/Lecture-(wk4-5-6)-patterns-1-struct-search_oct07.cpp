/* Exhaustive search */
//#define _CRT_SECURE_NO_WARNINGS
//#define NUM 5
//#define KEY_MAX 10
//
//#include <stdio.h>
//#include <string.h>
//
//struct DATA {
//	int index;
//	char name[20];
//	int age;
//	char hobby[20];
//	int key;
//}d_array[NUM];
//
//
//void init(DATA* data, int size) {
//	for (int i = 0; i < size; i++) {
//		printf("Type %d-th info (index, name, age, hobby):",i);
//		scanf("%d %s %d %s", &data[i].index, &data[i].name, &data[i].age, &data[i].hobby);
//	}
//}
//
//DATA find(DATA* data, int size, char* name) {
//	for (int i = 0; i < size; i++) {
//		if (strcmp(data[i].name, name) == 0) // 0 means same to each other
//			return data[i];
//	}
//}
//
//int main() {
//	
//	// init
//	init(d_array, NUM);
//
//	// searching by NAME;
//	char name[20] = { 0 };
//	printf("\nType searching name:");
//	scanf("%s", name);
//	DATA result = find(d_array, NUM, name);
//
//	printf("Info searched result: name=%s index=%d age=%d hobby=%s\n", result.name, result.index, result.age, result.hobby);
//
//	return 0;
//}


/* Index search */
//#define _CRT_SECURE_NO_WARNINGS
//#define NUM 5
//#define KEY_MAX 52
//
//#include <stdio.h>
//#include <string.h>
//
//struct DATA {
//	int index;
//	char name[20];
//	int age;
//	char hobby[20];
//	int key;
//}d_array[NUM];
//
//
//DATA index_array[KEY_MAX * KEY_MAX * KEY_MAX];
//
//int key_gen(char *data) {
//	return (KEY_MAX * KEY_MAX * (data[0] - 'A') + KEY_MAX * (data[1] - 'A') + (data[2] - 'A'));
//}
//
//void init(DATA* data, int size) {
//	for (int i = 0; i < size; i++) {
//		printf("Type %d-th info (index, name, age, hobby):", i);
//		scanf("%d %s %d %s", &data[i].index, &data[i].name, &data[i].age, &data[i].hobby);
//		data[i].key = key_gen(data[i].name);
//		index_array[data[i].key] = data[i];
//	}
//}
//
////Exhaustive search
//int main() {
//
//	// init
//	init(d_array, NUM);
//
//	// searching by NAME;
//	char name[20] = { 0 };
//	printf("\nType searching name:");
//	scanf("%s", name);
//
//	// Generation of the key value of the searching name
//	int key = key_gen(name);
//	DATA result = index_array[key];
//
//	printf("Info searched result: name=%s index=%d age=%d hobby=%s\n", result.name, result.index, result.age, result.hobby);
//
//	return 0;
//}