#include <stdio.h>

int main(void) {
    char s[200];
    int i, j = 0;

    fgets(s, sizeof(s), stdin);

    for (i = 0; s[i] != '\0'; i++) {
        char ch = s[i];

        if (ch != 'a' && ch != 'e' && ch != 'i' &&
            ch != 'o' && ch != 'u' && ch != 'A' &&
            ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U')
            s[j++] = ch;
    }

    s[j] = '\0';
    printf("%s", s);

    return 0;
}