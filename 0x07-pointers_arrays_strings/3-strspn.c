#include <stdio.h>
#include "main.h"

/**
 * _strspn - function get length of prefix of a string
 * @s: string prefix
 * @accept: string
 * Return: the length in bytes of the prefix
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; ++i)
	{
	for (j = 0; accept[j]; ++j)
	{
		if (s[i] == accept[j])
		{
		break;
		}
	}
	if (!accept[j])
	{
	return (i);

	}
	}
	return (i);
}
