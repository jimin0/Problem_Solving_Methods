//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//struct NODE {
//	int key;
//	struct NODE *next;
//};
//
//void main(){
//	struct NODE* node = (struct NODE*)malloc(sizeof(struct NODE));
//	if (node != NULL) {
//		node->key = 100;
//		node->next = NULL;
//		free(node);
//	}
//}


//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//struct NODE {
//	int key;
//	struct NODE* next;
//};
//
//struct NODE* createNewNode(int key){
//	struct NODE* newNode = (struct NODE*)malloc(sizeof(struct NODE));
//	newNode->key = key;
//	newNode->next = NULL;
//	return newNode;
//}
//
//void main(){
//	struct NODE* node0 = NULL;
//	struct NODE* node1 = NULL;
//	struct NODE* node2 = NULL;
//
//	node0 = createNewNode(100);
//	node1 = createNewNode(200);
//	node2 = createNewNode(467);
//
//	// linking
//	node0->next = node1;
//	node1->next = node2;
//
//	printf("%d\n", node0->key);
//	printf("%d %d\n", node1->key, node0->next->key);
//	printf("%d %d %d\n", node2->key, node1->next->key, node0->next->next->key);
//
//	free(node0);
//	free(node1);
//	free(node2);
//}


//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//struct NODE {
//	int key;
//	struct NODE* next;
//};
//
//struct NODE* createNewNode(int key) {
//	struct NODE* newNode = (struct NODE*)malloc(sizeof(struct NODE));
//	newNode->key = key;
//	newNode->next = NULL;
//	return newNode;
//}
//
//void main() {
//	struct NODE* node0, * node1, * node2;
//	struct NODE* head = NULL;
//
//	// initialization
//	//node0 = (struct NODE*)malloc(sizeof(struct NODE));
//	//node0->key = 100;
//	//node1 = (struct NODE*)malloc(sizeof(struct NODE));
//	//node1->key = 250;
//	//node2 = (struct NODE*)malloc(sizeof(struct NODE));
//	//node2->key = 467;
//	//node0->next = node1->next = node2->next = NULL;
//
//	node0 = createNewNode(100);
//	node1 = createNewNode(250);
//	node2 = createNewNode(467);
//
//	// Liking nodes
//	head = node0;
//	node0->next = node1;
//	node1->next = node2;
//
//	// Test linking nodes
//	printf("node0: %d\n", node0->key);
//	printf("node1: %d %d\n", node1->key, node0->next->key);
//	printf("node2: %d %d %d\n", node2->key, node1->next->key, node0->next->next->key);
//
//	// release
//	free(node0);
//	free(node1);
//	free(node2);
//}


//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//struct NODE {
//	int key;
//	struct NODE* next;
//};
//
//struct NODE* buildOneTwoThree(){
//	struct NODE* first = NULL;
//	struct NODE* second = NULL;
//	struct NODE* third = NULL;
//	first = (struct NODE*) malloc(sizeof(struct NODE));// allocate 3 nodes in the heap memory
//	second = (struct NODE*) malloc(sizeof(struct NODE));
//	third = (struct NODE*)malloc(sizeof(struct NODE));
//	first->key = 1;		// setup first node
//	first->next = second;	// note: pointer assignment rule
//	second->key = 2;		// setup second node
//	second->next = third;
//	third->key = 3;		// setup third link
//	third->next = NULL;
//	// At this point, the linked list referenced by "first"
//	return first;
//}
//
//int Length(struct NODE* head){
//	struct NODE* ptr = head;
//	int count = 0;
//	while (ptr != NULL) {
//		count++;
//		ptr = ptr->next;
//	}
//	return count;
//}
//
//void lengthTest(){
//	struct NODE* myList = buildOneTwoThree();
//	int len = Length(myList); // results in len == 3
//	printf("length of the list = %d\n", len);
//}
//
//void main(){
//	lengthTest(); // our next exercise
//}


