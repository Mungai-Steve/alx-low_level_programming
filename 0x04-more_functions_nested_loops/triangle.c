#include <stdio.h>

int main(void)

{	
	int x, y;
	for (x = 1; x <= 5; x++)
	{
	for (y = 1; y >= x; y++)
	putchar(42);
	putchar('\n');
	}
}

