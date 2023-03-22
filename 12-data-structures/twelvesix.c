#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 20


struct gradeNode {
	char lastName[20];
	double grade;
	struct gradeNode *nextPtr;
};

typedef struct gradeNode GradeNode;
typedef GradeNode *GradeNodePtr;

void insert_nodes(GradeNodePtr *initial, char lastName[SIZE], double grade);
void print_nodes(GradeNode *initial);
void delete_node(GradeNode *initial);
void concatenate(GradeNodePtr *li1, GradeNodePtr *li2);


/**
 * main - (Concatenating Lists)
 *
 * Return: 0 if is success
 */
int main(void)
{
	GradeNodePtr list1 = NULL;
	GradeNodePtr list2 = NULL;

	/* First List */
	insert_nodes(&list1, "Adams", 85.0);
	insert_nodes(&list1, "Pritchard", 66.5);
	insert_nodes(&list1, "Thompson", 73.5);

	puts("List 1");
	print_nodes(list1);
	puts("---------------------");

	insert_nodes(&list2, "Snatiago", 60.0);
	insert_nodes(&list2, "Diego", 70.5);
	insert_nodes(&list2, "Andrea", 99.5);

	puts("List2");
	print_nodes(list2);
	puts("---------------------");

	concatenate(&list1, &list2);

	puts("Concatenate");
	print_nodes(list1);
	puts("---------------------");

	delete_node(list1);

	list1 = NULL;
	list2 = NULL;

	return (0);
}


/**
 * concatenate - Both lists
 * @l1: (GradeNodePtr *) First list
 * @l1: (GradeNodePtr *) Second list
 *
 */
void concatenate(GradeNodePtr *li1, GradeNodePtr *li2)
{
	GradeNodePtr findNull = *li1;

	while (findNull && findNull->nextPtr) {
		findNull = findNull->nextPtr;
	}

	findNull->nextPtr = *li2;
}


/**
 * delete_node - Delete all nodes
 * initial: (GradeNode) Head of the list
 *
 */
void delete_node(GradeNode *initial)
{
	GradeNodePtr tmp = NULL;
	int i = 0;

	putchar(10);
	while (initial) {
		tmp = initial;
		initial = initial->nextPtr;
		free(tmp);
		printf("Eliminated item: %d\n", i);
		++i;
	}
	puts("\nSuccessfull");
}

/**
 * print_nodes - Print the nodes
 * @initial: (GradeNode) Head of the Pointer
 *
 */
void print_nodes(GradeNode *initial)
{
	while (initial != NULL) {
		printf("%10s\t%3.2lf\n", initial->lastName, initial->grade);
		initial = initial->nextPtr;
	}
}


/**
 * insert_nodes - Insert node based in order alphabetic
 * @initial: (GradeNode) Heade of the list
 * @lastName: (char) String of input data
 * @grade: (double) Grade of the input
 *
 */
void insert_nodes(GradeNodePtr *initial, char lastName[SIZE], double grade)
{
	GradeNodePtr newPtr = malloc(sizeof(GradeNode));
	GradeNodePtr currentPtr = *initial;
	GradeNodePtr previousPtr = NULL;
	char order = lastName[0];


	if (!newPtr)
		exit(EXIT_FAILURE);

	/* Copy info From Arguments */
	strcpy(newPtr->lastName, lastName);
	newPtr->grade = grade;
	newPtr->nextPtr = NULL;

	/* Traversing list Until NULL or Find Letter minour */
	while (currentPtr != NULL && order > currentPtr->lastName[0]) {
		previousPtr = currentPtr;
		currentPtr = currentPtr->nextPtr;
	}

	/* In Case of be First Node */
	if (!previousPtr) {
		newPtr->nextPtr = *initial;
		*initial = newPtr;

	} else {
		previousPtr->nextPtr = newPtr;
		newPtr->nextPtr = currentPtr;
	}
}
