#include <stdio.h>

int timeInSeconds(int hours, int minutes, int seconds);
int diffsec(int timeA, int timeB);

/**
 * (Time in Seconds)
 *
 * main - Print the difference of two times
 * Return: 0 if is success
 */
int main(void)
{
	int h = 0, m = 0, s = 0, diff = 0, tA = 0, tB = 0;

	printf("Enter the h:mm:\n");
	scanf("%d %d %d", &h, &m, &s);
	tA = timeInSeconds(h, m, s);

	printf("Enter the h:mm:s\n");
	scanf("%d %d %d", &h, &m, &s);
	tB = timeInSeconds(h, m, s);

	diff = diffsec(tA, tB);

	printf("The time in seconds of A is: %d sec\n", tA);
	printf("The time of B in seconds is: %d sec\n", tB);
	printf("The difference of time is: %d sec\n", diff);

	return (0);
}

/**
 * timeInSeconds - Find the time in seconds
 *
 * @hours: (int) Hours
 * @minutes: (int) Minutes
 * @seconds: (int) Seconds
 *
 * Return: Time in seconds
 */
int timeInSeconds(int hours, int minutes, int seconds)
{
	int result = 0;

	result += ( hours * 3600 );
	result += ( minutes * 60 );
	result += seconds;

	return (result);
}

/**
 * diffsec - Find the time in seconds
 *
 * @timeA: (int) First
 * @timeB: (int) Second
 * Return: Difference of time in seconds
 */
int diffsec(int timeA, int timeB)
{
	return (timeA - timeB);
}
