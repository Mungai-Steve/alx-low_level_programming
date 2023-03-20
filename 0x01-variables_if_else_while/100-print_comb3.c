#include <stdio.h>

/**
 * main - program starts
 *
 * Return: program ends
 */

int main(void)

{
	int a, b;

	for (a = '0'; a <= '8'; a++)
	for (b = 1 + a; b <= '9'; b++)

	
{
	putchar(a);
	putchar(b);

	if (a == '8' && b == '9')

	continue;
{

	putchar(',');
	putchar(' ');

}
}

{
	putchar('\n');

}
	return (0);

}
