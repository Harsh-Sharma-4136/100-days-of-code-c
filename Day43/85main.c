#include <stdio.h>

int main(void) {
    char s[200], temp;
    int i = 0, j;

    fgets(s, sizeof(s), stdin);

    while (s[i] != '\0' && s[i] != '\n')
        i++;

    j = i - 1;

    for (i = 0; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }

    s[j < 0 ? 0 : 0] = s[0];
    printf("%s", s);

    return 0;
}