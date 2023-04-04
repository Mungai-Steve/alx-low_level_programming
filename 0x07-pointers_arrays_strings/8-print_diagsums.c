#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of diagonals of a square matrix
 * @a: 2d array
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int diag1 = 0, diag2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
	diag1 += *(a + i * size + i);
	}

	for (i = 0; i < size; i++)
	{
	diag2 += *(a + i * size + (size - i - 1));
	}

	printf("%d, %d\n", diag1, diag2);
}

