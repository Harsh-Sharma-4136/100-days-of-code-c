#include <stdio.h>
#include <ctype.h>

int main(void) {
    char s[200], ch;
    int i, vowels = 0, consonants = 0;

    fgets(s, sizeof(s), stdin);

    for (i = 0; s[i] != '\0'; i++) {
        ch = tolower((unsigned char)s[i]);

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels = %d\nConsonants = %d", vowels, consonants);

    return 0;
}