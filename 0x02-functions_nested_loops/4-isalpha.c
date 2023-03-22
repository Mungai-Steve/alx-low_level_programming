#include "main.h"

/**
 * _isalpha - chech if c is alphabet
 *
 * @c: character to check
 *
 * Return: 1 if alphabet 0 if not
 */

int _isalpha(int c)

{
	if (c >= 65 && c <= 90)
{
	return (1);

}

	else if (c >= 97 && c <= 122)

{
	return (1);
}

	return (0);
}
