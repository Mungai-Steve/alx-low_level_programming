#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * rot13 - replaces character with the 13th char after it
 * @s: string
 */

char *rot13(char *s)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
	{
			if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
				s[i] = s[i] + 13;
	}

	return (s);
}
