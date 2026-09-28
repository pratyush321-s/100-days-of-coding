#include <stdio.h>

int main()
{
    char str[100];
    int i;

    fgets(str, sizeof(str), stdin);

    if(str[0] != ' ')
        printf("%c.", str[0]);

    for(i = 1; str[i] != '\0'; i++)
    {
        if(str[i - 1] == ' ' && str[i] != ' ')
            printf("%c.", str[i]);
    }

    return 0;
}