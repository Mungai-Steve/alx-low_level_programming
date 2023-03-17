#include <stdio.h>

/**
 * main - program starts here
 *
 * sizeof - retursn the size of an expression or even as an operator
 *
 * Return: ends the function
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char is: %lu bytes\n", (unsigned long)sizeof(a));
	printf("size of an int is: %lu bytes(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int is: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int is: %lu bytes(s)\n",
	(unsigned long)sizeof(d));
	printf("size of a float is: %lu bytes(s)\n", (unsigned long)sizeof(e));

	return (0);
}
