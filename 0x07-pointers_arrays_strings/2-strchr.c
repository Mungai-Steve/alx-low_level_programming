#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates  a character in string
 * @s: pointer
 * @c: character to be searched
 * Return: s if c is present, NULL if not present
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	
		if (*s == c)
			return (s);
		else if (*(s+1) == c)
			return (s+1);
		s++;

	}
	return (s + 1);
}
