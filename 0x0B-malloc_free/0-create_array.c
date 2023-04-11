#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * create_array - create arrays of size (size) and initialize with c
 * @c: first character of the array, where mem allocation starts
 * @size: size of the array(characters * sizeof(char))
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = (char *) malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)

		arr[i] = c;

	return (arr);
}


