#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcmp - copy string 2 to string 1
 * @dest: destingation string
 * @src: source string
 * @n: max bytes to be copied
 * Return: destination string
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 = * s2);
}
