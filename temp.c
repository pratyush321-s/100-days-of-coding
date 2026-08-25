#include <stdio.h>

int main() {
    int num, temp, digit, sum = 0;

    scanf("%d", &num);

    temp = num;

    while (temp != 0) {
        digit = temp % 10;
        sum = sum + (digit * digit * digit);
        temp = temp / 10;
    }

    if (sum == num)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}