#include <stdio.h>
/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int k;
for (k = 48; k < 58; k++)
{
putchar(k);
}
for (k = 97; k < 103; k++)
{
putchar(k);
}
putchar('\n');
return (0);
}

