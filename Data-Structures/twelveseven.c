#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct naturalsNumbers {
	int n;
	struct naturalsNumbers *nextPtr;
};

typedef struct naturalsNumbers NaturalNums;
typedef NaturalNums *NaturalNumsPtr;

void insert_nodes(NaturalNumsPtr *head, int num);
void print_nodes(NaturalNums *head);
void delete_node(NaturalNums *head);
NaturalNumsPtr merge(NaturalNumsPtr list1, NaturalNumsPtr list2);


/**
 * main - (Concatenating Lists)
 *
 * Return: 0 if is success
 */
int main(void)
{;
	NaturalNums *list1 = NULL;
	NaturalNums *list2 = NULL;

	insert_nodes(&list1, 2);
	insert_nodes(&list1, 4);
	insert_nodes(&list1, 6);
	insert_nodes(&list1, 8);
	insert_nodes(&list1, 10);

	puts("List 1");
	print_nodes(list1);
	puts("-------------------------");

	insert_nodes(&list2, 1);
	insert_nodes(&list2, 3);
	insert_nodes(&list2, 5);
	insert_nodes(&list2, 7);
	insert_nodes(&list2, 9);

	puts("List 2");
	print_nodes(list1);
	puts("-------------------------");


	NaturalNumsPtr merge(NaturalNumsPtr list1, NaturalNumsPtr list2);

	delete_node(list1);
	delete_node(list2);

	list1 = NULL;
	list2 = NULL;

	return (0);
}

void clone(NaturalNumsPtr *dest, NaturalNumsPtr src)
{
	while (src) {
		*dest = (NaturalNumsPtr)malloc(sizeof(NaturalNums));
		if (!(*dest))
			exit(EXIT_FAILURE);

		*dest->n = src->n;
		src = src->nextPtr;
	}
}

NaturalNumsPtr merge(NaturalNumsPtr list1, NaturalNumsPtr list2)
{
	NaturalNumsPtr merge = NULL;
	NaturalNumsPtr list1Ptr = list1;
	NaturalNumsPtr previousPtr = NULL;
	NaturalNumsPtr currentPtr = NULL;
	int isChange = 0;

	clone(&merge, list1);
	currentPtr = merge;

	/* While None Will Be Null */
	while (list2) {
		while (list1Ptr) {
			if (list2->n >= currentPtr->n) {
				number = list2->n;
				previousPtr->nextPtr = currentPtr;
				isChange = 1;
			}
			currentPtr = currentPtr->nextPtr
			list1Ptr = list1Ptr->nextPtr;
		}

		if (change == 1) {
			previousPtr->nextPtr->n = number;
		} else if (change == 0) {
			
		}

		previousPtr = NULL;
		currentPtr = merge;
		list1Ptr = list1;
		isChange = 0;

		list2 = list2->nextPtr;
	}

}


/**
 * insert_nodes - Insert node in next position
 * @head: (NaturalNums) Head of the Pointer
 * @n: (int) Number of Integer
 *
 */
void insert_nodes(NaturalNumsPtr *head, int num)
{
	NaturalNumsPtr newPtr = (NaturalNumsPtr)malloc(sizeof(NaturalNums));
	NaturalNumsPtr currentPtr = *head;
	NaturalNumsPtr previousPtr = NULL;

	if (!newPtr)
		exit(EXIT_FAILURE);

	/* Copy info From Arguments */
	newPtr->n = num;
	newPtr->nextPtr = NULL;

	/* Traversing list Until NULL or Find Letter minour */
	while (currentPtr != NULL && num > currentPtr->n) {
		previousPtr = currentPtr;
		currentPtr = currentPtr->nextPtr;
	}

	/* In Case of be First Node */
	if (!previousPtr) {
		newPtr->nextPtr = *head;
		*head = newPtr;

	} else {
		previousPtr->nextPtr = newPtr;
		newPtr->nextPtr = currentPtr;
	}
}



/**
 * delete_node - Delete all nodes
 * @head: (NaturalNums) Head of the Pointer
 *
 */
void delete_node(NaturalNums *head)
{
	NaturalNumsPtr tmp = NULL;
	int i = 0;

	putchar(10);
	while (head) {
		tmp = head;
		head = head->nextPtr;
		printf("Eliminated item (%d): %d\n", i, tmp->n);
		free(tmp);
		++i;
	}
	tmp = NULL;
	puts("\nSuccessfull");
}


/**
 * print_nodes - Print the nodes
 * @head: (NaturalNums) Head of the Pointer
 *
 */
void print_nodes(NaturalNums *head)
{
	while (head != NULL) {
		printf("%2d\n", head->n);
		head = head->nextPtr;
	}
}


/**
 * insert_nodes - Insert node based in order alphabetic
 * @head: (NaturalNums) Head of the Pointer
 * @n: (int) Number of Integer
 *
 */
void insert_nodes(NaturalNumsPtr *head, int num)
{
	NaturalNumsPtr newPtr = (NaturalNumsPtr)malloc(sizeof(NaturalNums));
	NaturalNumsPtr currentPtr = *head;
	NaturalNumsPtr previousPtr = NULL;

	if (!newPtr)
		exit(EXIT_FAILURE);

	/* Copy info From Arguments */
	newPtr->n = num;
	newPtr->nextPtr = NULL;

	/* Traversing list Until NULL or Find Letter minour */
	while (currentPtr != NULL && num > currentPtr->n) {
		previousPtr = currentPtr;
		currentPtr = currentPtr->nextPtr;
	}

	/* In Case of be First Node */
	if (!previousPtr) {
		newPtr->nextPtr = *head;
		*head = newPtr;

	} else {
		previousPtr->nextPtr = newPtr;
		newPtr->nextPtr = currentPtr;
	}
}
