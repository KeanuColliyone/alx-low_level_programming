#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 *
 * @n: The number from which to retrieve the bit.
 * @index: The index of the bit to retrieve (0 being the rightmost bit).
 *
 * Return: The value of the bit at index index or -1 if an error occurred.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n & mask) ? 1 : 0);
}

