#include <stdio.h>

/**
 ** main - Entry point
 **
 ** Return: Always 0 (Success)
 **/
int main(void)
{
	char c[] = "abcdfghijklmnoprstuvwxyz";
	char C = 'A';
	int NUM = 1;
	int num = 0;
	
	while (num < 24)
	{
		char k = c[num];
		putchar(k);
		num++;
	}

	putchar('\n');
	return (0);
}
