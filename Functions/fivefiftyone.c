#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int mul(void);
int genRandomNumbers(int up, int low);
int isEqual(int a, int b);
void answers(int equal);


/**
 * main - (Computer-Assisted Instruction: Reducing Student Fatigue)
 *
 * Return: 0 If is success
 */
int main(void)
{
        int result = 0, num = 0, numeq = 0;

        while (num != -1)
        {
                srand(time(0));
                result = mul();

                scanf("  %d", &num);

                numeq = isEqual(result, num);
                answers(numeq);
        }
        return (0);
}


/**
 * mul - Multiply two number of one single digit
 *
 * Return: Result of the number multiplied
 */
int mul(void)
{
        int num1 = 0, num2 = 0;

        num1 = genRandomNumbers(1, 9);
        num2 = genRandomNumbers(1, 9);

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

        if (equal)
        {
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
