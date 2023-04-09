#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add two arguments passed to main
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 1 if numbers contain non digit, 0 if success
 */

int main(int argc, char **argv)
{
	int i = 0;
	int k = 0;
	int j;

	if (argc < 2)
	{
	printf("0\n");
	return (0);
	}

	for (i = 1; i < argc; i++)
	{
	if (!isdigit(argv[i][0]))

	{
	printf("Error\n");
	return (1);
	}
	j = atoi(argv[i]);
	k = k + j;
	}
	printf("%d\n", k);
	return (0);
}
