#include <stdio.h>

int main() {
    FILE *source, *destination;
    char src[100], dest[100];
    int ch;

    scanf("%99s", src);
    scanf("%99s", dest);

    source = fopen(src, "r");

    if (source == NULL) {
        printf("Source file not found");
        return 1;
    }

    destination = fopen(dest, "w");

    if (destination == NULL) {
        printf("Cannot create destination file");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully");

    return 0;
}