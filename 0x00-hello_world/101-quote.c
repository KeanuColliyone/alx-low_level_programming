#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
for (int i = 0; message[i] != '\0'; i++) {
putchar(message[i]);
}
return (0);
}

