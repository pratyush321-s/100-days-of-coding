#include <stdio.h>

void main()
{
    int i, j, n;

    for(i = 1; i <= 5; i++)
    {
        if(i == 1 || i == 5)
            n = 1;
        else if(i == 2 || i == 4)
            n = 3;
        else
            n = 5;

        for(j = 1; j <= n; j++)
        {
            printf("*\n");
        }

        if(i != 5)
            printf("\n");
    }
}