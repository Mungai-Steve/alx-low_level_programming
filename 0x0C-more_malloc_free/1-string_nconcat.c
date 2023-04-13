#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @n: bytes of s2
 * @s1: string 1
 * @s2: string 2
 * Return: NULL if fails, returns pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	char *result;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
	{
	n = len2;
	}

	result = malloc(len1 + n + 1);
	if (result == NULL)
	{
	return (NULL);
	}

	memcpy(result, s1, len1);
	memcpy(result + len1, s2, n);
	result[len1 + n] = '\0';

	return (result);
}
