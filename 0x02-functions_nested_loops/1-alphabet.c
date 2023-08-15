#include "main.h"
/**
 * print_alphabet - print all alphabet in lowercase
 */

int main(void)
{
        char i[] = "abcdefghijklmnopqrstuvwxyz";
        int j = 0;

        while (i[j] != '\0')
        {
                putchar(i[j]);
                j++;
                if (j == 26)
                {
                        putchar('\n');
                }
        }
        return (0);
}

