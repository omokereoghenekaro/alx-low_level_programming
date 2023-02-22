#include <stdio.h>
#include "main.h"

/**
 ** print_alphabet_x10 - writes the character c to stdout
 **
 ** Return: On success 1.
 ** On error, -1 is returned, and errno is set appropriately.
 **/

void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
