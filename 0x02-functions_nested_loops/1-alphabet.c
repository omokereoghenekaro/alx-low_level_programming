#include <stdio.h>
#include "main.h"

/*
 * main- bla bla bka
 * return - always 0
 * print_alphabet - prints a - z
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
