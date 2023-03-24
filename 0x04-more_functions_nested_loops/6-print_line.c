#include "main.h"

/**
 * print_line - print line int the terminal
 *
 * @n: number of time '_' is goin gto be printed
 */

void print_line(int n)

{
	int i;

	if (n <= 0)
	{
	_putchar('\n');
	}
	for (i = 1; i <= n; i++)

	{
	_putchar(95);
	}

	_putchar('\n');

}
