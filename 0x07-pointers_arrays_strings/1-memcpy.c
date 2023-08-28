#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
	int i = n;
	int j = 0;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}

	return (dest);

