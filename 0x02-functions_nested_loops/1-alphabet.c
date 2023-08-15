#include "main.h"
/**
 * print_alphabet - print all alphabet in lowercase
 */

void print_alphabet(void)
{
        char i[] = "abcdefghijklmnopqrstuvwxyz";
        int j = 0;

        while (i[j] != '\0')
        {
                _putchar(i[j]);
                j++;
                if (j == 26)
                {
                        _putchar('\n');
                }
        }
        return (0);
}

