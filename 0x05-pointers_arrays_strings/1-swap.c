#include "main.h"

/**
 * swap_int - swaps the value of pointers
 *
 *@a: variable
 *
 * @b: variable
 *
 * description: swaps the variables
 */

void swap_int(int *a, int *b)

{
	int n;

	n = *a;

	*a = *b;

	*b = n;
}
