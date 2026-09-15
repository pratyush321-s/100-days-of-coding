#include <stdio.h>

int main() {
    int n, x, low, high, mid;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] == x) {
            printf("Found at index %d", mid);
            return 0;
        }
        else if (a[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("-1");

    return 0;
}