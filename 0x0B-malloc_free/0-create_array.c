#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * create_array - create arrays of size (size) and initialize with c
 * @c: first character of the array, where mem allocation starts
 * @size: size of the array(characters * sizeof(char))
 * Return: Null if not successful, string if success
 */
char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int i;

	if (size == 0)
		return (NULL);

	string = (char *) malloc(size * sizeof(char));

	if (string == NULL)
		return (NULL);

	for (i = 0; i < size; i++)

		string[i] = c;

	return (string);
}


