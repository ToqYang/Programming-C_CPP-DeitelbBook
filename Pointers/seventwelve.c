#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52
#define HAND 5

void shuffle(unsigned int wDeck[][FACES]);
void deal(unsigned int wDeck[][FACES], unsigned int *r, unsigned int *c, unsigned int *count, unsigned int *limit);
void determine_deck(unsigned int *r, unsigned int *c);


/**
 * main - (Card Shuffling and Dealing)
 *        Determine hand
 *
 * Return: (int) 0 if is success
 */
int main(void)
{
	unsigned int deck[SUITS][FACES] = {0};
	static unsigned int hand1r[HAND] = {0}, hand1c[HAND] = {0};
	unsigned int count = 0, limit = 5;

	srand(time(NULL)); /* seed random-number generator */
	shuffle(deck); /* shuffle the deck */

	/* initialize suit array */
	const char *suit[SUITS] = {"Hearts", "Diamonds", "Clubs", "Spades"};

	/* initialize face array */
	const char *face[FACES] =  {"Ace", "Deuce", "Three", "Four",
				    "Five", "Six", "Seven", "Eight",
				    "Nine", "Ten", "Jack", "Queen", "King"};

	deal(deck, hand1r, hand1c, &count, &limit); // deal the deck
	determine_deck(hand1r, hand1c);

	/*  Prove Repartition */
	for (int j = 0; j < HAND; ++j) {
		printf("[%d]:%s %s [%d][%d]\n", j, face[hand1r[j]], suit[hand1c[j]],
		       hand1r[j], hand1c[j]);
	}

	return (0);
}



void shuffle(unsigned int wDeck[][FACES])
{
	for (size_t card = 1; card <= CARDS; ++card) {
		size_t row; /* row number */
		size_t column; /* column number */

		/* choose new random location until unoccupied slot found */
		do {
			row = rand() % SUITS;
			column = rand() % FACES;
		} while(wDeck[row][column] != 0);

		/* place card number in chosen slot of deck */
		wDeck[row][column] = card;
	}
}


/**
 * deal - Take the deck and generate two decks with the position of the cards
 * @wDeck: (unsigned int **) Deck with the cards shuffled
 * @r: (unsigned int *) Array with the rows of both decks
 * @c: (unsigned int *c) Array with the columns of both decks
 */
void deal(unsigned int wDeck[][FACES], unsigned int *r, unsigned int *c, unsigned int *count, unsigned int *limit)
{
	for (size_t card = 1; card <= *limit; ++card) {
		// loop through rows of wDeck
		for (size_t row = 0; row < SUITS; ++row) {
			// loop through columns of wDeck for current row
			for (size_t column = 0; column < FACES; ++column) {
				// if slot contains current card, display card
				if (wDeck[row][column] == card) {
					r[*count] = row;
					c[*count] = column;
					++*count;
				}
			}
		}
	}
}


/**
 * determine_deck - Contain the functions to look the types of games
 * @r: (int *): Suit of the hand
 * @c: (int *): Face of the hand
 */
void determine_deck(unsigned int *r, unsigned int *c)
{
	int pair_and_double(unsigned int *c);
	int kind_card(unsigned int *c, unsigned int *r);
	int flush_card(unsigned int *r);
	int straight_cards(unsigned int *c);

	printf("Player 0: %d\n", pair_and_double(c));

	printf("Three or four: %d\n", kind_card(c, r));

	printf("Flush: %d\n", flush_card(r));

       	printf("Straight: %d\n", straight_cards(c));
}


/**
 * flush_card - Detect if in a hand player is found three of a
 * @r: (int *) Suit of the hands
 *
 * Return: (int) 1 if is flush, otherwise 0;
 */
int flush_card(unsigned int *r)
{
	int times = 1;

	for (size_t i = 1; r[0] == r[i]; ++i, ++times);

	return ((times == 5) ? 1 : 0);
}


/**
 * kind_card - Detect if in a hand player is found three or four same kind
 * @c: (int *) Face of the hands
 * @r: (int *) Suit of the hands
 *
 * Return: (int) 3 or 4 if its same type
 */
int kind_card(unsigned int *c, unsigned int *r)
{
	unsigned int analyze[5] = {0};
	int times = 1;
	/* Look if the card already analized and continue or
	   if it wasn't analyzed continue to compare
	   that Face and Suit not analyzed
	*/
	for (size_t i = 0; i < 5; ++i) {
		if (analyze[i] == 1)
			continue;
		for (size_t j = 0; j < 5; ++j) {
			if (analyze[j] == 1 || j == i)
				continue;
			if (c[i] == c[j] && r[i] == r[j]) {
				analyze[j] = 1;
				++times;
			}
		}
		if (times == 3 || times == 4)
			i = 5;
	}
	return (times);
}


/**
 * pair_and_double - Detect if in a hand player is found a pair o two pair
 * @c: (int *) Hands of the players
 *
 * Return: (int) 2 if there pair, 4 if there two pair
 */
int pair_and_double(unsigned int *c)
{
	unsigned int analyze[5] = {0};
	int times = 0;
	/* Look if the card already analized and continue or
	   if it wasn't analyzed continue to compare that card with
	   the cards not analyzed
	*/
	for (size_t i = 0; i < 5; ++i) {
		if (analyze[i] == 1)
			continue;
		for (size_t j = 0; j < 5; ++j) {
			if (analyze[j] == 1 || j == i)
				continue;
			if (c[i] == c[j]) {
				analyze[j] = 1;
				times += 2;
			}
		}
	}
	return (times);
}


/**
 * straight_cards - Detect a normal straight
 * @c: (int *) Array with the position cards
 *
 * Return: return 1 if the array is descend
 */
int straight_cards(unsigned int *c)
{
	int descend(unsigned int *c);
	int ascend(unsigned int *c);

	if (descend(c) && ascend(c)) {
		return (1);
	}
	return (0);
}


/**
 * descend - Look if the array is descend
 * @c: (int *) Array with the position cards
 *
 * Return: return 1 if the array is descend
 */
int descend(unsigned int *c)
{
	unsigned int max = c[0], times = 0;

	for (size_t i = 1; i < 7; ++i) {
		if (c[i] > max)
			max = c[i];
	}

	for (size_t i = 0; i < 7; i++) {
		if (max == c[i]) {
			++times;
			--max;
			i = 0;
		}
	}

	return ((times >= 5) ? 1 : 0);
}


/**
 * ascend - Look if the array is ascend
 * @c: (int *) Array with the position cards
 *
 * Return: return 1 if the array is ascend
 */
int ascend(unsigned int *c)
{
	unsigned int min = c[0], times = 0;

	for (size_t i = 1; i < 7; ++i) {
		if (c[i] < min)
			min = c[i];
	}

	for (size_t i = 0; i < 7; ++i) {
		if (min == c[i]) {
			++times;
			++min;
			i = 0;
		}
	}

	return ((times >= 5) ? 1 : 0);
}
