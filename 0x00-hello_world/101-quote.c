#include <unistd.h>
/**
 * main - standar error
 *
 * Retrun: 1 (Success)
 */
int main(void)
{
char *message = "and that piece of art is useful\" - Dora K
orpar, 2015-10-19\n";
write(2, message, 59);
return (1);
}

