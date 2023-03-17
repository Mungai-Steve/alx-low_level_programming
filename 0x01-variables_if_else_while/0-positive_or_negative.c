#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - where the program starts
 *
 * Return: ends the fuctions and is always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	scanf("%d", &n);

if (n > 0)
{
	printf("n: is positive");
}

else if (n < 0)

{
	printf("n: is negative\n");
}

else if (n == 0)

{
	printf("n: is zero\n");
}

	return (0);
}

