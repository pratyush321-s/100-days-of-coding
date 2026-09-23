#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
    {
        if(str[i] == '\n')
            break;

        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}