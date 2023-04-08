#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - calculate the number of arguments pased to main
 * @argc: number of arguments passed to main(argument count)
 * @argv: strings/arguments to main(argument vector)
 * Return: 0 if program is succssesful
 */

int main(int argc, char **argv)

{
	
	int i;
	for (i = 0; i < argc; i++)
	{
	printf("%d\n", argc);
	printf("%s\n", argv[i]);
	}
	return (0);
}
