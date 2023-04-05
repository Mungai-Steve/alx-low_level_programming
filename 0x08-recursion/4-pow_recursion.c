#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _pow_recursion - calculate power recursively
 * @x: base number
 * @y: superscript
 * Return: resut if success, return -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	int n;

	if (y < 0)
	{
	return (-1);
	}
	else if (y == 0)
	{
	return (1);
	}

	else if (y == 1)
	{
	return (x);
	}

	else
	{
	n = x * _pow_recursion(x, (y - 1));

	return (n);
	}

}
