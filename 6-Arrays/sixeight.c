#include <stdio.h>
#include <stddef.h>

#define ROWS 4
#define COLUMNS 5


int largest(int array[][5]);
int smallest(int array[][5]);
int CopyArr(int array[]);
void printArray1D(size_t size, int array[size]);
void printArray2D(size_t row, size_t column, int array[row][column]);
int sumArray1D(size_t size, int array[size]);
void modifyArray2D(size_t row, size_t column, int array[row][column], int key);
void sumDifferences(size_t arr, double array1[arr], double array2[arr]);


/**
 * main - Contain diferent operations with matrix
 *
 * Return: (int) 0 if is success
 */
int main(void)
{
        /*a) Multiply the element 4 per 3 */
        int n[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
        int m[3][3];
        int sales[ROWS][COLUMNS] = {
            {1, 2, 4, 54},
            {1, 8, 6, 7},
            {-1, -5, -15},
            {50, 40, 30},
        };
        int num1[200] = {1}, num2[100] = {0};
        double d1[100] = {100}, d2[100] = {50};

        /* a) Print */
        printArray1D(10, n);

        /* b) Add all elements */
        printf("The sum of all: %d\n", sumArray1D(10, n));

        /* c) Initialize array in a two dimensional */
        modifyArray2D(3, 3, m, 3);
        printArray2D(3, 3, m);

        /* d) Find smallest and largest inside array */
        printf("The largest number is: %d\n", largest(sales));
        printf("The smallest number is: %d\n", smallest(sales));

        /* e) Copy 100 elements */
        puts("-----Original array------\n");
        printArray1D(200, num1);
        for (int i = 99; i < 200; i++)
        {
                num1[i] = num2[i - 99];
        }
        puts("-----Modify array------\n");
        printArray1D(200, num1);

        /* f) Determine the sum and difference */
        sumDifferences(100, d1, d2);

        return (0);
}



/**
 * largest - Find the number largest
 * @array: (int) Contain different Numbers
 *
 * Return: (int) The largest number of the array
 */
int largest(int array[][5])
{
        int largest = array[0][0];

        /* Traversing in matrix */
        for (size_t i = 0; i < ROWS; i++)
        {
                for (size_t j = 0; j < COLUMNS; j++)
                {
                        /* Compare the first index with the follow
                           numbers and look if this larger */
                        if (largest < array[i][j])
                                largest = array[i][j];
                }
        }

        return (largest);
}


/**
 * smallest - Find the number smallest
 * @array: (int)
 *
 * Return: (int) The smallest number of the array
 */
int smallest(int array[][5])
{
        int smallest = array[0][0];

        /* Traversing in matrix */
        for (size_t i = 0; i < ROWS; i++)
        {
                for (size_t j = 0; j < COLUMNS; j++)
                {
                        /* Compare the first index with the follow
                           numbers and look if this smaller */
                        if (smallest > array[i][j])
                                smallest = array[i][j];
                }
        }

        return (smallest);
}


/**
 * printArray1D - Print Scalars
 * @size: (size_t) Len of the array
 * @array: (int) Contiguos variable
 */
void printArray1D(size_t size, int array[size])
{
        for (size_t i = 0; i < size; i++)
                printf("Array[%lu] = [%d]\n", i, array[i]);
}


/**
 * printArray2D - Print the matrix
 * @row: (size_t) Number of the array
 * @column: (size_t) Number of the array
 * @array: (int) Contiguos variable
 *
 */
void printArray2D(size_t row, size_t column, int array[row][column])
{
        for (size_t i = 0; i < row; i++) {
                for (size_t j = 0; j < column; j++) {
                        printf("Array[%lu][%lu] = %d\n", i, j, array[i][j]);
                }
        }
}


/**
 * sumArray1D - Sum all the element of a array 1D
 * @size: Length of the array
 * @array: Contiguos data to sum
 *
 * Return: (int)Number with the sum of the array
 */
int sumArray1D(size_t size, int array[size])
{
        int total = 0;

        for (size_t i = 0; i < size; i++)
                total += array[i];

        return (total);
}


/**
 * modifyArray2D - Modify a element of a the matrix
 * @size: Len of the array
 * @array: (int) Contiguos variable
 * @key: Value to put
 */
void modifyArray2D(size_t row, size_t column, int array[row][column], int key)
{
        for (size_t i = 0; i < row; i++) {
                for (size_t j = 0; j < column; j++)
                        array[i][j] = key;
        }
}


/**
 * sumDifferences - Print the sum and diferences of two arrays
 * with same number of items
 * @arr1: Lenght of the first array
 * @arr2: Lenght of the second array
 * @array1: (int) Contiguos variable
 * @array2: (int) Contiguos variable
 *
 */
void sumDifferences(size_t arr, double array1[arr], double array2[arr])
{
        double sum[100] = {0}, difference[100] = {0};

        puts("Sum\t\tDifferences\n");

        for (size_t i = 0; i < arr; i++) {
                sum[i] = array1[i] + array2[i];
                difference[i] = array1[i] - array2[i];
                printf("%lf\t\t %lf\n", sum[i], difference[i]);
        }
}