//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//struct NODE {
//	int key;
//	struct NODE* next;
//};
//
//struct NODE* buildOneTwoThree() {
//	struct NODE* first = NULL;
//	struct NODE* second = NULL;
//	struct NODE* third = NULL;
//	first = (struct NODE*)malloc(sizeof(struct NODE));// allocate 3 nodes in the heap memory
//	second = (struct NODE*)malloc(sizeof(struct NODE));
//	third = (struct NODE*)malloc(sizeof(struct NODE));
//	first->key = 1;		// setup first node
//	first->next = second;	// note: pointer assignment rule
//	second->key = 2;		// setup second node
//	second->next = third;
//	third->key = 3;		// setup third link
//	third->next = NULL;
//	// At this point, the linked list referenced by "first"
//	return first;
//}
//
//int Length(struct NODE* head) {
//	struct NODE* ptr = head;
//	int count = 0;
//	while (ptr != NULL) {
//		count++;
//		ptr = ptr->next;
//	}
//	return count;
//}
//
//void displayList(struct NODE* head){
//	struct NODE* ptr = head;
//	while (ptr != NULL) {
//		printf("[%d] --> ", ptr->key);
//		ptr = ptr->next;
//	}
//	printf("[NULL]\n");
//}
//
//void lengthTest() {
//	struct NODE* myList = buildOneTwoThree();
//	int len = Length(myList); // results in len == 3
//	printf("length of the list = %d\n", len);
//	displayList(myList);
//}
//
//void main() {
//	lengthTest(); // our next exercise
//}

//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//struct NODE {
//	int key;
//	struct NODE* next;
//};
//
//struct NODE* buildOneTwoThree() {
//	struct NODE* first = NULL;
//	struct NODE* second = NULL;
//	struct NODE* third = NULL;
//	first = (struct NODE*)malloc(sizeof(struct NODE));// allocate 3 nodes in the heap memory
//	second = (struct NODE*)malloc(sizeof(struct NODE));
//	third = (struct NODE*)malloc(sizeof(struct NODE));
//	first->key = 100;		// setup first node
//	first->next = second;	// note: pointer assignment rule
//	second->key = 250;		// setup second node
//	second->next = third;
//	third->key = 467;		// setup third link
//	third->next = NULL;
//	return first;
//}
//
//int searchKey(struct NODE* head, int srchkey){
//	struct NODE* ptr = head;
//	while (ptr != NULL) {
//		if (ptr->key == srchkey) return 1;
//		ptr = ptr->next;
//	}
//	return 0;
//}
//
//void searchTest(){
//	struct NODE* myList = buildOneTwoThree();
//	int found = searchKey(myList, 250);
//	if (found)
//		printf("search key found\n");
//	else
//		printf("search key not found");
//}
//
//void main() {
//	searchTest();
//}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define NUM 5

struct NODE {
	int key;
	struct NODE* next;
};

struct NODE* createNewNode(int key) {
	struct NODE* newNode = (struct NODE*)malloc(sizeof(struct NODE));
	newNode->key = key;
	newNode->next = NULL;
	return newNode;
}

int searchKey(struct NODE* head, int srchkey) {
	struct NODE* pNode = head;
	while (pNode != NULL) {
		if (pNode->key == srchkey)
			return 1;
		pNode = pNode->next;
	}
	return 0;
}

void searchTest(struct NODE* head, int key) {
	int found = searchKey(head, key);
	if (found)
		printf("search key(%d) found\n\n", key);
	else
		printf("search key(%d) not found\n\n", key);
}

void addNode(struct NODE* head, struct NODE* node) {
	struct NODE* cNode = head;
	struct NODE* pNode = NULL;
	while (cNode != NULL) {
		if (cNode->key > node->key) break;
		pNode = cNode;
		cNode = cNode->next;
	}
	node->next = cNode;
	pNode->next = node;
}

void deleteNode(struct NODE* head, int key) {
	struct NODE* cNode = head;
	struct NODE* pNode = NULL;
	while (cNode != NULL) {
		if (cNode->key == key) break;
		pNode = cNode;
		cNode = cNode->next;
	}
	pNode->next = cNode->next;
}

void displayList(struct NODE* head) {
	struct NODE* ptr = head;
	while (ptr != NULL) {
		printf("[%d] --> ", ptr->key);
		ptr = ptr->next;
	}
	printf("[NULL]\n\n");
}

void main() {
	int i = 0;
	struct NODE* head;
	struct NODE* tmp;

	// Initialize node
	head = createNewNode(0);
	for (i = 1; i < NUM; i++) {
		tmp = createNewNode(i);
		addNode(head, tmp);
	}
	displayList(head);

	//// Add node
	tmp = createNewNode(50);
	addNode(head, tmp);
	tmp = createNewNode(30);
	addNode(head, tmp);
	displayList(head);

	//// Search node
	searchTest(head, 5);
	searchTest(head, 4);
	searchTest(head, 30);

	//// delete node
	deleteNode(head, 3);
	deleteNode(head, 30);
	displayList(head);

	//// Add node
	tmp = createNewNode(7);
	addNode(head, tmp);
	displayList(head);
}

