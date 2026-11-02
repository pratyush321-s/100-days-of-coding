#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0, last = '\n';

    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("File not found");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }

        if (isspace((unsigned char)ch)) {
            inWord = 0;
        } else if (inWord == 0) {
            words++;
            inWord = 1;
        }

        last = ch;
    }

    if (characters > 0 && last != '\n') {
        lines++;
    }

    printf("Characters = %d\n", characters);
    printf("Words = %d\n", words);
    printf("Lines = %d\n", lines);

    fclose(fp);

    return 0;
}