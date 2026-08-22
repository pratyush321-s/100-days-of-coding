// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main()
{
    int a, b;
    char op;

    scanf("%d", &a);
    scanf(" %c", &op);
    scanf("%d", &b);

    switch(op)
    {
        case '+':
            printf("%d", a + b);
            break;

        case '-':
            printf("%d", a - b);
            break;

        case '*':
            printf("%d", a * b);
            break;

        case '/':
            printf("%d", a / b);
            break;

        case '%':
            printf("%d", a % b);
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}