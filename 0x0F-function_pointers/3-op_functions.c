#include <stdio.h>
/**
 * op_add - compute sum of `a' and `b'
 * @a: first operand
 * @b: second operand
 *
 * Return: `a' + `b'
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - compute difference of `a' and `b'
 * @a: first operator
 * @b: second operator
 *
 * Return: `a' - `b'
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - compute product of `a' and `b'
 * @a: first operator
 * @b: second operator
 *
 * Return: `a' * `b'
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - compute quotient of `a' and `b'
 * @a: first operator
 * @b: second operator
 *
 * Return: `a' / `b'
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - compute modulus of `a' and `b'
 * @a: first operator
 * @b: second operator
 * Return: `a' % `b'
 */
int op_mod(int a, int b)
{
	return (a % b);
}
