#include <stdio.h>


struct customer {
	char lastName[15];
	char firstName[15];
	unsigned int customerNumber;
	struct {
		char phoneNumber[11];
		char address[50];
		char city[15];
		char state[3];
		char zipCode[6];
	} personal;

} customerRecord, *customerPtr;


/**
 * main - Give Strtuctures and Definitions
 *
 * Return: 0 if is Success
 */
int main(void)
{
	customerPtr = &customerRecord;

	printf("A) Last Name: %s\n", customerRecord.lastName);
	printf("B) Last Name ptr: %s\n", (*customerPtr).lastName);
	printf("C) First Name: %s\n", customerRecord.firstName);
	printf("D) First Name ptr: %s\n", (*customerPtr).firstName);
	printf("E) Customer Number: %d\n", customerRecord.customerNumber);
	printf("E) Customer Number ptr: %d\n", (*customerPtr).customerNumber);
	printf("G) Phone Number: %s\n", customerRecord.personal.phoneNumber);
	printf("H) Phone Number ptr: %s\n", (*customerPtr).personal.phoneNumber);
	printf("I) Address: %s\n", customerRecord.personal.address);
	printf("J) Address ptr: %s\n", (*customerPtr).personal.address);
	printf("K) City: %s\n", customerRecord.personal.city);
	printf("L) City ptr: %s\n", (*customerPtr).personal.city);
	printf("I) State: %s\n", customerRecord.personal.state);
	printf("J) State ptr: %s\n", (*customerPtr).personal.state);
	printf("I) Zip Code: %s\n", customerRecord.personal.zipCode);
	printf("J) Zip Code ptr: %s\n", (*customerPtr).personal.zipCode);

	return (0);
}
