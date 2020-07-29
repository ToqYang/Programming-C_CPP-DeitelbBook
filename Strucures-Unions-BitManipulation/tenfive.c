#include <stdio.h>

/* A) */
struct inventory {
	char partName[30];
	float price;
	int partNumber;
	int stock;
	int reorder;
};

/* B) */
union data {
	double d;
	long b;
	float f;
	short s;
	char c;
};

/* C) */
struct addresss {
	char streetAddress[25];
	char city[20];
	char zipCode[6];
	char state[3];
};

/* D) */
struct student {
	char firstName[15];
	char lastName[15];
	struct address *homeAddress;
};

/* 16 Bits Fields; Width: 1 */
struct test {
	unsigned int a: 1;
	unsigned int b: 1;
	unsigned int c: 1;
	unsigned int d: 1;
	unsigned int e: 1;
	unsigned int f: 1;
	unsigned int g: 1;
	unsigned int h: 1;
	unsigned int i: 1;
	unsigned int j: 1;
	unsigned int k: 1;
	unsigned int l: 1;
	unsigned int m: 1;
	unsigned int n: 1;
	unsigned int o: 1;
	unsigned int p: 1;
};

/**
 * main - Provide definitions about unions, structs, bit fields
 *
 * Return: 0 if is Success
 */
int main(void)
{
	return (0);
}
