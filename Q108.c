#include <stdio.h>

int main() {
    int n, arr[1000], answer[1000];
    int i, prefix = 1, suffix = 1;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= arr[i];
    }

    for (i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= arr[i];
    }

    for (i = 0; i < n; i++) {
        printf("%d", answer[i]);

        if (i < n - 1)
            printf(" ");
    }

    return 0;
}