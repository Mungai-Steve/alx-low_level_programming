#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * array_range - return a pointer to created array
 * @min: array dimension
 * @max: array dimension
 * Return: NULL if malloc fails else return pointer
 */

int *array_range(int min, int max)
{
	int size, *arr, i;

	if (min > max)
	{
	return (NULL);
	}

	size = max - min + 1;

	arr = malloc(size * sizeof(int));


	if (arr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
	{
	arr[i] = min + i;
	}
	return (arr);
}
