#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - calculate the length of string
 * @s: string
 */
int _strlen_recursion(char *s)
{
	int n;
	if (*s)
	{
	n = _strlen_recursion(s +1);
	n++;

	}
	return (n);
}
