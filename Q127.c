#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp1, *fp2;
    int ch;

    fp1 = fopen("input.txt", "r");

    if (fp1 == NULL) {
        printf("Input file not found");
        return 1;
    }

    fp2 = fopen("output.txt", "w");

    if (fp2 == NULL) {
        printf("Cannot create output file");
        fclose(fp1);
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF) {
        fputc(toupper((unsigned char)ch), fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("Conversion completed");

    return 0;
}