#include <stdio.h>

/**
 * main- program starts
 *
 * description: prints the alphabet in lowercase except q & e
 *
 * Return: program ends
 */

int main(void)

{
	char ch;


	for (ch = 'a'; ch <= 'z'; ch++)

{
	putchar(ch);

}
{

	putchar('\n');

}
{
	tr -d [:q, e:]
}	

	return (0);
}
