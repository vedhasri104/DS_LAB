#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int length = 0;
    for (char *ptr = str; *ptr != '\0'; ptr++) {
        length++;
    }

    printf("Length: %d\n", length);
    return 0;
}