#include <stdio.h>

int main() {
    int n, k, arr[1000];
    int i, j, found;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("-1");
        return 0;
    }

    for (i = 0; i <= n - k; i++) {
        found = 0;

        for (j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d", arr[j]);
                found = 1;
                break;
            }
        }

        if (!found)
            printf("0");

        if (i < n - k)
            printf(" ");
    }

    return 0;
}