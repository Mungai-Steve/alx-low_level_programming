#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - where the program starts
 *
 * Return: ends the fuctions and is always 0 (success)
 */

int main(void)

{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;

if (digit > 5)

{
	printf("Last Digit of %d is: %d and is greater than 5\n", n, digit);

}

else if (digit == 0)

{

	printf("Last Digit of %d is: %d and is 0\n", n, digit);

}

else if (digit < 5)

{

	printf("Last Digit of %d is: %d and is less than 5\n", n, digit);

}

		return (0);

}
