#include <stdio.h>

/**
 ** main - Entry point
 **
 ** Return: Always 0 (Success)
 **/
int main(void)
{
	char c = 'a';
	char C = 'A';
	int NUM = 1;
	int num = 1;

	while (num <= 26)
	{
		putchar(c);
		c++;
		num++;
	}
	while (NUM <= 26)
	{
		putchar(C);
		C++;
		NUM++;
	}

	putchar('\n');
	return (0);
}
