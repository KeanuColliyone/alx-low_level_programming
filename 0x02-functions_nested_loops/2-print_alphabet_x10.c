#include "main.h"
/**
 * print_alphabet_x10 - print all alphabet in lowercase 10 times
 */

void print_alphabet_x10(void)
{
	char i[] = "abcdefghijklmnopqrstuvwxyz";
	int j = 0;
	int k = 1;

	while (i[j] != '\0')
	{
		_putchar(i[j]);
		j++;
		if (j == 26)
		{
			_putchar('\n');
			if (k < 10)
			{
				j = 0;
				k++;
			}
		}
	}
}

