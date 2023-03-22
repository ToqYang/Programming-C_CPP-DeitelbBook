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


/**
 * main - Follow Steps
 *
 * Return: 0 if is success
 */
int main(void)
{
	/* A) Make a pointer */
	GradeNodePtr startPtr = NULL;

	/* B) Assign a previos node the node Ptr */
	GradeNodePtr newPtr = NULL;
	GradeNode *previousPtr = NULL;

	newPtr = (GradeNodePtr)malloc(sizeof(GradeNode));
	if (!newPtr)
		exit(EXIT_FAILURE);

	previousPtr = newPtr;

	strcpy(previousPtr->lastName, "Jones");
	previousPtr->grade = 91.5;

	/* C) Insert Node */
	insert_nodes(&startPtr, "Adams", 85.0);
	insert_nodes(&startPtr, "Pritchard", 66.5);
	insert_nodes(&startPtr, "Thompson", 73.5);

	/* D) Print Nodes */
	print_nodes(startPtr);

	/* E) Delete Nodes */
	delete_node(startPtr);
	free(newPtr);

	newPtr = NULL;
        previousPtr = NULL;
	startPtr = NULL;


	return (0);
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
