#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    printf("Enter a string: ");
    scanf("%s", str);

    for (char *ptr = str; *ptr != '\0'; ptr++) {
        char ch = *ptr;
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }
    }

 printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
    return 0;
}
