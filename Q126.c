#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    int ch;

    printf("Enter filename: ");
    scanf("%99s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("File does not exist");
        return 0;
    }

    printf("File contents:\n");

    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}