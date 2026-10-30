#include <stdio.h>
#include <ctype.h>

int main(void) {
    char s[200];
    int i, start = 1;

    fgets(s, sizeof(s), stdin);

    for (i = 0; s[i] != '\0'; i++) {
        if (!isspace((unsigned char)s[i]) && start) {
            printf("%c.", s[i]);
            start = 0;
        }

        if (isspace((unsigned char)s[i]))
            start = 1;
    }

    return 0;
}