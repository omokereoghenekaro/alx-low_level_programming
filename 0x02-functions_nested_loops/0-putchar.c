#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 *  * _putchar - writes the character c to stdout
 *   * @c: The character to print
 *    *
 *     * Return: On success 1.
 *      * On error, -1 is returned, and errno is set appropriately.
 * */
int main(void)
{
	int i = 0;
	char c[] = "_putchar";

	for (int i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	putchar("\n");
	return (0);
}
