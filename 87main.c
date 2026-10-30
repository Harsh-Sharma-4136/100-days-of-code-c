#include <stdio.h>
#include <ctype.h>

int main(void) {
    char s[300];
    int i, spaces = 0, digits = 0, special = 0;

    fgets(s, sizeof(s), stdin);

    for (i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        if (s[i] == ' ')
            spaces++;
        else if (isdigit((unsigned char)s[i]))
            digits++;
        else if (!isalpha((unsigned char)s[i]))
            special++;
    }

    printf("Spaces = %d\nDigits = %d\nSpecial = %d",
           spaces, digits, special);

    return 0;
}