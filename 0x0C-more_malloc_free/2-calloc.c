#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _calloc - allocates memory to array using malloc
 * @nmemb: size of string
 * @size: size
 * Return: null or pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}


	ptr = malloc(nmemb * size);


	if (ptr == NULL)
	{
	return (NULL);
	}


	memset(ptr, 0, nmemb * size);
	return (ptr);
}
