#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - print the name by calling fuction through pointer 'f'
 * @f: - pointer to function that prints name
 * @name: name to be printed
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		exit(EXIT_FAILURE);
	f(name);
}

