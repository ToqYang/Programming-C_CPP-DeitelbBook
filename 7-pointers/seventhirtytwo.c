#include <stdio.h>
#define TOPICS 5
#define RESPONSES 10

int max(int *av, size_t size);
int min(int *av, size_t size);

/**
 * main - Polling
 *
 * Return: 0 if is success
 */
int main(void)
{
        const char *topics[TOPICS] = {"Privacy data",
                                      "Job",
                                      "FootPrint",
                                      "Space",
                                      "Covid"};

        int polling[TOPICS][RESPONSES] = {0}, avg[TOPICS] = {0};
        int opt = 0, average = 0, fun = 0;

        /* Press data */
        printf("%s  %s\n", "Topics", "Importance(1-10)");
        for (size_t i = 0; i < RESPONSES; ++i) {
                for (size_t j = 0; j < TOPICS; ++j) {
                        printf("%s: ", topics[j]);
                        scanf("%d", &opt);

                        if (opt >= 1 && opt <= 10) {
                                --opt;
                                polling[j][i] = opt;
                        }
                }
                putchar(10);
        }

        /* Average */
        for (size_t k = 0; k < TOPICS; ++k) {
                for (size_t m = 0; m < RESPONSES; ++m) {
                        average += polling[k][m];
                }
                avg[k] = average / RESPONSES;
                average = 0;
        }

        printf("%s %s %s\n", "Topics", "(1-10)", "Average");
        /* Print Data */
        for (size_t i = 0; i < TOPICS; ++i) {
                printf("%s: ", topics[i]);
                for (size_t j = 0; j < RESPONSES; ++j) {
                        printf("%d ", polling[i][j]);
                }
                printf("%d\n", avg[i]);
        }

        puts("");
        fun = min(avg, TOPICS);
        printf("%s\n", topics[fun]);

        fun = max(avg, TOPICS);
        printf("%s\n", topics[fun]);

        return (0);
}



/**
 * min - Find the minimum number
 * @av: (int *) Pass array average
 * @size: (size_t) Length of the array
 *
 * Return: (int) index of the array
 */
int min(int *av, size_t size)
{
        int min = av[0], idx = 0;

        for (size_t i = 1; i < size; ++i) {
                if (av[i] < min) {
                        min = av[i];
                        idx = i;
                }
        }
        printf("The lowest point is %d of the topic: ", min);

        return (idx);
}


/**
 * min - Find the minimum number
 * @av: (int *) Pass array average
 * @size: (int) Length of the array
 *
 * Return: index of the array
 */
int max(int *av, size_t size)
{
        int max = av[0], idx = 0;

        for (size_t i = 1; i < size; ++i) {
                if (av[i] > max) {
                        max = av[i];
                        idx = i;
                }
        }
        printf("The highest point is %d of the topic: ", max);

        return (idx);
}
