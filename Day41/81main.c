#include <stdio.h>

int main(void) {
    char s[200];
    int i = 0;

    fgets(s, sizeof(s), stdin);

    while (s[i] != '\0' && s[i] != '\n')
        i++;

    printf("Length = %d", i);

    return 0;
}