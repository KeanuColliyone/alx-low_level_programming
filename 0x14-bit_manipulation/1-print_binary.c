#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 */

void print_binary(unsigned long int n)
{
	int move = sizeof(n) * 8 - 1;
	int printed = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	while (move >= 0)
	{
		if ((n >> move) & 1)
		{
			putchar('1');
			printed = 1;
		}
		else if (printed)
		{
			putchar('0');
		}
		move--;
	}
}

