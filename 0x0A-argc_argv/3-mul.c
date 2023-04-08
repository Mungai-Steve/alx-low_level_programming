#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - multiply arguments passed to main
 * @argc: number of arguments passed to main
 * @argv: argument vector
 * Return: 0 if program is successful
 */

int main(int argc, char **argv)
{
	int i, j;
	int k = 1;
	for (i = 1; i < argc; i++)
	{
	j = atoi(argv[i]);
	k = k * j;
	}
	printf("%d\n", k);

	return (0);
}
