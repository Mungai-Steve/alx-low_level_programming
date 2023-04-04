#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for certain bytes
 * @s: string
 * @accept: prefix of string s
 * Return: returns matching bytes
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
	char *p = accept;

	while (*p != '\0')
	{
	if (*s == *p)
	{
	return (s);
	}
	p++;
	}
	s++;
	}
	return (NULL);
}
