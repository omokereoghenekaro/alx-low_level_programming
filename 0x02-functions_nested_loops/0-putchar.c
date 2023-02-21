#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * main - the main block
 * Return: On success 1.
 */
int main(void)
{
	int i;
	char ch[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(ch[i]);
	}
	putchar('\n');
	return (0);
}
