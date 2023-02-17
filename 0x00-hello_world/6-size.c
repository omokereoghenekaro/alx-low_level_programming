#include <stdio.h>

/**
 ** main - Entry point
 **
 ** Return: Always 0 (Success)
 **/
int main(void)
{
	printf("Size of a char: %ld byte\n", sizeof(char));
	printf("Size of an int: %ld bytes\n", sizeof(int));
	printf("Size of a long: %ld bytes\n", sizeof(long));
	printf("Size of a long long: %ld bytes\n", sizeof(long long));
	printf("Size of a float: %ld bytes\n", sizeof(float));
	return (0);
}
