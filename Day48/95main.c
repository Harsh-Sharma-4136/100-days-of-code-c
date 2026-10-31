#include <stdio.h>
#include <string.h>

int main(void) {
    char a[200], b[200], doubled[400];

    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';

    if (strlen(a) != strlen(b)) {
        printf("Not rotations");
        return 0;
    }

    strcpy(doubled, a);
    strcat(doubled, a);

    if (strstr(doubled, b) != NULL)
        printf("Rotations");
    else
        printf("Not rotations");

    return 0;
}