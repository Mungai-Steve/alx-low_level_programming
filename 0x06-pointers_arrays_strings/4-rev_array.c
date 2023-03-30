#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * reverse_array - reverse a string
 * @a: array of elemets n
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int t, index;

	for (index = n - 1; index >= n / 2; index--)
	{
	t = a[n - 1 - index];

	a[n - 1 - index] = a[index];

	a[index] = t;
	}
}
