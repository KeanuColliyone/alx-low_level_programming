#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string containing the binary number.
 *
 * Return: The converted number, or 0 if an error occurs.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int outcome = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		outcome <<= 1;
		outcome += (*b - '0');
		b++;
	}

	return (outcome);
}

