#include "main.h"
#include <string.h>

/**
 * print_rev - print string in reverse
 *
 * @s: string
 *
 */

void print_rev(char *s)
{
        int i = 0;

        while (s[i] != '\0')
        {
                i++;
        }

        while (i >= 0)
        {
                _putchar(s[i]);
                i--;
        }
        _putchar('\n');

}
