#include <stdio.h>
/**
 *
 */

int main(void)
{
	char i[] = "_putchar";
	int j = 0;
	while (i[j] != '\0')
	{
		putchar(i[j]);
		j++;
		if (j == 8)
		{
			putchar('\n');
		}
	}
	return (0);
}

