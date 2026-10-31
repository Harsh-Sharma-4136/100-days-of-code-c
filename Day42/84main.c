#include <stdio.h>

int main(void) {
    char s[200];
    int i;

    fgets(s, sizeof(s), stdin);

    for (i = 0; s[i] != '\0'; i++)
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 'a' + 'A';

    printf("%s", s);

    return 0;
}