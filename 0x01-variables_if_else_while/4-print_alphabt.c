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
	char ch, q, e;

	q = 'q';

	e = 'e';


	for (ch = 'a'; ch <= 'z'; ch++)

	if (ch != q && ch != e)

{
	putchar(ch);

}


{

	putchar('\n');


}

	return (0);
}
