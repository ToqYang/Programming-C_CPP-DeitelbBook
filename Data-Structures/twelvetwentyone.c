#include <stdio.h>
#include <stdlib.h>


/**
 * struct naturalsNumbers - Single Linked List
 * @character: (character) Store 10 Chars
 * @nextPtr: (struct naturalsNumbers *) points to the next node
 *
 * Description: Store a line of text
 *
 */
struct list {
    char character;
    struct list *nextPtr;
};

typedef struct list list_char;

void insert_nodes(list_char **head, char mcharacter);
void insert_rev(list_char *head, list_char **new);
void print_list_backward(list_char *head);
void delete_node(list_char *head);
list_char *search_list(list_char *head, char search);


/**
 * main - (Recursively Search a List)
 *
 * Return: (int) 0 if is success
 */
int main(void)
{
    list_char *head = NULL, *rev = NULL;

    insert_nodes(&head, 'a');
    insert_nodes(&head, 'b');
    insert_nodes(&head, 'c');
    insert_nodes(&head, 'd');
    insert_nodes(&head, 'e');
    insert_nodes(&head, 'f');
    insert_nodes(&head, 'g');
    insert_nodes(&head, 'h');
    insert_nodes(&head, 'i');
    insert_nodes(&head, 'j');

    /* Make a List in Reverse */
    insert_rev(head, &rev);

    /* Search recursively a condition */
    list_char *found = search_list(head, 'd');
    if (found)
        printf("Found 'd': %c %p\n", (found->character), (void *)found);
    else
        puts("Not found 'd'");
    /* Print Lists */
    puts("Reverse");
    print_list_backward(rev);

    puts("----------------");
    delete_node(head);
    puts("----------------------");
    delete_node(rev);

    return (0);
}


/**
 * search_list - Search to a char
 * @head: (list_char *) Head of the node
 * @search: (char) Character to compared
 *
 * Return: Null if it not is found or list_char *
 */
list_char *search_list(list_char *head, char search)
{
    if (!head) {
        return (NULL);
    }

    if ((head->character) == search) {
        return (head);
    }
    return (search_list(head->nextPtr, search));
}


/**
 * insert_rev - Insert Nodes in Reverse
 * @head: (list_char *) Head of the node
 * @new: (list_char *) New List in reverse order
 *
 */
void insert_rev(list_char *head, list_char **new)
{
    if (!(head))
        return;

    insert_rev(head->nextPtr, new);
    insert_nodes(new, head->character);
    printf("%c\n", head->character);
}


/**
 * insert_nodes - Insert node in next position
 * @head: (NaturalNums) Head of the Pointer
 * @n: (int) Number of Integer
 *
 */
void insert_nodes(list_char **head, char mcharacter)
{
    list_char *newPtr = malloc(sizeof(list_char));
    list_char *currentPtr = *head;

    if (!newPtr)
        exit(EXIT_FAILURE);

    /* Copy info From Arguments */
    newPtr->character = mcharacter;
    newPtr->nextPtr = NULL;

    if (!(*head)) {
        newPtr->nextPtr = *head;
        *head = newPtr;
    }
    else {
        /* Traversing list Until NULL or Find Letter minour */
        for (; currentPtr->nextPtr != NULL; (currentPtr = currentPtr->nextPtr))
            ;

        /* Assign the NULL Value */
        newPtr->nextPtr = currentPtr->nextPtr;
        /* Assign the ptr at the Head */
        currentPtr->nextPtr = newPtr;
    }
}


/**
 * delete_node - Delete all nodes
 * @head: (NaturalNums) Head of the Pointer
 *
 */
void delete_node(list_char *head)
{
    list_char *tmp = NULL;
    int i = 0;

    putchar(10);
    while (head) {
        tmp = head;
        head = head->nextPtr;
        printf("Eliminated item (%d)\n", i);
        free(tmp);
        ++i;
    }
    tmp = NULL;
    puts("\nSuccessfull");
}


/**
 * print_list_backward - Print the nodes in recursion mode
 * @head: (NaturalNums) Head of the Pointer
 *
 */
void print_list_backward(list_char *head)
{
    if (!head)
        return;

    print_list_backward(head->nextPtr);
    printf("%c\n", (head->character));
}
