#include <stdio.h>
#include <stdlib.h>
#include "linked-list.h"

LinkedList createLinkedList() {
	return (LinkedList){NULL};
}

void printLinkedList(LinkedList list) {
	Node *x = list.head;
	printf("\nhead\n");
	while (x != NULL) {
		printf("|\n%d\n", x->key);
		x = x->next;
	}
	printf("\n");
}

Node *newNode(int key, Node *next, Node *prev) {
	Node *x = malloc(sizeof(Node));
	if (x == NULL) {
		fprintf(stderr, "Error: Could not allocate new node!");
		exit(1);
	}
	*x = (Node){
		.key = key,
		.next = next,
		.prev = prev
	};
	return x;
}

Node *searchLinkedList(LinkedList list, int key) {
	Node *x = list.head;
	while (x != NULL && x->key != key) {
		x = x->next;
	}
	return x;
}

void prependLinkedList(LinkedList *list, Node *x) {
	x->next = list->head;
	x->prev = NULL;

	if (list->head != NULL)
		list->head->prev = x;
	list->head = x;
}

void insertLinkedList(Node *x, Node *y) {
	x->next = y->next;
	x->prev = y;

	if (y->next != NULL)
		y->next->prev = x;
	y->next = x;
}

void deleteLinkedList(LinkedList *list, Node *x) {
	if (x->prev != NULL) 
		x->prev->next = x->next;
	else 
		list->head = x->next;

	if (x->next != NULL)
		x->next->prev = x->prev;
	free(x);
}
