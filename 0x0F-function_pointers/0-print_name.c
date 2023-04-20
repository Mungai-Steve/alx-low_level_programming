#include <stdio.h>
#include "function_pointers.h"
/**
 * main - program starts here.
 * f - pointer to function that prints name
 * @char: name to be printed
 */

void print_name(char *name, void (*f)(char *))
{
	while (f != NULL && name != NULL)
	{
                f(name);
		break;
	}
}

