#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    int i, capitalize = 1;

    fgets(s, sizeof(s), stdin);

    for (i = 0; s[i] != '\0'; i++) {

        if (isalpha((unsigned char)s[i])) {

            if (capitalize) {
                s[i] = toupper((unsigned char)s[i]);
                capitalize = 0;
            } else {
                s[i] = tolower((unsigned char)s[i]);
            }
        }

        if (s[i] == '.' || s[i] == '?' || s[i] == '!') {
            capitalize = 1;
        }
    }

    printf("%s", s);

    return 0;
}