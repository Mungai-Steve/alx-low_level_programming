#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * string_toupper - change all lower case to upper
 * Return: str
 * @str: charcter
 */
char *string_toupper(char *str)
{
	int y = 0;

	while (str[y])
	{
	if (str[y] >= 'a' && str[y] <= 'z')
	str[y] -= 32;
	y++;
	}
	return (str);
}
