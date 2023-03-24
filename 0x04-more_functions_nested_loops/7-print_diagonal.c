#include "main.h"
/**
 * @n: integer
 * print_diagonal - print diagonal line
 */

void print_diagonal(int n)

{

	int i, j;

	if (n <= 0)

	{

	_putchar('\n');

	}

	for (i = 0; i < n; i++)

	{

	for (j = 0; j < n; j++)

	{

	if (j == i)

	_putchar(92);

	else

	_putchar(32);
}
	_putchar('\n');
}

}


