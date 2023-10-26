#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 *
 * @b: A pointer to a string containing binary digits.
 *
 * Return: The converted unsigned int, or 0 if there is an error.
 */

unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
	return (0);

	unsigned int result = 0;

	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			result = (result << 1) | 1;
		else if (b[i] == '0')
			result = result << 1;
		else
			return (0);
	}

	return (result);
}

