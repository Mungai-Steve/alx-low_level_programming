#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: the size of triangle
 */

void print_triangle(int size)

{
	int y, x;

	for (y = 0; y < size; y++)
	{
	for (x = 0; x < size; x++)
	_putchar(35);
	
	_putchar('\n');
	}
}
