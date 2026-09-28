#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, last;

    fgets(str, sizeof(str), stdin);

    last = strlen(str) - 1;

    if(str[last] == '\n')
        str[last] = '\0';

    printf("%c.", str[0]);

    for(i = 1; str[i] != '\0'; i++)
    {
        if(str[i - 1] == ' ')
        {
            last = i;

            while(str[last] != ' ' && str[last] != '\0')
                last++;

            if(str[last] != '\0')
                printf("%c.", str[i]);
            else
            {
                printf(" %s", &str[i]);
                break;
            }
        }
    }

    return 0;
}