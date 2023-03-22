#include <stdio.h>
#include <stdlib.h>

#define COLUMNS 50
#define ROWS 50
#define COM 4


void print_array(int board[][COLUMNS]);
int type_command(char com);
int convert_num(char ch1, char ch2);
void info_commands(void);


/**
 * main - (Turtle Graphics)
 *
 * Generate a basic paint
 * There many lines inside main function because,
 * I use only the tools that provide that chapter,
 * I could reduce the line using pointers
 *
 * Return: (int) 0 if is success
 */
int main(void)
{
        int map[ROWS][COLUMNS] = {0};
        int x = 0, y = 0, direction = 3, isupdown = 1;

        char keyboard[COM] = {'0', '0', '0', '0'};

        info_commands();
        scanf("%4s", keyboard);

        while (keyboard[0] != '9')  {
                int isposition = type_command(keyboard[1]);
                if (isposition == 0) {
                        switch (keyboard[0])
                        {
                        case '1':
                                isupdown = 1;
                                break;
                        case '2':
                                isupdown = 2;
                                break;
                        case '3':
                                --direction;
                                if (direction < 1)
                                        direction = 4;
                                break;
                        case '4':
                                ++direction;
                                if (direction > 4)
                                        direction = 1;
                                break;
                        case '6':
                                print_array(map);
                                break;
                        default:
                                puts("Enter a correct command");
                                break;
                        }
                } else if (isposition == 1) {
                        if (keyboard[0] == '5') {
                                int steps = convert_num(keyboard[2], keyboard[3]);
                                if (isupdown == 1 || isupdown == 2) {
                                        if (direction == 1) {
                                                for (int step = 0; step < steps; ++step) {
                                                        if (isupdown == 2)
                                                                map[y][x] = 42;
                                                        --y;
                                                }
                                        } else if (direction == 2) {
                                                for (int step = 0; step < steps; ++step) {
                                                        if (isupdown == 2)
                                                                map[y][x] = 42;
                                                        ++x;
                                                }
                                        } else if (direction == 3) {
                                                for (int step = 0; step < steps; ++step) {
                                                        if (isupdown == 2)
                                                                map[y][x] = 42;
                                                        ++y;
                                                }
                                        } else if (direction == 4) {
                                                for (int step = 0; step < steps; ++step) {
                                                        if (isupdown == 2)
                                                                map[y][x] = 42;
                                                        --x;
                                                }
                                        }
                                }
                        }
                }
                printf("\n[x= %d, y= %d, direction= %d]\n", x, y, direction);
                keyboard[0] = '0';
                keyboard[1] = '0';
                keyboard[2] = '0';
                keyboard[3] = '0';
                scanf("%4s", keyboard);
        }

        return (0);
}



/**
 * info_command - Print the number and the meaning of the commands
 *
 */
void info_commands(void)
{
        puts("Command\tMeaning");
        puts("1\t  Pen up\n2\t  Pen down\n3\t  Turn right\n4\t  Turn left\n\
5, 10\t  Move forward 10 spaces (or a number other than 10)\n\
6\t  Print the 50-by-50 array\n9\t  End of data (sentinel)\n");
}


/**
 * type_command - Look if the user send coordinates or command
 * @com: (char) [0]:Command [1]:',' [2]:x [3]:y
 *
 * Return: (int) 1 if this contain x and y, otherwise has a command
 */
int type_command(char com)
{
        return ((com == ',') ? 1 : 0);
}


/**
 * convert_num - Take two char and convert a number
 * @ch1: (char) Postion 2 in 00
 * @ch2: (char) Postion 1 in 0
 *
 * Return: (int) Number of two-digit
 */
int convert_num(char ch1, char ch2)
{
        int num1 = ch1 - '0';
        int num2 = ch2 - '0';

        return ((num1 * 10) + num2);
}


/**
 * print_array - Print a board to the user
 *
 * @board: (int) Map of the matrix that
 *               it show a * how line
 *
 */
void print_array(int board[][COLUMNS])
{
        for (size_t i = 0; i < ROWS; ++i)
        {
                for (size_t j = 0; j < COLUMNS; ++j)
                {
                        if (board[i][j] == 0)
                                printf("%2s", " ");
                        else
                                printf("%2s", "*");
                }
                puts("");
        }
}
