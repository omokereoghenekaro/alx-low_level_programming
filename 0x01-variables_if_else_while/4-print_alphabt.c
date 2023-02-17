#include <stdio.h>

/**
 ** main - Entry point
 **
 ** Return: Always 0 (Success)
 **/
int main(void)
{
	char c[] = "abcdfghijklmnoprstuvwxyz";
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
