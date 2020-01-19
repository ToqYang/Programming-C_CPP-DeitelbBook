#include <stdio.h>

int toYen(int usd);
int toEuro(int usd);
void print(int valYen, int valEur);


/**
 * (Currency Conversion) 
 *
 * main - Foreign exchanges
 * Return: 0 if is success
 */
int main(void)
{
	int usd = 0, eur = 0, yen = 0;

	puts("Enter your number of USD.");
	scanf("%d", &usd);

	yen = toYen(usd);
	eur = toEuro(usd);
	print(yen, eur);

	return (0);
}


/**
 * toYen - Calculate the equivalence of the USD in Yen
 *
 * @usd: Dollars Received
 * Return: The value of Dollars in Yen
 */
int toYen(int usd)
{
	return (usd * 118.87);
}

/**
 * toEuro - Calculate the equivalence of the USD in Euros
 *
 * @usd: Dollars Received
 * Return: The value of Dollars in Euro
 */
int toEuro(int usd)
{
	return (usd * 0.92);
}

/**
 * print - Calculate the printing of Yen and Euro
 *
 * @valYen: (int) Value of the Yen
 * @valEur: (int) Value of the Euro
 */
void print(int valYen, int valEur)
{
	puts("-------------------------");
	printf("Yens: %d", valYen);

	for (int i = 0; i <= valYen; ++i)
	{
		if (i % 30 == 0)
			putchar(10);
		else
			putchar(42);
	}

	puts("\n-------------------------");
	printf("Euros: %d", valEur);

	for (int j = 0; j <= valEur; ++j)
	{
		if (j % 10 == 0)
			putchar(10);
		else
			putchar(42);
	}
	putchar(10);
}
