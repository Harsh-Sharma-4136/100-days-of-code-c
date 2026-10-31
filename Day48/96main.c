#include <stdio.h>
#include <string.h>

int main(void) {
    char s[300], temp;
    int i, start = 0, end;

    fgets(s, sizeof(s), stdin);

    for (i = 0; ; i++) {
        if (s[i] == ' ' || s[i] == '\n' || s[i] == '\0') {
            end = i - 1;

            while (start < end) {
                temp = s[start];
                s[start] = s[end];
                s[end] = temp;
                start++;
                end--;
            }

            start = i + 1;

            if (s[i] == '\0' || s[i] == '\n')
                break;
        }
    }

    printf("%s", s);

    return 0;
}