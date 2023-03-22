#include <stdio.h>


/**
 * main - (goto Statement)
 *        Print square
 *
 * Return: (int) 0 if is success
 */
int main(void)
{
        int i = 0, j = 0, k = 0;

        start:
                if (i == 5)
                {
                        printf("%s", "\n");
                        ++j;

                        if (j == 2)
                        {
                                printf("%s", "\n");
                                goto end;
                        }
                        i = 1;
                        goto sides;
                }
                printf("%s", "*");
                ++i;
                goto start;

        sides:
                printf("%s", "*");

                if (i == 4)
                {
                        printf("%s", "\n");
                        printf("%s", "*");
                        if (k == 3)
                        {
                                i = 1;
                                goto start;
                        }
                }

                ++k;
                i = 1;
                goto between;
        between:
                if (i == 4)
                        goto sides;

                printf("%s", " ");
                ++i;
                goto between;
        end:

        return (0);
}
