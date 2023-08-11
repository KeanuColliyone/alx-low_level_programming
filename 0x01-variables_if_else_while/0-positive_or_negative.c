#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
srand(time(NULL));
int min=-100;
int max=100;
int randNum = min + rand() % (max - min + 1);
if(randNum > 0)
{printf("%d is positive\n", randNum);
}else if (randNum < 0)
{printf("%d is negative\n", randNum);
}else
{printf("%d is zero\n", randNum);
}
return (0);
}

