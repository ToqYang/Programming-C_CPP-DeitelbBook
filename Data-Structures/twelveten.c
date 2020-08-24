#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * struct line - Stack
 * @character: (character) Store words
 * @nextPtr: (struct line *) Next Address
 *
 * Description: Store the words in the Stack
 *
 */
struct line {
	char *word;
	struct line *nextPtr;
};

typedef struct line stack;


void push_stack(stack **topPtr, char *word);
void print_nodes(stack *topPtr);


/**
 * main - (Reversing the Words of a Sentence)
 *
 *         Stack without valgrind
 *
 * Return: 0 if is success
 */
int main(void)
{
        char text[256], *token = NULL;
        stack *top = NULL;

        //fgets(text, sizeof(text), stdin);
        fscanf(stdin, "%[^\n]s", text);
        puts("########STACK###########");
        token = strtok(text, " ");
        while (token != NULL) {
                push_stack(&top, token);
                token = strtok(NULL, " ");
        }

        print_nodes(top);

	return (0);
}



/**
 * push_stack - Put the Node in the top
 * @word: (char *) Word a to receive
 *
 */
void push_stack(stack **topPtr, char *word)
{
	stack *newNode = malloc(sizeof(struct line));

	if (newNode) {
                /* Copy Info */
                newNode->word = malloc(strlen(word) * (sizeof(char) + 1));
                strcpy(newNode->word, word);
                /* Positionate in the Top */
		newNode->nextPtr = *topPtr;
		*topPtr = newNode;
	} else {
		fprintf(stderr, "Missing memory\n");
	}
}


/**
 * print_nodes - Print the nodes
 * @head: (NaturalNums) Head of the Pointer
 *
 */
void print_nodes(stack *topPtr)
{
        for (unsigned int i = 0; topPtr; (topPtr = topPtr->nextPtr), ++i) {
                        printf("| %s |%s", topPtr->word, "\n--------------------|\n");
	}
}
