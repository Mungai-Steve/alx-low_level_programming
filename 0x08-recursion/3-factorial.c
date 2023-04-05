#include "main.h"
#include <stdio.h>

/**
 * factorial - calculate facorial of an integer n
 * @n: integer
 * Return: -1 if error, 1 if n = 0, j = n!
 */
int factorial(int n)
{
	int j;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else if (n > 0)

		j = n * factorial(n - 1);
	return (j);

}
