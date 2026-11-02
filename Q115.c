#include <stdio.h>

int main() {
    char s[1000], t[1000];
    int freq[26] = {0};
    int i;

    scanf("%s %s", s, t);

    for (i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
    }

    for (i = 0; t[i] != '\0'; i++) {
        freq[t[i] - 'a']--;
    }

    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");

    return 0;
}