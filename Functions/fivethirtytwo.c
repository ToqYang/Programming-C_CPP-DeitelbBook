#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int randNum(int desired, int login);


/**
 * main - Game (Guess the Number)
 *
 * Consist in generate a number pseudo-random number
 * The user have to guess
 *
 * Return: (int) 0 if is success
 */
int main(void)
{
        int num = 1, enter = 0, rn = 0;

        puts("I have a number between 1 and 1000.");
        puts("Can you guess my number?");
        puts("Please type your first guess.");

        srand(time(0));
        rn = (rand() % 1001);

        while (num == 1 || num == 2) {
                scanf("%d", &enter);
                num = randNum(rn, enter);

                /*
		  If the before function return 2
		  Restart the game again
		 */
                if (num == 2) {
                        rn = (rand() % 1001);
                        puts("Please type your first guess.");
                }
        }
        return (0);
}



/**
 * randNum - Verify the cases of the pseudo-random number
 * @desired: (int) Receive pseudo-random number
 * @login: (int) Receive the number joined to the user
 *
 * Return: (int) State of the game
 */
int randNum(int desired, int login)
{
        /*
          exit: Status of the game
	  enter: Character to know if continue
	 */
        int exit = 0;
        char enter = 'y';

        if (login < desired) {
                puts("Too low. Try again.");
                exit = 1;
        } else if (login > desired) {
                puts("Too high. Try again.");
                exit = 1;
        } else if (login == desired) {
                puts("Excellent! You guessed the number!\
			\nWould you like to play again (y or n)?");
                scanf(" %c", &enter);

                /* Look if enter is equal to y
		 * to return 2 or if it not is
		 * return 0
		 */
                exit = (enter == 'y') ? 2 : 0;
        } else
                puts("Enter the correct number.");

        return (exit);
}
