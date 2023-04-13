#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that alloctes memory
 * @b: size of string
 * Return: 98 if fail, pointer to string if success
 */

void *malloc_checked(unsigned int b)
{
	void *s = malloc(b);

	if (s == NULL)
	exit(98);
	return (s);
}
