#include <stdio.h>
#include <time.h>
#include <stdlib.h>


#define COLUMNS 8
#define ROWS 8
#define MOVEMENTS 8


int sanitize_num(int num, int maximum);
int possible_move(int newx, int newy);
void print_2d(int map[ROWS][COLUMNS]);
void print_pos(int x[MOVEMENTS], int y[MOVEMENTS]);
int posible_positions(int pos[MOVEMENTS], int size);
void full_tour(int his[MOVEMENTS]);


/**
 * main - (Knight’s Tour: Brute-Force Approaches)
 *
 * Return: 0 if is success
 */
int main(void)
{
        /* b) Chessboard and Position */
        int board[ROWS][COLUMNS] = {0}, steps[ROWS][COLUMNS] = {0};
        int horizontal[MOVEMENTS] = {2, 1, -1, -2, -2, -1, 1, 2};
        int vertical[MOVEMENTS] = {-1, -2, -2, -1, 1, 2, 2, 1};

        int posx[MOVEMENTS] = {0}, posy[MOVEMENTS] = {0};
        int movenum = 0, currrow = 3, currcol = 4;
        int countmovements = 1, countpos = 0;

        int k = 0, j = 0;
        int correctpos[MOVEMENTS] = {0};

        int histogram[1000] = {0};
        int emptyfields = 0;

        /* Initialize King */
        board[currrow][currcol] = 65;
        srand(time(0));

        /* Proccess 1000 Tours */
        for (int l = 0; l < 1000; ++l) {
                /* Optional: 1 tour possible */
                for (countmovements = 1; countmovements <= 64; ++countmovements) {
                        for (int i = 0; i < MOVEMENTS; ++i)
                        {
                                posx[i] = currcol + horizontal[i];
                                posy[i] = currrow + vertical[i];
                                if (possible_move(posx[i], posy[i]) == 1) {
                                        if (countpos == 0)
                                        {
                                                board[posy[i]][posx[i]] = 70;
                                                correctpos[k] = 0;
                                                ++k;
                                        } else {
                                                board[posy[i]][posx[i]] = countpos;
                                                correctpos[k] = countpos;
                                                ++k;
                                        }
                                }
                                ++countpos;
                        }

                        /* Look If Is Posible Movement */
                        movenum = posible_positions(correctpos, k);
                        while (steps[posy[movenum]][posx[movenum]] != 0) {
                                movenum = posible_positions(correctpos, k);
                                ++j;
                                if (j < k)
                                        break;
                        }
                        steps[currrow][currcol] = countmovements;

                        /* Clear Screen */
                        for (int i = 0; i < ROWS; ++i) {
                                for (int j = 0; j < COLUMNS; ++j) {
                                        board[i][j] = 0;
                                }
                        }

                        /* Store New Position Introduce to the User*/
                        currcol += horizontal[movenum];
                        currrow += vertical[movenum];

                        /* Put the K in the Position Choosed */
                        board[currrow][currcol] = 65;
                        countpos = 0;
                        k = 0;
                        j = 0;
                }

                /* Count Empty fields */
                for (int i = 0; i < ROWS; ++i) {
                        for (int j = 0; j < COLUMNS; ++j) {
                                if (steps[i][j] == 0) {
                                        ++emptyfields;
                                }
                        }
                }
                histogram[l] = emptyfields;
                emptyfields = 0;

                /* Clear Count Movements */
                for (int i = 0; i < ROWS; ++i) {
                        for (int j = 0; j < COLUMNS; ++j) {
                                steps[i][j] = 0;
                        }
                }
        }

        /* Print Min Position and find the Min Tour*/
        full_tour(histogram);
        print_2d(board);

        return (0);
}



/**
 * sanitize_num - Purge posible bad numbers
 * @num: (int) Copy of the number to look if is correct
 * @maximum: (int) Size of the maximum of values
 *
 * Return: (int) 1 if the number is correct, otherwise 0
 */
int sanitize_num(int num, int maximum)
{
        return ((num <= maximum && num >= 0) ? 1 : 0);
}


/**
 * possible_move - Look if the follow movement is possible
 * @newx: (int) Number of the possible position x
 * @newy: (int) Number of the possible position y
 *
 * Return: (int) 1 if the movement is posible, otherwise 0
 */
int possible_move(int newx, int newy)
{
        return (((newx >= 0 && newx <= 7) && (newy >= 0 && newy <= 7)) ? 1 : 0);
}


/**
 * print_2d - Print the chessboard
 * @map: (int) Matrix to print
 *
 */
void print_2d(int map[ROWS][COLUMNS])
{
        printf("    0  1  2  3  4  5  6  7\n");
        for (size_t i = 0; i < ROWS; ++i) {
                printf("%ld ", i);
                for (size_t j = 0; j < COLUMNS; ++j) {
                        if (map[i][j] == 0) {
                                printf("%3s", "-");
                        }
                        if (map[i][j] == 65) {
                                printf("%3s", "K");
                        } else if (map[i][j] >= 1 && map[i][j] <= 64){
                                printf(" %2d", map[i][j]);
                        }
                        if (map[i][j] == 70)
                                printf("%3s", "0");
                }
                putchar(10);
        }
}


/**
 * print_pos - Print the position vertical and horizontal
 * @x: (int) Print the position in x
 * @y: (int) Print the position in y
 *
 */
void print_pos(int x[MOVEMENTS], int y[MOVEMENTS])
{
        for (size_t i = 0; i < MOVEMENTS; ++i) {
                printf("Horizonatal[%ld] = %d\tVertical[%ld] = %d\n",
                       i, x[i], i, y[i]);
        }
}


/**
 * posible_positions - a) Give a random number to move
 * @pos: (int) Contiguos memory with the possible positions
 * @size: (int) Length of valid values of the array
 *
 * Return: (int) The number to movement
 */
int posible_positions(int pos[MOVEMENTS], int size)
{
        int move = 0;

        move = (rand() % size);

        return (pos[move]);
}


/**
 * full_tour - Find in a Histogram which was a full tour
 * @his: (int) Historial of the empty fields
 */
void full_tour(int his[MOVEMENTS])
{
        int min = his[0], i = 0;
        for (; i < 1000; ++i)
        {
                if (his == 0)
                        printf("Full Tour\nidx: %d", i);
                if (his[i] <= min)
                        min = his[i];
        }
        printf("Best empty field is.\n\nValue: %d\n", min);
}
