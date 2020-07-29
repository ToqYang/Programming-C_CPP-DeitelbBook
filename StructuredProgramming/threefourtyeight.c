#include <stdio.h>


/**
 * main - Print number encrypted
 *
 * (Enforcing Privacy with Cryptography)
 * 1) We add 7 at the number
 * 2) Find the reaminder of the division between 10
 * 3) Swap the 3-1 and 4-2
 *
 * For decrypted reverse the scheme and see the module if is 0
 *
 * Return: 0 If, is successful
 */
int main(void)
{
        int num1 = 0, num2 = 0, num3 = 0, num4 = 0, number = 0;
        int num_Encrypted = 0, num_Dcry = 0;

        /* ENCRYPTED */

        printf("Enter the four number: ");
        scanf("%d", &number);

        /* Take each position number and add +7 */
        num1 = ((number / 1000) + 7);
        num2 = (((number / 100) % 10) + 7);
        num3 = (((number / 10) % 10) + 7);
        num4 = ((number % 10) + 7);

        /* Take out the module to 10 */
        num1 = num1 % 10;
        num2 = num2 % 10;
        num3 = num3 % 10;
        num4 = num4 % 10;

        /* Multiply because, I need add in that order */

        /* Swap positions 3-1 */
        num3 *= 1000;
        num1 *= 10;

        /* Swap positions 2-4 */
        num2 *= 1;
        num4 *= 100;

        /* Sum the values for print the number encrypted */
        num_Encrypted += num3;
        num_Encrypted += num4;
        num_Encrypted += num1;
        num_Encrypted += num2;

        printf("The number encrypted is: %d\n", num_Encrypted);

        /* DECRYPTED */

        /* Get the number other time */
        num3 = ((num_Encrypted / 1000));
        num4 = (((num_Encrypted / 100) % 10));
        num1 = (((num_Encrypted / 10) % 10));
        num2 = (num_Encrypted % 10);

        /* Inverse operation for find the number initial */
        num3 = ((num3 + 10) - 7);
        num4 = ((num4 + 10) - 7);
        num1 = ((num1 + 10) - 7);
        num2 = ((num2 + 10) - 7);

        /* If the result if greater than 10 then el module was 0,
                then decrement in 10 each number */
        if (num1 >= 10)
        {
                num1 -= 10;
        }
        if (num2 >= 10)
        {
                num2 -= 10;
        }
        if (num3 >= 10)
        {
                num3 -= 10;
        }
        if (num4 >= 10)
        {
                num4 -= 10;
        }

        /* Swap positions 3-1 */
        num1 *= 1000;
        num3 *= 10;

        /* Swap positions 4-2 */
        num4 *= 1;
        num2 *= 100;

        /* Sum for get only one number */
        num_Dcry += num1;
        num_Dcry += num2;
        num_Dcry += num3;
        num_Dcry += num4;

        printf("\nThe number decrypted is: %d\n", num_Dcry);

        return (0);
}
