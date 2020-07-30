#include <stdio.h>
#include <stddef.h>


void printArray1D(size_t size, int array[size], short int debug);


/**
 * main - (Selection Sort)
 *
 * Organize an array of 10 integers
 *
 * Return: (int) 0 if is success
 */
int main(void)
{
        int array[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
        int idxmin = 0;

        puts("Original array");
        printArray1D(10, array, 0);
        putchar(10);

        for (int i = 0; i < 10; i++) {
                idxmin = i;

                for (int j = i + 1; j < 10; j++) {
                        if (array[j] < array[idxmin])
                        {
                                idxmin = array[j];
                        }
                }

                if (idxmin != i) {
                        int tmp = array[idxmin];
                        array[idxmin] = array[i];
                        array[i] = tmp;
                        printf("Step [%d]: ", i);
                        printArray1D(10, array, 1);
                }
        }

        puts("Selection sort");
        printArray1D(10, array, 0);
        putchar(10);

        return (0);
}



/**
 * printArray1D - Print Scaarsl
 * @size: (size_t) Len of the array
 * @array: (int) Contiguos variable
 *
 */
void printArray1D(size_t size, int array[size], short int debug)
{
        if (debug == 0)
        {
                for (size_t i = 0; i < size; i++)
                        printf("Array[%ld] = %d\n", i, array[i]);
        }
        else
        {
                for (size_t i = 0; i < size; i++)
                {
                        if (i == size - 1)
                                printf("%d\n\n", array[i]);
                        else
                                printf("%d, ", array[i]);
                }
        }
}
