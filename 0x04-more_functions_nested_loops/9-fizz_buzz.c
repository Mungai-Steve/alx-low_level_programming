#include <stdio.h>

/**
 * main - program starts here
 *
 * @n: integer to be printed
 */

int main(void)

{
	int n;

	for (n = 1; n <= 100; n++)
	{
	if ((n % 3 == 0) && (n % 5 == 0))
	printf("FizzBuzz ");
	else if
	(n % 5 == 0)
	printf("Buzz ");
	else if (n % 3 == 0)
	printf("Fizz ");
	else
	printf("%d ", n);
	}
	return (0);

	

}
