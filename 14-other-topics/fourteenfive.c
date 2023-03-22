#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <signal.h>


void signal_handler(int signalNum);

/**
 * main - (Signal Handling)
 *        Print all signals
 *
 * Return: 0 if is success
 */
int main(void)
{
	signal(SIGINT, signal_handler);
	signal(SIGABRT, signal_handler);
	srand(time(NULL));

	abort();

	for (int i = 0; i <= 1000; ++i) {
		int x = 1 + rand() % 31;

		printf("%3d ", i);

		if (x == 25)
		  raise(SIGINT);

		if (i % 8 == 0)
			putchar(10);
	}

	return (0);
}


/**
 * signal_handler - Register of the signal produced
 * @signalNum: (int) Number of the signal
 *
 */
void signal_handler(int signalNum)
{
	int respo = 0;

	printf("\nEnter signal is: %d\n", signalNum);
	puts("Enter the 1 to interrupt or 2 to the next");
	scanf("%d", &respo);

	while (respo != 1 && respo != 2) {
		puts("ENTER 1 OR 2");
		scanf("%d", &respo);
	}

	if (respo == 1) {
		signal(signalNum, signal_handler);
	} else {
		exit(EXIT_SUCCESS);
	}
}
