#include "main.h"

/**
 * print_square - print a square using #
 *
 * @size: length/width of qsquare
 *
 */

void print_square(int size)

{

	int x, y;

	if (size <= 0)
	{
	_putchar('\n');

	}

	for (y = 0; y < size; y++)

	{

	for (x = 0; x < size; x++)


	_putchar(35);


	_putchar('\n');
	}
}
















