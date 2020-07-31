#include <stdio.h>


#define COLUMNS 8
#define ROWS 8
#define MOVEMENTS 8


int sanitize_num(int num, int maximum);
int possible_move(int newx, int newy);
void print_2d(int map[ROWS][COLUMNS]);
void print_pos(int x[MOVEMENTS], int y[MOVEMENTS]);
void closed_tour(int map[ROWS][COLUMNS], int hori[MOVEMENTS], int vert[MOVEMENTS]);


/**
 * main - (Knight’s Tour: Closed Tour Test)
 *
 *        Verify if it give a closed tour
 *
 * Return: 0 if is success
 */
int main(void)
{
        int board[ROWS][COLUMNS] = {0}, steps[ROWS][COLUMNS] = {0};
        int horizontal[MOVEMENTS] = {2, 1, -1, -2, -2, -1, 1, 2};
        int vertical[MOVEMENTS] = {-1, -2, -2, -1, 1, 2, 2, 1};

        int posx[MOVEMENTS] = {0}, posy[MOVEMENTS] = {0};
        int movenum = 0, currrow = 3, currcol = 4;
        int countmovements = 1, countpos = 0;
        int accessibility[ROWS][COLUMNS] = {{2, 3, 4, 4, 4, 4, 3, 2},
                                            {3, 4, 6, 6, 6, 6, 4, 3},
                                            {4, 6, 8, 8, 8, 8, 6, 4},
                                            {4, 6, 8, 8, 8, 8, 6, 4},
                                            {4, 6, 8, 8, 8, 8, 6, 4},
                                            {4, 6, 8, 8, 8, 8, 6, 4},
                                            {3, 4, 6, 6, 6, 6, 4, 3},
                                            {2, 3, 4, 4, 4, 4, 3, 2}};
        int posheuristic = 0, min = 0, useheu = 0, k = 0;
        int correctpos[MOVEMENTS] = {0};

        board[currrow][currcol] = 65;

        /* Optional: 64 tours possible */
        for (; countmovements <= 64; ++countmovements) {
                min = accessibility[currcol][currrow];
                for (int i = 0; i < MOVEMENTS; ++i) {
                        posx[i] = currcol + horizontal[i];
                        posy[i] = currrow + vertical[i];
                        if (possible_move(posx[i], posy[i]) == 1) {
                                if (countpos == 0) {
                                        board[posy[i]][posx[i]] = 70;
                                        correctpos[k] = 0;
                                        ++k;
                                } else {
                                        board[posy[i]][posx[i]] = countpos;
                                        correctpos[k] = countpos;
                                        ++k;
                                }
                                if (accessibility[posy[i]][posx[i]] <= min && steps[posy[i]][posx[i]] == 0)
                                {
                                        min = accessibility[posy[i]][posx[i]];
                                        posheuristic = countpos;
                                        ++useheu;
                                }
                        }
                        ++countpos;
                }

                if (useheu == 0)
                        posheuristic = correctpos[useheu];

                while (steps[posy[posheuristic]][posx[posheuristic]] != 0 && useheu < k) {
                        posheuristic = correctpos[useheu];
                        ++useheu;
                        if (possible_move(posx[posheuristic], posy[posheuristic]) == 0) {
                                break;
                                countmovements = 64;
                        }
                }

                movenum = posheuristic;

                /* Introduce the Number of Step */
                puts("\nSteps to the ChessBoard\n");
                steps[currrow][currcol] = countmovements;
                print_2d(steps);

                printf("\nMovements: %d\n", countmovements);
                print_2d(board);

                print_pos(posx, posy);

                /* Clear Screen */
                for (int i = 0; i < ROWS; ++i) {
                        for (int j = 0; j < COLUMNS; ++j) {
                                board[i][j] = 0;
                        }
                }

                currcol += horizontal[movenum];
                currrow += vertical[movenum];

                board[currrow][currcol] = 65;
                countpos = 0;

                posheuristic = 0;
                min = 0;
                useheu = 0;
                k = 0;
        }
        closed_tour(steps, horizontal, vertical);

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
        for (size_t i = 0; i < ROWS; ++i)
        {
                printf("%ld ", i);
                for (size_t j = 0; j < COLUMNS; ++j)
                {
                        if (map[i][j] == 0)
                        {
                                printf("%3s", "-");
                        }
                        if (map[i][j] == 65)
                        {
                                printf("%3s", "K");
                        }
                        else if (map[i][j] >= 1 && map[i][j] <= 64)
                        {
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
        for (size_t i = 0; i < MOVEMENTS; ++i)
        {
                printf("Horizonatal[%ld] = %d\tVertical[%ld] = %d\n",
                       i, x[i], i, y[i]);
        }
}


/**
 * closed_tour - Verify if it's Close Tour
 *               A closed tour occurs when the 64th move is one
 *               move away from the location in which the knight
 *               started the tour.
 * @map: (int) Contain the map of steps of the chessboard
 * @hori: (int) Move predefined in X
 * @vert: (int) Move predefined in Y
 *
 */
void closed_tour(int map[ROWS][COLUMNS], int hori[MOVEMENTS], int vert[MOVEMENTS])
{
        int x = 0, y = 0, posx = 0, posy = 0;

        for (int i = 0; i < MOVEMENTS; ++i) {
                for (int j = 0; j < MOVEMENTS; ++j) {
                        if (map[i][j] == 1)
                        {
                                x = j;
                                y = i;
                        }
                }
        }

        for (size_t k = 0; k < MOVEMENTS; ++k) {
                posx = x + hori[k];
                posy = y + vert[k];

                if (map[posy][posx] == 64) {
                        puts("There a Closed Tour");
                        x = 1;
                        k = 10;
                }
        }
        if (x != 1)
                puts("No there Closed Tour");
}
