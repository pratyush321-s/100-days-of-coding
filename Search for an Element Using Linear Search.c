#include <stdio.h>

int main() {
    int n, i, search;
    int index = -1;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &search);

    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            index = i;
            break;
        }
    }

    printf("%d", index);

    return 0;
}