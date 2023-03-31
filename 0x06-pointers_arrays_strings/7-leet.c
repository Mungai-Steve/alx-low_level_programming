#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * leet - encode characters in a string
 * @s: string to be encoded
 * Return: return encoded string
 */
char *leet(char *s)
{
	int i, j;
	char ch[] = "aAeEoOtTlL";
	char zh[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{for (j = 0; j < 10; j++)
	{
	if (s[i] == ch[j])
	{s[i] = zh[j];
	}
	}
	}
	return (s);
}
