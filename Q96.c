#include <stdio.h>

int main()
{
    char str[200];
    int i = 0, start = 0;

    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
    {
        if(str[i] == ' ' || str[i] == '\n')
        {
            int j;

            for(j = i - 1; j >= start; j--)
                printf("%c", str[j]);

            if(str[i] == ' ')
                printf(" ");

            start = i + 1;
        }

        i++;
    }

    return 0;
}