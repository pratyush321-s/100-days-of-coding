#include <stdio.h>

int main() {
    int n, product = 1, digit;

    printf("Enter the no.: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;
        product = digit * product;
        n = n / 10;
    }

    printf("Product of digit is %d", product);

    return 0;
}