#include <stdio.h>

int main()
{
    int n, first, last, digits, power, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    digits = 0;
    power = 1;

    while (n >= 10)
    {
        n = n / 10;
        digits++;
        power = power * 10;
    }

    first = n;

    result = last * power + (n % power) * 10 + first;

    printf("Number after swapping = %d", result);

    return 0;
}