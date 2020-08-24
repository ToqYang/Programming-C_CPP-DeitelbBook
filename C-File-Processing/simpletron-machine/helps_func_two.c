#include "sml.h"


/**
 * @memor: (double) Memmory of the Computer
 * @oper: (int) Length of the string
 *
 * Return: (int) -1 Error and 1 Successful task
 */
int write_str(double *memor, int *oper)
{
        puts("------------------------------------");
	printf("\nOUTPUT: ");

        /* Get the Half Right to Get the Length of the STR */
        unsigned int len = fmod(memor[*oper], 100);
        /*
           i = Position in Memory
           j = Position to detect the length
         */
        for (unsigned int i = *oper, j = 0; j < len; ++i, ++j) {
                int character = memor[i];
                character /= 100;

                if ((character >= 0) && (character <= 255)) {
                        putchar(character);
                } else {
                        puts("INVALID CHARACTER ASCII MUST BE 0-255");
                        return (-1);
                }
        }

        puts("------------------------------------");

        return (1);
}


/**
 * read_str - Obtain the string and pass in ASCII to memory
 *              Left half ASCII char, Right half length
 *
 * @memor: (double) Memmory of the Computer
 * @len: (int) Length of the array
 * @str_counter: (int) Counter of the string
 *
 * Return: (int) -1 Error and 1 Successful task
 */
int read_str(double *memor, const int *len, int *str_counter)
{
        int k = 0, max = (*str_counter) + (*len);
        char c = 'a';

        if (max < SMEMORY) {
                puts("SIZE OF THE STRING EXCEED MEMORY");
                return (-1);
        }

        printf("INPUT STR: ");
        while (((c = getchar()) != '\n'))
        {
                if (k < (*len)) {
                        int str_word = new_instruction((int)c, (*len));
                        memor[(*str_counter)++] = str_word;
                } else {
                        puts("STACK OVERFLOW");
                        return (-1);
                }
        }
        /* [0][1][2][3][4][5][6] <-- MAX; [7] = 0 = NULL */
        /*  T  O  Q  Y  A  N  G  */
        /* [6] + 2 = [8] New Position Follow String */
        str_counter += 2;

        return (1);
}


/**
 * new_instruction - Take the left and right and make a WORD
 * @l: (int) Half WORD
 * @r: (int) Half WORD
 *
 * Return: (int) New creation of the instruction
 */
int new_instruction(double l, double r)
{
	/* Left instrcut exam: 20 == 10 in the length */
	int new_len = 10;
	/* Find the length of the rigth word */
	int len = len_num(r);
	if (r < 10) {
		if (r == 0)
			++len;
		++len;
	}
	/* Get the new miles */
	new_len = pow(new_len, len);

	/*               Left Word New Len  */
	/* Find the new zero ex: 20 * 10.000 */
	int new_word = l * new_len;
	/* Sum Right Word ex: 200.000 + 1000  */
	new_word += r;

	return (new_word);
}


/**
 * length_numbers - Count the numbers in num
 * @n: (int) Number
 *
 * Return: (int) Length of the number
 */
int len_num(double n)
{
	int num = n, count = 0;

	while (num != 0) {
		num /= 10;
		++count;
	}

	return (count);
}