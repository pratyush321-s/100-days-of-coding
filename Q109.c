#include <stdio.h>

int main() {
    int n, k, arr[1000];
    int i, sum = 0, maxSum;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("-1");
        return 0;
    }

    for (i = 0; i < k; i++)
        sum += arr[i];

    maxSum = sum;

    for (i = k; i < n; i++) {
        sum = sum - arr[i - k] + arr[i];

        if (sum > maxSum)
            maxSum = sum;
    }

    printf("%d", maxSum);

    return 0;
}