#include "main.h"
#include <stdio.h>

/**
 * _memset - set the first memory to byte b
 * @n: int
 * @b: bytes b
 * @s: pointer
 * Return: return s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)

	s[m] = b;

	return (s);

}
