#include <stdio.h>

int main(void) {
    char s[200], ch;
    int i, count = 0;

    fgets(s, sizeof(s), stdin);
    scanf("%c", &ch);

    for (i = 0; s[i] != '\0'; i++)
        if (s[i] == ch)
            count++;

    printf("Frequency = %d", count);

    return 0;
}