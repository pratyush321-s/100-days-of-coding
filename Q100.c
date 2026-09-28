#include <stdio.h>

int main()
{
    char str[100];
    int i, j, k, len = 0;

    fgets(str, sizeof(str), stdin);

    while(str[len] != '\0' && str[len] != '\n')
        len++;

    for(i = 0; i < len; i++)
    {
        for(j = i; j < len; j++)
        {
            for(k = i; k <= j; k++)
                printf("%c", str[k]);

            if(!(i == len - 1 && j == len - 1))
                printf(",");
        }
    }

    return 0;
}