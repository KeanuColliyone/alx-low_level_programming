#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
int min=-100;
int max=100;
int n = min + rand() % (max - min + 1);
srand(time(NULL));
if(n > 0)
{printf("%d is positive\n", n);
}else if (n < 0)
{printf("%d is negative\n", n);
}else
{printf("%d is zero\n", n);
}
return (0);
}

