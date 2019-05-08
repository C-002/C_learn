#include<stdio.h>
#include<stdlib.h>
#include"node.h"

void linkedlistAdd(List* plist, int number);
void linkedlistPrint(List* plist);
Node* linkedlistCheck(List* plist);

int main(int argc, char *argv[])
{
	int number, label;
	List list;
	list.head = list.tail = NULL;
	
	do {
		scanf_s("%d", &number);
		if (number != -1) {
			// add to linked list
			linkedlistAdd(&list, number);
		}
	} while (number != -1);

	//print list
	linkedlistPrint(&list);
	
	do {
		char InputChar[2]; 
		printf("Do you want to check one element? (y/n): ");
		scanf_s("%1s", InputChar, 2);
		if (InputChar[0] == 'y' || InputChar[0] == 'Y') {
			linkedlistCheck(&list);
			label = 1;
		}
		else {
			label = 0;
		}

	} while (label);

	system("pause");
	return 0;
}

void linkedlistAdd(List* plist, int number)
{
	// add to linked list
	Node *p = (Node*)malloc(sizeof(Node));
	p->value = number;
	p->next  = NULL;
	if (plist->head) {
		plist->tail->next = p;	
	}
	else {
		plist->head = p;
	}
	plist->tail = p;
}

void linkedlistPrint(List* plist)
{
	Node *p;
	printf("\n");
	for (p = plist->head; p; p = p->next) {
		printf("%d\t", p->value);
	}
	printf("\n");
}

Node* linkedlistCheck(List* plist)
{
	Node* label = plist->tail->next;
	int inputNumber;	
	printf("Please input number:" );
	scanf_s("%d", &inputNumber);
	//printf("%d\n", inputNumber);
	Node* p = plist->head;
	do {
		if (p->value == inputNumber) {
			printf("Yes! It was found!\n");
			label = p;
			break;
		}
		p = p->next;
	} while (p);
	
	return label;
}