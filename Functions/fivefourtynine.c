#include <stdio.h>

void menu(short int n);
short int qA(short int iteration);
void res(short int correct);
/**
 * main - (Global Warming Facts Quiz)
 * Return: 0, If is success
 */
int main(void)
{
	short int count = 0;

	puts("Global Warming Quiz");

	for (short int i = 1; i <= 5; i++)
	{
		menu(i);
		puts("");
		count += qA(i);
	}
	res(count);

	return (0);
}

/**
 * menu - Print the questions of global warming
 * @n: (short int) Store the number of iteration
 */
void menu(short int n)
{
	switch(n)
	{
		case 1:
			puts("Global warming is caused only by natural factors.");
			puts("1. False");
			puts("2. True");	
			puts("3. I don't now");
			puts("4. The total guilty is the sun");
			
			break;
		case 2:
			puts("Which country currently emits the most greenhouse gases?");
			puts("1. Rusia");
			puts("2. EE.UU");	
			puts("3. India");
			puts("4. China");

			break;
		case 3:
			puts("Which of the following lightbulb types uses the least energy, and therefore results in fewer greenhouse gas emissions?");
			puts("1. Incandescent");
			puts("2. Compact flourescent");	
			puts("3. Halogen");
			puts("4. I don't now");

			break;
		case 4:
			puts("How many human deaths per year does the World Health Organization attribute to climate change?");
			puts("1. 100.000");
			puts("2. 75.000");	
			puts("3. 150.000");
			puts("4. 1.600.000");

			break;

		case 5: 
			puts("Which of the following industries could be negatively affected by global warming?");
			puts("1. Insurance");
			puts("2. Commercial fishing");
			puts("3. All the above");
			puts("4. Wine making");

			break;
		default:
			puts("The iteration is incorrect.");
			break;
	}

}

/**
 * qA - Verify the correct answer
 * @iteration: (short int) Store the number of iteration
 * Return: 1 if the number of the answer is correct
 */
short int qA(short int iteration)
{
	short int num = 0;

	scanf(" %hi", &num);

	if (iteration == 1 && num == 1)
		return (1);
	
	else if (iteration == 2 && num == 4)
		return (1);

	else if (iteration == 3 && num == 2)
		return (1);

	else if (iteration == 4 && num == 3)
		return (1);

	else if (iteration == 5 && num == 3)
		return (1);
	else 
		return (-1);

	return (0);
}

/**
 * res - Print a message about results
 * @correct: (short int) Store the number of correct answer
 */
void res(short int correct)
{
	switch (correct)
	{
		case 1:
		case 2:
		case 3:
			puts("Time to brush up on your knowledge of global warming.");
			puts("https://www.nationalgeographic.com/environment/global-warming/global-warming-overview/");
			puts("https://www.livescience.com/topics/global-warming");
			puts("https://climate.nasa.gov/causes/");
			break;

		case 4:
			puts("Very good!");
			break;
		case 5:
			puts("Excellent!");
			break;

		default:
			puts("This is imposible");
			break;
	}
}
