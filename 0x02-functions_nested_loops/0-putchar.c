#include <stdio.h>
/**
 *
 */

int main(void)
{
	char i[] = "_putchar";
	for(int j = 0; i[j] != NULL; j++)
	{
		putchar(i[j]);
		if (i == 7)
		{
			putchar("\n");
		}
	}
	return (0);
}

