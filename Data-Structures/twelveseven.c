#include <stdio.h>
#include <string.h>
#include <stdlib.h>



/**
 * struct naturalsNumbers - Single Linked List
 * @n: (int) Num to Store
 * @nextPtr: (struct naturalsNumbers *) points to the next node
 *
 * Description: Store the integers nodes
 *
 */
struct naturalsNumbers {
	int n;
	struct naturalsNumbers *nextPtr;
};

typedef struct naturalsNumbers NaturalNums;
typedef NaturalNums *NaturalNumsPtr;

void insert_nodes(NaturalNumsPtr *head, int num);
void make_list(NaturalNumsPtr *new, NaturalNumsPtr src);
void print_nodes(NaturalNums *head);
void delete_node(NaturalNums *head);
NaturalNumsPtr merge(NaturalNumsPtr list1, NaturalNumsPtr list2);


/**
 * main - (Concatenating Lists)
 *
 * Return: (int) 0 if is success
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

        NaturalNumsPtr list_merge = NULL;
	list_merge = merge(list1, list2);

        puts("New Merge");
	print_nodes(list_merge);
	puts("-------------------------");

	delete_node(list1);
	delete_node(list2);
        delete_node(list_merge);

	list1 = NULL;
	list2 = NULL;
        list_merge = NULL;

	return (0);
}


/**
 * make_list - Clone a list
 * @new: (NaturalNumsPtr *) New List
 * @src: (NaturalNumsPtr) Source
 *
 */
void make_list(NaturalNumsPtr *new, NaturalNumsPtr src)
{
	/* Traversing list Until NULL or Find Letter minour */
	while (src != NULL) {
	        insert_nodes(new, src->n);
                src = src->nextPtr;
        }
}


/**
 * merge - Merge a linked list with other
 * @list1: (NaturalNumsPtr) First
 * @list2: (NaturalNumsPtr) Second
 *
 * Return: (NaturalNumsPtr) Return the head node of the merge
 */
NaturalNumsPtr merge(NaturalNumsPtr list1, NaturalNumsPtr list2)
{
	NaturalNumsPtr merge = NULL;

        /* Make a New list */
        make_list(&merge, list1);

        /* Insert Nodes of the List2 in new list */
        while (list2) {
                insert_nodes(&merge, list2->n);
                list2 = list2->nextPtr;
        }

        return (merge);
}


/**
 * insert_nodes - Insert node in next position
 * @head: (NaturalNums) Head of the Pointer
 * @n: (int) Number of Integer
 *
 */
void insert_nodes(NaturalNumsPtr *head, int num)
{
	NaturalNumsPtr newPtr = malloc(sizeof(NaturalNums));
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
