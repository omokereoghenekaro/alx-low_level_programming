#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 ** main - Entry point
 **
 ** Return: Always 0 (Success)
 **/
int main(void)
{
	int n;
	int last_dig;
	char str[100];

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_dig = n % 10;
	
	if (last_dig > 5) {
		char str[] = "and is greater than 5";
	}
	if (last_dig == 0) {
		char str[] = "and is 0";
	}
	if (last_dig <6 && last_dig != 0) {
		char str[] = "and is less than 6 and not 0";
	}
	printf("Last digit of %d is %d %s \n", n, last_dig, str);	
	return (0);
}
