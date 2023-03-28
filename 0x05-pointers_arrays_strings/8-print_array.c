#include "main.h"

/**
 * print_array - print an array of n characters
 *
 * @a: pointer to the firt element of array
 *
 * @n: number of elemets in array
 */
void print_array(int *a, int n);
#include "main.h"
#include <stdio.h>

/**
 * print_array - print n element of an array of interger
 * @a: pointer to array
 * @n: number of array element
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *(a + i));

		if (i != n - i)

	{
		printf(", ");
		i++;
	}
	}
	printf("\n");
}
