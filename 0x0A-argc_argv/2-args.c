#include <stdio.h>
#include <string.h>

/**
 * main - print all arguments passed to main
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
