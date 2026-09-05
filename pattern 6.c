#include <stdio.h>

void main()
{
    int i, j;

    // Increasing part
    for(i = 1; i <= 4; i++)
    {
        for(j = 1; j <= 4 - i; j++)
            printf(" ");

        for(j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }

    // Decreasing part
    for(i = 3; i >= 1; i--)
    {
        for(j = 1; j <= 4 - i; j++)
            printf(" ");

        for(j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }
} 