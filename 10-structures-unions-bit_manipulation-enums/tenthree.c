#include <stdio.h>
#include <string.h>

/* A) Define struct */
typedef struct part {
	unsigned int partNumber;
	char partName[25];
} Part;
/* B) Define synonym */

/**
 * main - Exercises to Start
 *
 * Return: 0 if is Success
 */
int main(void)
{
	/* C) Define Struct */
	Part a;
	struct part b[10];
	struct part *ptr;

	/* D) Read Part Num */
	puts("Enter Number");
	scanf("%u", &(a.partNumber));
	puts("Enter Name");
	scanf("%25s", (a.partName));

	/* E) Assing a Members to 3 Element b */
	b[3].partNumber = a.partNumber;
	strcpy(b[2].partName, a.partName);

	/* F) Assign Adress b to ptr */
	ptr = b;

	/* G) Print 3 3lements of ptr */
	for (int i = 0; i < 3; ++i) {
		printf("(*ptr[%d]).partNumber = %u\n", i, (ptr[i]).partNumber);
		printf("(*ptr[%d]).partName = %s\n", i, (ptr[i]).partName);
	}

	return (0);
}
