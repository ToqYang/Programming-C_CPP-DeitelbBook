#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int mul(int level);
int genRandomNumbers(int up, int low);
int isEqual(int a, int b);
void answers(int equal);
int percentage(int countAnswers);
int chooseLevel(int experience);


/**
 * main - (Computer-Assisted Instruction: Difficulty Levels)
 *
 * Return: 0 If is success
 */
int main(void)
{
        int result = 0, num = 0, numeq = 0, count = 0, i = 0, pass = 0, xp = 0;

        xp = chooseLevel(xp);

        while (num != -1 || i <= 10) {
                srand(time(0));
                result = mul(xp);

                scanf("  %d", &num);

                numeq = isEqual(result, num);
                count += numeq;

                answers(numeq);
                if (i == 9) {
                        pass = percentage(count);

                        if (xp == 1 && pass == 1)
                                ++xp;

                        i = 0;
                }

                ++i;
        }

        return (0);
}



/**
 * mul - Multiply two number of one single digit
 * Return: Result of the number multiplied
 */
int mul(int level)
{
        int num1 = 0, num2 = 0;

        if (level == 1) {
                num1 = genRandomNumbers(1, 9);
                num2 = genRandomNumbers(1, 9);
        }
        else if (level == 2) {
                num1 = genRandomNumbers(11, 99);
                num2 = genRandomNumbers(11, 99);
        }
        printf("How much is %d times %d?\n", num1, num2);

        return (num1 * num2);
}


/**
 * genRandomNumbers - Generate numbers based in a range
 * @up: (int) Store the max of the range
 * @low: (int) Store the low of the range
 *
 * Return: (int) pseudo random number
 */
int genRandomNumbers(int up, int low)
{
        return ((rand() % (up - low)) + 1);
}


/**
 * isEqual - Compare if a number is equal to other
 * @a: (int) Store first number to compare
 * @b: (int) Store the second number to compare
 *
 * Return: (int) 1 is equal, 0 if not is equal
 */
int isEqual(int a, int b)
{
        return (a == b ? 1 : 0);
}


/**
 * answers - Print the pseudo-random answers of the exercise
 * @equal:  (int) Store if is equal
 *
 */
void answers(int equal)
{
        int opt = genRandomNumbers(4, 1);

        if (opt == 0)
                ++opt;

        if (equal) {
                switch (opt)
                {
                case 1:
                        puts("Very good!");
                        break;
                case 2:
                        puts("Excellent");
                        break;
                case 3:
                        puts("Nice work!");
                        break;
                case 4:
                        puts("Keep up the good work!");
                        break;
                default:
                        printf("Error good message\n-%d-\n", opt);
                        break;
                }
        }
        else
        {
                switch (opt)
                {
                case 1:
                        puts("No. Please try again.");
                        break;
                case 2:
                        puts("Wrong. Try once more.");
                        break;
                case 3:
                        puts("Don't give up!");
                        break;
                case 4:
                        puts("No. Keep trying.");
                        break;
                default:
                        printf("Error bad message\n-%d-\n", opt);
                        break;
                }
        }
}


/**
 * percentage - Through the rule of three, us calculate
 * 		avg to know if they can pass to next level
 * @countAnswers: (int) Store the sum of the correct answers
 *
 * Return: (int) 1 if they can pass or 0 if they can't pass
 */
int percentage(int countAnswers)
{
        int avg = ((countAnswers * 100) / 10);

        if (avg >= 75) {
                puts("Congratulations, you are ready to go to the next level!");
                return (1);
        }

        puts("Please ask your teacher for extra help.");
        return (0);
}


/**
 * chooseLevel - Scan the level that the people want their
 * 		and set the value of the level to the other
 * 		exercises
 * @experience: (int) Variable that store experience in level of the player
 *
 * Return: experience of the player
 */
int chooseLevel(int experience)
{
        puts("Enter the difficult level");
        scanf("%d", &experience);

        if (experience == 1 || experience == 2) {
                puts("Welcome to CAI");
                puts("Welcome at the level");
        }
        else {
                puts("Enter the level correct");
                return (-1);
        }

        return (experience);
}
