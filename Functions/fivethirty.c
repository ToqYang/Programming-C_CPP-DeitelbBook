#include <stdio.h>

int toQualityPoints(int average);

/**
 * main - (Quality Points for Student’s Grades)
 * Return: 0 if is success
 */
int main(void)
{
	int avg = 20, res = 0;

	res = toQualityPoints(avg);
	printf("The value to return is: %d\n", res);

	avg = 65;
	res = toQualityPoints(avg);
	printf("The value to return is: %d\n", res);


	avg = 73;
	res = toQualityPoints(avg);
	printf("The value to return is: %d\n", res);

	avg = 87;
	res = toQualityPoints(avg);
	printf("The value to return is: %d\n", res);
	
	avg = 94;
	res = toQualityPoints(avg);
	printf("The value to return is: %d\n", res);

	avg = 140;
	res = toQualityPoints(avg);
	printf("The value to return is: %d\n", res);

	return (0);
}

/**
 * toQualityPoints - returns 4 it’s 90–100,
 * 3 if it’s 80–89, 2 if it’s 70–79, 1 if it’s 60–69, 
 * and 0 if the average is lower than 60.
 * @average: (int) Average of the students
 * Return: 0 if is success
 */
int toQualityPoints(int average)
{
	if (average >= 90 && average <= 100)
		return (4);

	else if (average >= 80 && average <= 89)
		return (3);
	
	else if (average >= 70 && average <= 79)
		return (2);

	else if (average >= 60 && average <= 69)
		return (1);

	else if (average >= 0 && average < 60)
		return (0);

	puts("Enter correct note.");

	return (-1);
}
