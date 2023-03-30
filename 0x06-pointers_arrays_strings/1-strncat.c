#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate two strings with 3 argument
 * @n: number of characters of string to be copied
 * @src: source string
 * @dest: destination string
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)

{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])

	dest_len++;

	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);
}
