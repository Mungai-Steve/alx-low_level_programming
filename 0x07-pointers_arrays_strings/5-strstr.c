#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: main string
 * @needle: substring to be located
 * Return: NULL if no match, else substring matched
 */
char *_strstr(char *haystack, char *needle)
{
	if (!needle)
	{
		return (haystack);
	}
	while (*haystack)
	{
		char *p = haystack;
		char *t = needle;
		while (*p && *t && (*p == *t))
		{
		
			p++;
			t++;
		}
		if (!*t)
		{
		return (haystack);
		}
		haystack++;
	}
		return (NULL);
}
