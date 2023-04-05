#include "main.h"
#include <stdio.h>
/**
 * is_prime - recursively perform trial division
 * @n: integer to compute
 * @div: current divisor
 *
 * Return: return 0 if perfectly divides, is_prime(n, div + 2) otherwise
 */
int is_prime(int n, int div)
{
	if (div == n)
		return (div);
	if (n % div == 0)
		return (0);
	return (is_prime(n, div + 2));
}

/**
 * is_prime_number - tests whether `n' is prime
 * @n: number to test
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (!(n % 2))
		return (0);
	if (is_prime(n, 3))
		return (1);
	return (0);
}
