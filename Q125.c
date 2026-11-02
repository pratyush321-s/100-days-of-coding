#include <stdio.h>

int main() {
    FILE *fp;
    char str[500];

    fp = fopen("info.txt", "a");

    if (fp == NULL) {
        printf("File cannot be opened");
        return 1;
    }

    printf("Enter text: ");
    fgets(str, sizeof(str), stdin);

    fprintf(fp, "%s", str);

    fclose(fp);

    printf("Text appended successfully");

    return 0;
}