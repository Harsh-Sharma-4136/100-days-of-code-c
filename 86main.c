#include <stdio.h>
#include <string.h>

int main(void) {
    char s[200];
    int i, j, palindrome = 1;

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    i = 0;
    j = (int)strlen(s) - 1;

    while (i < j) {
        if (s[i] != s[j]) {
            palindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (palindrome)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}