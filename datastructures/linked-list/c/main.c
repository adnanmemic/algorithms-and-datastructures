#include <stdio.h>
#include "linked-list.h"

int main(int argc, char *argv[]) {
	LinkedList list = createLinkedList();

	Node *n1 = newNode(20, NULL, NULL);
	Node *n2 = newNode(5, NULL, NULL);
	Node *n3 = newNode(6, NULL, NULL);

	prependLinkedList(&list, n1);
	prependLinkedList(&list, n2);
	prependLinkedList(&list, n3);

	Node *n4 = newNode(7, NULL, NULL);
	Node *n5 = newNode(2, NULL, NULL);
	Node *n6 = newNode(4, NULL, NULL);

	insertLinkedList(n4, n2);
	insertLinkedList(n5, n3);
	insertLinkedList(n6, n1);

	printLinkedList(list);

	deleteLinkedList(&list, n4);

	printLinkedList(list);

	return 0;
}
