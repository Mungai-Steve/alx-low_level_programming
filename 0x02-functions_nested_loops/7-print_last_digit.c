#include "main.h"

/**
 * print_last_digit - print last digit
 *
 * @c: integer to be computed
 *
 * Return: program ends
 */


int print_last_digit(int c)

{

	int digit;

	digit = c % 10;
	if (digit < 0)

{
	digit = digit * -1;
}
{
	_putchar(digit + '0');
}
	return (digit);
}


