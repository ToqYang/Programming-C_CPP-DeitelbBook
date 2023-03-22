#include <stdio.h>


/**
 * main - (Product of two matrix)
 *
 * Multiply two matrix
 *
 * Return: 0 If is success
 */
int main(void)
{
        int m1[2][2] = {{-5, 3}, {4, 7}};
        int m2[2][2] = {{9, 0}, {2, -5}};
        int m3[2][2] = {{0, 0}, {0, 0}};

        m3[0][0] = (m1[0][0] * m2[0][0]) + (m1[0][1] * m2[1][0]);
        m3[0][1] = (m1[0][0] * m2[0][1]) + (m1[0][1] * m2[1][1]);
        m3[1][0] = (m1[1][0] * m2[0][0]) + (m1[1][1] * m2[1][0]);
        m3[1][1] = (m1[1][0] * m2[0][1]) + (m1[1][1] * m2[1][1]);

        for (size_t i = 0; i < 2; i++) {
                for (size_t j = 0; j < 2; j++) {
                        printf("%d ", m3[i][j]);
                }
                puts("");
        }

        return (0);
}
