#include <stdio.h>
/* a) Define constant equal to 3 */
#define SIZE 3

int main(void)
{
        /* a) Define integer matrix with 3 rows and columns */
        int table[SIZE][SIZE] = {{1}, {1}};

        /* Define the control variables */
        int x = SIZE, y = SIZE;

        /* b) How manny elements there inside array */
        printf("Total number of elements of the matrix is: %d\n",
               x * y);

        /* Initializes matrix with 0 */
        x = 0;
        y = 0;

        for (; x < SIZE; x++) {
                for (y = 0; y < SIZE; y++) {
                        table[x][y] = 0;
                        printf("%d ", table[x][y]);
                }
                puts("");
        }

        puts("");

        x = 0;
        y = 0;

        /* Initialize matrix with these values and print */
        int otable[SIZE][SIZE] = {
            {1, 8},
            {2, 4, 6},
            {5}};

        for (; x < SIZE; x++) {
                for (y = 0; y < SIZE; y++)
                        printf("table[%d][%d] = %d\n", x, y, otable[x][y]);
        }

        return (0);
}
