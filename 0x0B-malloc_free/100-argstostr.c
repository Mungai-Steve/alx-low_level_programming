#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate strings pointed to by `av'
 * @ac: number of strings
 * @av: array
 * Return: point to new string, or NULL if failed
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, total = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; ++i)
	{
		for (j = 0; *(*(av + i) + j); ++j)
			;
		total += j;
		++total; /* space for newline */
	}
	++total; /* space for string terminator */

	p = (char *) malloc(total * sizeof(char));

	if (p == NULL)
		return (NULL);
	for (i = 0, k = 0; i < ac; ++i, ++k)
	{
		for (j = 0; *(*(av + i) + j); ++j, ++k)
			*(p + k) = *(*(av + i) + j);
		*(p + k) = '\n';
	}
	*(p + k + 1) = '\0';
	return (p);
}
