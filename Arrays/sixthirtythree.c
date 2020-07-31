#include <stdio.h>


size_t binary_search(const int b[], int searchKey, size_t low, size_t high);


/**
 * main - (Binary Search) in recursion
 *
 * Return: (int) 0 If is success
 */
int main(void)
{
        int elem[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

        printf("Search Key: 8\nIndex = %ld\n",
               binary_search(elem, 8, 0, 10 - 1));

        return (0);
}


/**
 * binary_search - Is this or is this 0-1
 * @b: (int [])
 * @searchKey: (int) Num to search in array
 * @low: (int) Left part of the array
 * @hight: (int) Right part of the array
 *
 * Return: (size_t) Index of the num, otherwise -1
 */
size_t binary_search(const int b[], int searchKey, size_t low, size_t high)
{
        if (high >= low)
        {
                int middle = ((low + high) / 2) - 1;

                if (searchKey == b[middle])
                        return (middle);
                if (searchKey > b[middle])
                        return binary_search(b, searchKey, middle + 1, high);
                return binary_search(b, searchKey, low, middle - 1);
        }

        return (-1);
}
