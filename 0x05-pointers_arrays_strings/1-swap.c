#include "main.h"

/**
 * swap_in - swaps the value of pointers
 *
 * @a:  points to integer y
 *
 * @b: points to integer x
 */

void swap_int(int *a, int *b)

{
	int n;

	n = *a;
	*a = *b; 
	*b = n;
}
