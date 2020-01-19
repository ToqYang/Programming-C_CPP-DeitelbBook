#include <stdio.h>

double calculate_Charges(int hours, int customer, double pay_plan);

/**
 * main - Print a rent car
 * Missing to terminate this exercise
 * Return: 0 if is success and 1 if this fail
 */
int main(void)
{
	int time = 0, cus = 0, count_cars = 1, t_hours = 0;
	double pay_plann = 0, cash = 0, total = 0;

	puts("Car\tHours\tCharge");

	while (time != -1)
	{
		printf("%d\t", count_cars);
		scanf("%d\t", &time);

		if (time == -1)
			break;
		
		if (time <= 24)
		{
			cus = 0;
			pay_plann = 25;
		}
		else if (time >= 25 && time <= 72)
		{
			cus = 1;
			pay_plann = 50;
		}
		else if (time >= 73)
		{
			cus = 2;
			pay_plann = 50;
		}
		else
		{
				puts("Enter correct value");
				return (1);
		}

		cash = calculate_Charges(time, cus, pay_plann);
		printf(" %lf\n", cash);
		total += cash;
		t_hours += time;

		++count_cars;
	}
	printf("TOTAL:\t%d\t%lf\n", t_hours, total);

	return (0);
}

/**
 * calculate_Charges - Print value charges of a car rent
 * @hours: Quantity of hour rent
 * @customer: Value between 0-2 for choose the plan
 * @pay_plan: The cost depend of the plan
 * Return: Total Charges
 */
double calculate_Charges(int hours, int customer, double pay_plan)
{
	double result = 0;

	/** 
	 *  If the id the customer is 0
	 *  Pay: %25 -> 8 hours
	 *  if exceed the 8 hours pay
	 *  5 per extra hour
	 */
	if (customer == 0)
	{
		if (hours <= 8)
			result = pay_plan;

		result = (((hours - 8) * 5) + pay_plan);  
	}


	/**
	 * If id is 1
	 * Pay: $50 -> all day
	 * Also pay 0.50 per hour  
	*/
	else if (customer == 1 && hours < 72)
	{
		result = ((hours * 0.50) + pay_plan);

	}

	/**
	 * If id is 2
	 * Pay: Daily $50
	 * Calculate the days in hours
	*/
	else if (customer == 2 && hours > 72)
	{
		int days = 0;

		/** Calculate the number of days 
		 *  through hours 
		 */
		for (; hours <= 0; days++)
			hours -= 24;

		result = (days * pay_plan);
	}
	return (result);
}

