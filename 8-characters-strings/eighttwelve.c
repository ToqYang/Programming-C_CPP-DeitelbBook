#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void random_array(int *random, int sizeran);
void build_sentence(char *paragraph, int *random, char **noun);

/**
 * main - (Random Sentences)
 *        Generate 20 phrases
 *
 * Return: 0 if is success
 */
int main(void)
{
	char paragraph[1000];
	char *noun[] = {"boy", "girl", "dog", "town", "car"};
	int ranum[6] = {0};
	/*  0: First ryhms ; 1: Second Ryhms ; 2: Length Random Numbers */
	int len[3] = {0}, i = 1;
	/* 0: 1-2-5 ryhms ; 1: 3-4 ; 2: Current Character to Compare */
	char rim[3];

	srand(time(0));
	len[2] = sizeof(ranum) / sizeof(ranum[0]);
	random_array(ranum, len[2]);

	len[0] = strlen(noun[ranum[5]]);
	rim[0] = noun[ranum[5]][len[0] - 1];

	while (i <= 5) {
		if ((i == 1 || i == 2 || i == 5) && (rim[0] == rim[2])) {
			build_sentence(paragraph, ranum, noun);
			++i;
			continue;
		}
		/* Verify if the 4 is equal to 3 char */
		if (i == 4 && (rim[1] == rim[2])) {
			build_sentence(paragraph, ranum, noun);
			++i;
			continue;
		}
		/* Get the Third */
		if (i == 3) {
			len[1] = strlen(noun[ranum[5]]);
			rim[1] = noun[ranum[5]][len[1] - 1];
			if (rim[1] != rim[0]) {
				build_sentence(paragraph, ranum, noun);
				++i;
			}
		}

		random_array(ranum, len[2]);

		len[0] = strlen(noun[ranum[5]]);
		rim[2] = noun[ranum[5]][len[0] - 1];
	}
	puts(paragraph);

	return (0);
}


/**
 * random_array - Generate Pseudo-Random numbers
 * @random: (int *) Random Numbers to Store
 * @sizeran: (int) Length of the Array
 *
 */
void random_array(int *random, int sizeran)
{
	for (int i = 0; i < sizeran; ++i) {
		random[i] = rand() % 5;
	}
}


/**
 * build_sentence - Build the phrase based in pseudo random numbers
 * @paragraph: (char *) Storing All Text
 * @randoms: (int *) Pseudo Random Numbers
 *
 */
void build_sentence(char *paragraph, int *random, char **noun)
{
	char *article[] = {"the", "a", "one", "some", "any"};
	char *verb[] = {"drove", "jumped", "ran", "walked", "skipped"};
	char *preposition[] = {"to", "from", "over", "under", "on"};
	char sentences[50];

	sprintf(sentences, "%s %s %s %s %s %s",
		article[random[0]], noun[random[1]], verb[random[2]],
		preposition[random[3]], article[random[4]], noun[random[5]]);

	strcat(paragraph, sentences);
	strcat(paragraph, "\n");
}
