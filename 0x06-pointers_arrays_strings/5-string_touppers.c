#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *string_toupper - change all lower to upper
 * @str: string of characters
 */

int main(void)
{
	char str[];
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
}
