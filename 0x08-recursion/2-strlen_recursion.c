#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - calculate the length of string
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int n;

	if (*s == '\0')
	{
	return (0);
	}
	{
	
	n = _strlen_recursion(s + 1);
	n++;
	}
	return (n);

}
