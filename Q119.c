#include <stdio.h>

int main() {
    int n, i, sum = 0;

    scanf("%d", &n);

    int arr[n + 1];

    for (i = 0; i <= n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int total = n * (n + 1) / 2;

    printf("%d", sum - total);

    return 0;
}