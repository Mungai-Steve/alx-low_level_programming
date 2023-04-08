#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - calculate the number of arguments pased to main
 * @argc: number of arguments passed to main(argument count)
 * @argv: strings/arguments to main(argument vector)
 * (void) argv - used to escape gcc warning of unused parameter
 * Return: 0 if program is succssesful
 */

int main(int argc, char **argv)

{

	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
