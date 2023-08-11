#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
srand(time(0));
int n = rand() % 26;
char l = 'a' + n;
putchar(l);
putchar('\n')
return (0);
}

