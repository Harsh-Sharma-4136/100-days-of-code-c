#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char s[200], words[20][50];
    int i, j = 0, count = 0;

    fgets(s, sizeof(s), stdin);

    for (i = 0; ; i++) {
        if (!isspace((unsigned char)s[i]) && s[i] != '\0') {
            if (j < 49)
                words[count][j++] = s[i];
        } else {
            if (j > 0) {
                words[count][j] = '\0';
                count++;
                j = 0;
            }

            if (s[i] == '\0' || count == 20)
                break;
        }
    }

    for (i = 0; i < count - 1; i++)
        printf("%c.", words[i][0]);

    if (count > 0)
        printf("%s", words[count - 1]);

    return 0;
}