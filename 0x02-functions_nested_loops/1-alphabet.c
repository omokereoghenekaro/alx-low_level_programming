#include <stdio.h>
#include "main.h"

/*
 ** print_alphabet - prints a - z
 * main- bla bla bka
 * return - always 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
