#include <stdio.h>

/*
 * (Calculating Credit Limits) Collecting money becomes increasingly difficult during peri-
 * ods of recession, so companies may tighten their credit limits to prevent their accounts receivable
 * (money owed to them) from becoming too large. In response to a prolonged recession, one company
 * has cut its customers’ credit limits in half. Thus, if a particular customer had a credit limit of $2000,
 * it’s now $1000. If a customer had a credit limit of $5000, it’s now $2500. Write a program that
 * analyzes the credit status of three customers of this company. For each customer you’re given:
 * a) The customer’s account number.
 * b) The customer’s credit limit before the recession.
 * c) The customer’s current balance (i.e., the amount the customer owes the company).
 * Your program should calculate and print the new credit limit for each customer and should
 * determine (and print) which customers have current balances that exceed their new credit limits
 */

/* 
 * main - Print the number account, current balance and credi limit
 * Return: 0 if is success
 */

int main(void)
{
	int acc_number = 0, cred_lim = 0, bal_curr = 0, cred_rec = 0;

	while (1)
	{

		printf("Enter the number account: ");
		scanf("%d", &acc_number);

		if (acc_number == -1)
			break;

		printf("Enter the current limit of credit: ");
		scanf("%d", &cred_lim);

		printf("Enter your current balance: ");
		scanf("%d", &bal_curr);

		cred_rec = cred_lim / 2;

		if (bal_curr > cred_rec)
		{
			puts("You have the limit exceed");
		}
		printf("Number account is: %d\nCredit before of the recesion: $%d\nCredit after of the recesion: $%d\nCurrent Balance: $%d\n", acc_number, cred_lim, cred_rec, bal_curr);

	}
	return (0);
}
