#include "main.h"
#include <string.h>

/**
 * _strlen - print the length of string
 *
 * @s: string of characters
 *
 * Return: length of string s
 */
int _strlen(char *s)

{

	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);


}
