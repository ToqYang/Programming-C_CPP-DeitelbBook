#include <stdio.h>
#include <stdlib.h>
/* contains prototype for function time */
#include <time.h>


/* enumeration constants represent game status */
enum Status { CONTINUE, WON, LOST };

void bankBalance(int balance);

int rollDice(void);
/* enumeration constants represent game status */


/**
 * main - Rolldice game with status of the bank
 * Return: 0 if is success
 */
int main(void)
{
	int amount = 1000;
	/* randomize random number generator using current time */
	srand(time(NULL));

	int myPoint; /* player must make this point to win */
	/* can contain CONTINUE, WON, or LOST */
	enum Status gameStatus;

	while (amount > 0)
	{
		int sum = rollDice(); /* first roll of the dice */

		/* determine game status based on sum of dice */
		switch(sum) {
			/* win on first roll */
			case 7: /* 7 is a winner */
			case 11: /* 11 is a winner */
				gameStatus = WON;
				amount += 200;
				bankBalance(amount);
			break;
			/* lose on first roll */
			case 2: /* 2 is a loser */
			case 3: /* 3 is a loser */
			case 12: /* 12 is a loser */
				gameStatus = LOST;
				amount -= 200;
				bankBalance(amount);
			break;
			/* remember point */
			default:
                                /* player should keep rolling */
				gameStatus = CONTINUE;
				myPoint = sum; // remember the point
				printf("Point is %d\n", myPoint);
			break;
                        /* optional */
		}

		/* while game not complete */
		while (CONTINUE == gameStatus) {/*player should keep rolling */
			sum = rollDice(); /* roll dice again */
			/* determine game status */
			if (sum == myPoint) { /* win by making point */
				gameStatus = WON;

				amount += 200;
				bankBalance(amount);
 			}
			else {
				if (7 == sum) { /* lose by rolling 7 */
					gameStatus = LOST;

					amount -= 200;
					bankBalance(amount);
				}
			}
			/* display won or lost message */
			if (WON == gameStatus) { /* did player win? */
				puts("Player wins");
			}
			else { /* player lost */
				puts("Player loses");
			}
		}
	}
	return (0);
}



/**
 *  roll dice - Calculate sum and display results
 *
*/
int rollDice(void)
{
	int die1 = 1 + (rand() % 6); /* pick random die1 value */
	int die2 = 1 + (rand() % 6); /* pick random die2 value */

	/* display results of this roll */
	printf("Player rolled %d + %d = %d\n", die1, die2, die1 + die2);
	return die1 + die2; /* return sum of dice */
}


/**
 * bankBalance - Print about the balance of your status of bank
 *
 * @balance: (int) Its balance in $ of your current value
 */
void bankBalance(int balance)
{
	if (balance >= 2000)
		puts("Now's the time to cash in your chips!");
	if (balance > 1500)
		puts("Is your day");
	if (balance >= 1000)
		puts("You're up big");
	if (balance >= 800 && balance <= 1000)
		puts("Aw cmon, take a chance");
	if (balance >= 600 && balance <= 799)
		puts("Hey men, what happen?");
	if (balance >= 400 && balance <= 599)
		puts("Oh, you're going for broke, huh?");
	if (balance >= 200 && balance <= 399)
		puts("Retire while you can");
	if (balance <= 0)
		puts("Sorry. You busted!");

	printf("Your bank balance is: $ %d\n", balance);
}
