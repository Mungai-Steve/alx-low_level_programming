#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - minimum number of coins to make change for an amount of money.
 * @argc: argument count
 * @argv: argument vector
 * Return: success if 0
 */

int main(int argc, char **argv)
{
	int cents, sum = 0;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	cents = atoi(*++argv);
	if (cents < 0)
	{
		puts("0");
		return (0);
	}
	if (cents / 25)
	{
		sum += cents / 25;
		cents %= 25;
	}
	if (cents / 10)
	{
		sum += cents / 10;
		cents %= 10;
	}
	if (cents / 5)
	{
		sum += cents / 5;
		cents %= 5;
	}
	if (cents / 2)
	{
		sum += cents / 2;
		cents %= 2;
	}
	sum += cents;
	printf("%d\n", sum);
	return (0);
}
