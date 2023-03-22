#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


#define SIZE 256

/**
 * struct line - Stack
 * @character: (character) Store words
 * @nextPtr: (struct line *) Next Address
 *
 * Description: Store the words in the Stack
 *
 */
struct line {
	char letter;
	struct line *nextPtr;
};

typedef struct line stack;


void push_stack(stack **topPtr, char letter);
void print_nodes(stack *topPtr);
int palindrome(stack *topPtr, unsigned int len, char str[]);



/**
 * main - (Palindrome Tester)
 *
 * Return: (int) 0 if is success
 */
int main(void)
{
        char c = 'a', text[SIZE];
        unsigned int i = 0;
        stack *top = NULL;

        puts("########STACK###########");
        while (((c = getchar()) != '\n')) {
                text[i] = toupper(c);
                push_stack(&top, text[i]);
                ++i;
        }

        for (int j = i; j < SIZE; ++j)
                text[j] = '\0';

        print_nodes(top);
        if (palindrome(top, i, text))
                puts("Yes");
        else
                puts("No");

	return (0);
}



/**
 * palindrome - Verify if a word is palindrome
 *
 *              Verify in case of punctuation or space
 *
 * Return: (int) 0 if not is, otherwise 1
 */
int palindrome(stack *topPtr, unsigned int len, char str[])
{
        int mid = len / 2, start = 0, ispal = 1, end = len;

        printf("%s %d\n", str, mid);
        while (start < mid && end > mid) {
                /* Left */
                if (ispunct(topPtr->letter) || isspace(topPtr->letter)) {
                    topPtr = topPtr->nextPtr;
                    ++end;
                    continue;
                }
                /* Right */
                if (ispunct(str[start]) || isspace(str[start])) {
                    ++start;
                    continue;
                }
                if ((topPtr->letter) != str[start]) {
                    ispal = 0;
                }

                printf("%c %c\n", (topPtr->letter), str[start]);
                topPtr =topPtr->nextPtr;
                ++start;
                ++end;
        }

        return (ispal);
}



/**
 * push_stack - Put the Node in the top
 * @word: (char *) Word a to receive
 *
 */
void push_stack(stack **topPtr, char letter)
{
	stack *newNode = malloc(sizeof(struct line));

	if (newNode) {
                /* Copy Info */
                newNode->letter = letter;
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
                        printf("| %c |%s", topPtr->letter, "\n-----\n");
	}
}
