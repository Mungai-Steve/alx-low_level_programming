#include "main.h"

/**
 * print_sign - check the sign of number
 *
 * @n: number to be checked
 *
 * Return: sign of number
 */

int print_sign(int n)
{

	if (n > 0)
{
	return (1);
	_putchar(43);
}

	else if (n == 0)

{
	return (0);
	_putchar(48);
}
	else
{
	return (-1);
	_putchar(45);
}
}
