#include <stdio.h>

int main() {
    int n, arr[1000], i;
    int currentSum, maxSum;

    scanf("%d", &n);

    if (n <= 0 || n > 1000) {
        printf("-1");
        return 0;
    }

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    currentSum = arr[0];
    maxSum = arr[0];

    for (i = 1; i < n; i++) {
        if (currentSum + arr[i] > arr[i])
            currentSum = currentSum + arr[i];
        else
            currentSum = arr[i];

        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("%d", maxSum);

    return 0;
}