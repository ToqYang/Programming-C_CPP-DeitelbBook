#include <stdio.h>
#include <stdlib.h>
#include <time.h>


size_t roll_dice(void);


/**
 * main - (Game of Craps) Runs 1000 games of craps
 *
 * Return: 0 If is success
 */
int main(void)
{
        size_t num = 0, gplayed = 0, chnum = 0, tnum = 0;
        size_t won[1000] = {0}, lose[1000] = {0};

        srand(time(NULL));

        for (int i = 0; i < 1000; i++) {
                num = roll_dice();

                /* Look if take out 8 it do change num winner to 8*/
                if (gplayed > 1 && num == 8)
                        chnum = 1;
                if (tnum == 2)
                        chnum = 0;

                /* Look if change number not is active to play normal */
                if ((num == 7 || num == 11) && chnum == 0)
                {
                        ++won[i];
                }
                else if ((num == 2 || num == 3 || num == 12) && chnum == 0)
                {
                        ++lose[i];
                        gplayed = 0;
                        chnum = 0;
                        tnum = 0;
                }

                /*
		   Look if change number not is active to play
		   8 winner
		   7 loser
		*/
                if ((num == 8 || num == 11) && chnum == 1) {
                        ++won[i];
                        ++tnum;
                } else if ((num == 2 || num == 3 || num == 12 || num == 7)\
                        && chnum == 1)
                {
                        ++lose[i];
                        gplayed = 0;
                        chnum = 0;
                        tnum = 0;
                }
        }

        for (int j = 0; j < 1000; j++) {
                printf("Won[%d] = %ld\tLose[%d] = %ld\n",
                       j, won[j], j, lose[j]);
        }

        return (0);
}


/**
 * roll_dice - Look the sum of two roll dice
 *
 * Return: (size_t) Sum of the two numbers
 */
size_t roll_dice(void)
{
        size_t roll1 = 1 + rand() % 6;
        size_t roll2 = 1 + rand() % 6;

        return (roll1 + roll2);
}
