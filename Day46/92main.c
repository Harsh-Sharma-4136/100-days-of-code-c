#include <stdio.h>

int main(void) {
    char s[200];
    int seen[26] = {0}, i;

    fgets(s, sizeof(s), stdin);

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            int x = s[i] - 'a';

            if (seen[x]) {
                printf("First repeating character = %c", s[i]);
                return 0;
            }

            seen[x] = 1;
        }
    }

    printf("No repeating lowercase character");
    return 0;
}