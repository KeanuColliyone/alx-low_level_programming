#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int num_of_char = 0;

	while (*s != '\0')
	{
		num_of_char++;
		s++;
	}

	return (num_of_char);
}

