#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - write a program that prints its name
 * @argc: the number of arguments/strings passed to main
 * @argv: sarguments/strings passed to main
 * Return: 0 if program is successful
 */

int main(int argc, char **argv)
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
