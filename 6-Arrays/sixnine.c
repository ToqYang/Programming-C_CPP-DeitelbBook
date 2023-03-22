#include "stdio.h"
#define ROWS 5
#define COLUMNS 20

double largest(double array[][20]);
double average_2D(double array[][20]);


/**
 * main - Classroom
 *
 * Return: (int) If is success
 */
int main(void)
{
        /* a) Array that Contain Students and Notes
           b-c-d) ROWS 5 COLUMNS 20 Elements 100 */
        double grades[ROWS][COLUMNS] = {0};
        double mathGrades[20] = {10.0};

        /* e) Write all the elements first column */
        for (size_t i = 0; i < ROWS; i++) {
                for (size_t j = 0; j < COLUMNS; j++) {
                        if (j == 1)
                                grades[i][j] = 1;
                }
        }

        /* f) Write ROW 3 COLUMN 2 */
        for (size_t i = 0; i < ROWS; i++) {
                for (size_t j = 0; j < COLUMNS; j++) {
                        if (i == 3)
                                if (j == 2)
                                        grades[i][j] = 7;
                }
        }

        /* g) Assign 100 to COLUMN 1 ROW 2 */
        for (size_t i = 0; i < ROWS; i++) {
                for (size_t j = 0; j < COLUMNS; j++) {
                        if (i == 1)
                                if (j == 2)
                                        grades[i][j] = 100;
                }
        }

        /* i) Initialize values in 0 */
        for (size_t i = 0; i < ROWS; i++) {
                for (size_t j = 0; j < COLUMNS; j++) {
                        grades[i][j] = 0;
                }
        }

        /* j) Copy the mathGrades to */
        for (size_t i = 0; i < ROWS; i++) {
                for (size_t j = 0; j < COLUMNS; j++) {
                        if (i == 1)
                                grades[i][j] = mathGrades[j];
                }
        }

        /* k) Find the highest of the row */
        printf("The sum highest is: %lf\n", largest(grades));

        /* l) Display the column 2 */
        for (size_t i = 0; i < ROWS; i++) {
                for (size_t j = 0; j < COLUMNS; j++) {
                        if (j == 2)
                                printf("Array[%lu][%lu] = %lf\n",
                                       i, j, grades[i][j]);
                }
        }

        /* m) Average  of the first row */
        printf("The value highest:%lf\n", average_2D(grades));

        puts("\n\n\n");

        /* n) Show the Subindex Columns */
        for (size_t j = 0; j < COLUMNS; j++) {
                printf("   [%lu] ", j);
        }

        puts("");

        /* Show the SubIndex Rows */
        for (size_t i = 0; i < ROWS; i++) {
                printf("[%lu]", i);
                for (size_t j = 0; j < COLUMNS; j++)
                        printf("   %.0lf   ", grades[i][j]);

                puts("");
        }

        return (0);
}


/**
 * average_2D - Find the average of the first row of the matrix
 * @array: (double)
 *
 */
double average_2D(double array[][20])
{
        double avg = 0;

        for (int i = 0; i < ROWS; i++) {
                for (int j = 0; j < COLUMNS; j++) {
                        if (i == 1)
                                avg += array[i][j];
                }
        }

        return (avg / 20);
}


/**
 * largest - Find the number largest
 * @array: (double)
 *
 * Return: (double) The largest number of the array
 */
double largest(double array[][20])
{
        double largest = array[1][0];

        // Traversing in matrix
        for (size_t i = 0; i < ROWS; i++) {
                for (size_t j = 0; j < COLUMNS; j++) {
                        // Compare the first index with the follow
                        // numbers and look if this larger
                        if (i == 1)
                                if (largest < array[i][j])
                                        largest = array[i][j];
                }
        }
        return (largest);
}
