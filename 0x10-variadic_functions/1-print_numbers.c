#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - print n variable int arguments separated by `separato'
 * @separator: separator between integers
 * @n: number of variable arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int c = n;

	if (separator == NULL)
		separator = "";
	va_start(ap, n);
	if (c--)
		printf("%d", va_arg(ap, int));
	while (c-- > 0)
		printf("%s%d", separator, va_arg(ap, int));
	putchar('\n');
	va_end(ap);
}
