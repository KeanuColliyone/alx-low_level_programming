#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int num_of_char = 0;
	int o;

	while (*s != '\0')
	{
		num_of_char++;
		s++;
	}
	s--;
	for (o = num_of_char; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

