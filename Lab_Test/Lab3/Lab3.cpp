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

void addNode(struct NODE* head, struct NODE* node) {
	struct NODE* cNode = head;
	struct NODE* pNode = NULL;
	while (cNode != NULL) {
		if (cNode->key > node->key)
			break;
		else {
			pNode = cNode;
			cNode = cNode->next;
		}
	}
	node->next = cNode;
	pNode->next = node;
}

void deleteNode(struct NODE* head, int key) {
	struct NODE* cNode = head;
	struct NODE* pNode = NULL;
	while (cNode != NULL) {
		if (cNode->key == key) break;
		else {
			pNode = cNode;
			cNode = cNode->next;
		}
	}
	pNode->next = cNode->next;
}

void displayList(struct NODE* head) {
	struct NODE* ptr = head;
	while (ptr != NULL) {
		printf("[%d] --> ", ptr->key);
		ptr = ptr->next;
	}
	printf("[NULL]\n");
}

void main() {
	int i = 0;
	struct NODE* head;
	struct NODE* tmp;

	// Initialize node
	head = createNewNode(0);
	for (i = 1; i < NUM; i++) {
		tmp = createNewNode(i * 10);
		addNode(head, tmp);
	}
	displayList(head);

	// Add node
	tmp = createNewNode(15);
	addNode(head, tmp);
	tmp = createNewNode(25);
	addNode(head, tmp);
	displayList(head);

	// delete node
	deleteNode(head, 30);
	deleteNode(head, 40);
	displayList(head);
}

