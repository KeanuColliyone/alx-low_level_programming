#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gm(int n1, int n2, int n3, int n4, int n5, int bonus) {
    // Manipulate the lottery numbers here or generate random numbers
    srand(time(NULL));

    // Set the numbers you want to win
    n1 = 1;
    n2 = 2;
    n3 = 3;
    n4 = 4;
    n5 = 5;
    bonus = 6;

    // Print the manipulated numbers for verification
    printf("Winning Numbers: %d %d %d %d %d Bonus: %d\n", n1, n2, n3, n4, n5, bonus);
}

