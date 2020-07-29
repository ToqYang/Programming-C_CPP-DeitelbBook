#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


/**
 * main - (Random Sentences)
 *        Generate 20 phrases
 *
 * Return: 0 if is success
 */
int main(void)
{
	char *article[] = {"the", "a", "one", "some", "any"};
	char *noun[] = {"boy", "girl", "dog", "town", "car"};
	char *verb[] = {"drove", "jumped", "ran", "walked", "skipped"};
	char *preposition[] = {"to", "from", "over", "under", "on"};
	char sentences[50], paragraph[1000];
	int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0;

	srand(time(0));

	/* Generate Number to the Arrays */
	one = rand() % 5;
	two = rand() % 5;
	three = rand() % 5;
	four = rand() % 5;
	five = rand() % 5;
	six = rand() % 5;

	memset(sentences, '\0', 100);

	for (int i = 0; i < 20; ++i) {
		sprintf(sentences, "%s %s %s %s %s %s",
			article[one], noun[two], verb[three],
			preposition[four], article[five], noun[six]);
		strcat(paragraph, sentences);
		strcat(paragraph, "\n");

		/* Generate Number to the Arrays */
		one = rand() % 5;
		two = rand() % 5;
		three = rand() % 5;
		four = rand() % 5;
		five = rand() % 5;
		six = rand() % 5;
	}
	puts(paragraph);

	return (0);
}
