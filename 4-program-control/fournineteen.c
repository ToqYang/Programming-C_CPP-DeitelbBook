#include <stdio.h>


/**
 * main - (Calculating Sales)
 *
 * Write a program that reads a series of pairs of numbers as follows:
 * a) Product number
 * b) Quantity sold for one day
 *
 * Your program should use a switch statement
 * to help determine the retail price for each product.
 *
 * Your program should calculate and display
 * the total retail value of all products sold last week.
 *
 *   Product number Retail price
 * 	1		$ 2.98
 * 	2 		$ 4.50
 * 	3 		$ 9.98
 * 	4 		$ 4.49
 * 	5 		$ 6.87
 *
 * Return: 0 if is success
 */
int main(void)
{
        int id = 0, quantity = 0;
        float total_Sales = 0.0, retail_Price = 0.0;

        printf("Enter the product number: ");
        scanf("%d", &id);

        printf("Enter quantity sold: ");
        scanf("%d", &quantity);

        switch (id)
        {
        case 1:
                retail_Price = 2.98;
                total_Sales = retail_Price * quantity;
                break;

        case 2:
                retail_Price = 4.50;
                total_Sales = retail_Price * quantity;
                break;

        case 3:
                retail_Price = 9.98;
                total_Sales = retail_Price * quantity;
                break;

        case 4:
                retail_Price = 4.49;
                total_Sales = retail_Price * quantity;
                break;

        case 5:
                retail_Price = 6.87;
                total_Sales = retail_Price * quantity;
                break;

        default:
                puts("Enter un correct value: (1-5)");
                break;
        }

        printf("The total sale is; %.2f\n", total_Sales);

        return (0);
}
