#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

listint_t *insert_node(listint_t **head, int number);
size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);




/**
 * main - (Inserting into an Ordered List)
 *
 * Return: (int) 0 if is success
 */
int main(void)
{
	listint_t *head = NULL;


        srand(time(NULL));
        /* Random nums of 1-50 */
        for (int i = 0; i < 25; ++i) {
                int num = 1 + rand() % 50;
                insert_node(&head, num);
        }

	print_listint(head);

	free_listint(head);

	return (0);
}



/**
 * insert_node - Put the node in a position sorted
 * @head: (listint_t **) Head of list
 * @number: (int) Number to make the new node
 *
 * Return: (listint_t *) Pointer at the new node
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = number;
	new->next = NULL;

	/* If the first is NULL and If the First is Bigger the New */
	if (!(*head) || (*head)->n >= new->n)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	else
	{
		listint_t *curr = *head;
		/* Get Position of the Next Bigger */
		while (curr->next != NULL && curr->next->n < new->n)
			curr = curr->next;

		/* Link the Next New with the Head */
		new->next = curr->next;
		/* Link the Current With the New Node  */
		curr->next = new;

		return (new);
	}

	return (NULL);
}



/**
 * print_listint - prints all elements
 * @h:(const listint_t *) pointer to head of list
 *
 * Return: (size_t) length of the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	unsigned int n; /* number of nodes */

	current = h;
	n = 0;
	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		n++;
	}

	return (n);
}


/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: (listint_t **head) pointer to pointer of first node of listint_t list
 * @n: (const int) integer to be included in new node
 *
 * Return: (listint_t) address of the new element or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current;

	current = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}

	return (new);
}


/**
 * free_listint - frees a listint_t list
 * @head: (listint_t *) pointer to list to be freed
 *
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}