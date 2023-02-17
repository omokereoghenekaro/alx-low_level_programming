#include <stdio.h>

/**
 ** main - Entry point
 **
 ** Return: Always 0 (Success)
 **/
int main(void)
{
	char c = 'a';
	int num = 1;

	while (num <= 26) {
		putchar(c);
		c++;
		num++;
	}

	putchar('\n');
	return (0);
}
