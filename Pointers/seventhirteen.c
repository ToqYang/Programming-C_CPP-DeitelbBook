#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52
#define HAND 7
#define HANDS 2

void shuffle(unsigned int wDeck[][FACES]);
void deal(unsigned int wDeck[][FACES], unsigned int *r, unsigned int *c, unsigned int *count, unsigned int *limit);
int determine_deck(unsigned int *r, unsigned int *c, unsigned int len);
void better_hand(int hand1, int hand2);


/**
 * main - (Card Shuffling and Dealing)
 *        Determine better hand among hands
 *
 * Return: 0 if is success
 */
int main(void)
{
	unsigned int deck[SUITS][FACES] = {0};
	static unsigned int hand1r[HAND] = {0}, hand1c[HAND] = {0};
	static unsigned int handunor[HANDS] = {0}, handosr[HANDS] = {0};
	static unsigned int handunoc[HANDS] = {0}, handosc[HANDS] = {0};

	unsigned int count = 1, limit = 5;
	int score1 = 0, score2 = 0, score3 = 0;

	srand(time(NULL)); /* seed random-number generator */
	shuffle(deck); /* shuffle the deck */

	/* initialize suit array */
	const char *suit[SUITS] = {"Hearts", "Diamonds", "Clubs", "Spades"};

	/* initialize face array */
	const char *face[FACES] =  {"Ace", "Deuce", "Three", "Four",
				    "Five", "Six", "Seven", "Eight",
				    "Nine", "Ten", "Jack", "Queen", "King"};

	/* Handle of the crupier */
	deal(deck, hand1r, hand1c, &count, &limit); // deal the deck
	score1 = determine_deck(hand1r, hand1c, HAND - 2);

	/* Introduce hands player */
	deal(deck, handunor, handunoc, &count, &limit); // deal the deck
	deal(deck, handosr, handosc, &count, &limit); // deal the deck
	
	hand1r[5] = handunor[0];
	hand1c[5] = handunoc[0];
	hand1r[6] = handunor[1];
	hand1c[6] = handunoc[1];
	score2 = determine_deck(hand1r, hand1c, HAND);

	/*  Prove Repartition */
	for (int j = 0; j < HAND; ++j) {
		printf("Hand 1 [%d]:%s %s [%d][%d]\n", j, face[hand1r[j]], suit[hand1c[j]],
		       hand1r[j], hand1c[j]);
	}

	puts("-------------\n");
	hand1r[5] = handosr[0];
	hand1c[5] = handosc[0];
	hand1r[6] = handosr[1];
	hand1c[6] = handosc[1];
	score3 = determine_deck(hand1r, hand1c, HAND);


	/*  Prove Repartition */
	for (int j = 0; j < HAND; ++j) {
		printf("Hand2[%d]:%s %s [%d][%d]\n", j, face[hand1r[j]], suit[hand1c[j]],
		       hand1r[j], hand1c[j]);
	}
	puts("-------------\n");

	printf("\nThe hand of the desk: %d\n", score1);
	better_hand(score2, score3);

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
	int i = 0;
	int length = sizeof(r) / sizeof(r[0]);
	*limit += length;

	for (size_t card = *count; card <= *limit; ++card) {
		// loop through rows of wDeck
		for (size_t row = 0; row < SUITS; ++row) {
			// loop through columns of wDeck for current row
			for (size_t column = 0; column < FACES; ++column) {
				// if slot contains current card, display card
				if (wDeck[row][column] == card) {
					r[i] = row;
					c[i] = column;
					++*count;
					++i;
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
int determine_deck(unsigned int *r, unsigned int *c, unsigned int len)
{
	int pair_and_double(unsigned int *c, unsigned int len);
	int kind_card(unsigned int *c, unsigned int *r, unsigned int len);
	int flush_card(unsigned int *r);
	int straight_cards(unsigned int *c, unsigned int len);

	int score = 0;

	score += pair_and_double(c, len);
	score += kind_card(c, r, len) * 2;
	score += flush_card(r) * 20;
       	score += straight_cards(c, len) * 30;

	return (score);
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

	return ((times >= 5) ? 1 : 0);
}


/**
 * kind_card - Detect if in a hand player is found three or four same kind
 * @c: (int *) Face of the hands
 * @r: (int *) Suit of the hands
 *
 * Return: (int) 3 or 4 if its same type
 */
int kind_card(unsigned int *c, unsigned int *r, unsigned int len)
{
	unsigned int analyze[7] = {0};
	int times = 1;
	/* Look if the card already analized and continue or
	   if it wasn't analyzed continue to compare
	   that Face and Suit not analyzed
	*/
	for (size_t i = 0; i < len; ++i) {
		if (analyze[i] == 1)
			continue;
		for (size_t j = 0; j < len; ++j) {
			if (analyze[j] == 1 || j == i)
				continue;
			if (c[i] == c[j] && r[i] == r[j]) {
				analyze[j] = 1;
				++times;
			}
		}
		if (times == 3 || times == 4 || times == 6)
			i = len;
	}
	return ((times == 4 || times == 2 || times == 6) ? times : 0);
}


/**
 * pair_and_double - Detect if in a hand player is found a pair o two pair
 * @c: (int *) Hands of the players
 *
 *
 * Return: (int) 2 if there pair, 4 if there two pair
 */
int pair_and_double(unsigned int *c, unsigned int len)
{
	unsigned int analyze[7] = {0};
	int times = 0;
	/* Look if the card already analized and continue or
	   if it wasn't analyzed continue to compare that card with
	   the cards not analyzed
	*/
	for (size_t i = 0; i < len; ++i) {
		if (analyze[i] == 1)
			continue;
		for (size_t j = 0; j < len; ++j) {
			if (analyze[j] == 1 || j == i)
				continue;
			if (c[i] == c[j]) {
				analyze[j] = 1;
				times += 2;
			}
		}
	}
	return ((times == 4 || times == 2 || times == 6) ? times : 0);
}


/**
 * straight_cards - Detect a normal straight
 * @c: (int *) Array with the position cards
 *
 * Return: return 1 if the array is descend
 */
int straight_cards(unsigned int *c, unsigned int len)
{
	int descend(unsigned int *c, unsigned int len);
	int ascend(unsigned int *c, unsigned int len);

	if (descend(c, len) || ascend(c, len)) {
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
int descend(unsigned int *c, unsigned int len)
{
	unsigned int max = c[0], times = 0;

	for (size_t i = 1; i < len; ++i) {
		if (c[i] > max)
			max = c[i];
	}

	for (size_t i = 0; i < len; i++) {
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
int ascend(unsigned int *c, unsigned int len)
{
	unsigned int min = c[0], times = 0;

	for (size_t i = 1; i < len; ++i) {
		if (c[i] < min)
			min = c[i];
	}

	for (size_t i = 0; i < len; ++i) {
		if (min == c[i]) {
			++times;
			++min;
			i = 0;
		}
	}

	return ((times >= 5) ? 1 : 0);
}


void better_hand(int hand1, int hand2)
{
	if (hand1 == hand2)
		puts("Draw");
	if (hand1 > hand2)
		puts("Hand1 is better");
	if (hand2 > hand1)
		puts("Hand2 is better");
}
