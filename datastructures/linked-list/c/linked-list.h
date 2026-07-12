#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct Node {
	int key;
	struct Node *next; // need struct otherwise Node is undefined
	struct Node *prev;
} Node;

typedef struct LinkedList {
	Node *head;
} LinkedList;

LinkedList createLinkedList();
Node *newNode(int key, Node *next, Node *prev);
void printLinkedList(LinkedList list);

Node *searchLinkedList(LinkedList list, int key);
void prependLinkedList(LinkedList *list, Node *x);
void insertLinkedList(Node *x, Node *y);
void deleteLinkedList(LinkedList *list, Node *x);

#endif
