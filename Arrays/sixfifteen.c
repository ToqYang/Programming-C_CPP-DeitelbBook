#include <stdio.h>
#include <stddef.h>


void printArray1D(size_t size, int array[size], short int debug);
int is_equal(int n1, int n2);


/**
 * main- (Intersection of Sets)
 *
 *  Display the unique elements
 *  common to both sets of numbers.
 *
 * Return: (int) 0 if is success
 */
int main(void)
{
        int arr1[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 100};
        int arr2[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 100};
        int set[20] = {0};
        int itr = 0, add1 = 0, add2 = 0;

        puts("Sets");
        printArray1D(10, arr1, 1);
        printArray1D(10, arr2, 1);
        putchar(10);

        for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                        add1 = is_equal(arr1[i], arr2[j]);
                        add2 = is_equal(arr2[i], arr1[j]);
                }
                if (add1 == 0) {
                        set[itr] = arr1[i];
                        itr++;
                }

                if (add2 == 0) {
                        set[itr] = arr2[i];
                        itr++;
                }
        }

        puts("Union Set");
        printArray1D(20, set, 1);
        putchar(10);

        return (0);
}



/**
 * printArray1D - Print Scalars
 * @size: (size_t) Len of the array
 * @array: (int) Contiguos variable
 * @debug: (short int) Debug mode
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


/**
 * is_equal - Look if a number is equal
 * @n1: (int) First number to compare
 * @n2: (int) Second number to compare
 *
 * Return: (int) 1 If it's equal and 0 if it isn't
 */
int is_equal(int n1, int n2)
{
        return (n1 == n2 ? 1 : 0);
}
