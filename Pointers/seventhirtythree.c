#include <stdio.h>

void building_foot(void);
void car_foot(void);
void byci_foot(void);


/**
 * main - (Carbon Footprint Calculator)
 *
 * Return: 0 if is success
 */
int main(void)
{
	void (*carbon[3])() = {building_foot, car_foot, byci_foot};
	int opt = 0;

	while (opt != 3) {
		puts("Enter a Choose to Calculate Carbon Footprint");
		puts("    0. Building (THM)");
		puts("    1. Car (Lts spent)");
		puts("    2. Byci (Km Journey)");
		puts("    3. End Program");

		scanf("%d", &opt);

		if (opt != 3)
			(*carbon[opt])();
	}

	return (0);
}


/**
 * building_foot - Carbon footprint of a building
 *
 */
void building_foot(void)
{
	double thm = 0;

	puts("Enter the thermias spents.");
	scanf("%lf", &thm);
	printf("The footprint in your building is: %.2lf lb\n\n", (thm * 11.7));
}


/**
 * car_foot - Carbon footprint based in km
 *
 */
void car_foot(void)
{
	double lts = 0;

	puts("Enter the the lts spents.");
	scanf("%lf", &lts);
	printf("The footprint in your car is: %.2lf kg\n\n", (lts * 2.62));
}


/**
 * byci_foot - Carbon footprint based in km
 *
 */
void byci_foot(void)
{
	double km = 0;

	puts("Enter the km spent.");
	scanf("%lf", &km);
	printf("The footprint in your bycicle is: %.2lf g\n\n", (km * 5));
}
