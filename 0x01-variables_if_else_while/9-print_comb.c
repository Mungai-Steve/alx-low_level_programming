#include <stdio.h>

/**
 * main - program starts here
 *
 * Return: program ends here
 */

int main(void)

{
	int num;

	for (num = '0'; num <= '9'; num++)

{

	putchar(num);

}
	if (num != '9')
{
	putchar(',');

}

{
	putchar(' ');

}

	return (0);

}
