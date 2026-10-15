#include <stdio.h>

int main() {
    int n, k, arr[1000];
    int i, j, max;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("-1");
        return 0;
    }

    for (i = 0; i <= n - k; i++) {
        max = arr[i];

        for (j = i + 1; j < i + k; j++) {
            if (arr[j] > max)
                max = arr[j];
        }

        printf("%d", max);

        if (i < n - k)
            printf(" ");
    }

    return 0;
}