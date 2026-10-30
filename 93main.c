#include <stdio.h>
#include <ctype.h>

int main(void) {
    char a[200], b[200];
    int freq[256] = {0}, i;

    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    for (i = 0; a[i] != '\0'; i++)
        if (a[i] != '\n' && a[i] != ' ')
            freq[(unsigned char)tolower((unsigned char)a[i])]++;

    for (i = 0; b[i] != '\0'; i++)
        if (b[i] != '\n' && b[i] != ' ')
            freq[(unsigned char)tolower((unsigned char)b[i])]--;

    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}