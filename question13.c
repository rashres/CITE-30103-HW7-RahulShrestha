#include <stdio.h>

int main(void) {
    char str[101];
    int vowels = 0, consonants = 0, digits = 0;

    printf("Enter a line of text (max 100 chars):\n");
    // consume leftover newline if any
    getchar();
    fgets(str, 101, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if ((ch >= '0' && ch <= '9')) {
            digits++;
        } else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            char lower = ch;
            if (lower >= 'A' && lower <= 'Z') {
                lower = lower - 'A' + 'a';
            }
            if (lower == 'a' || lower == 'e' || lower == 'i' ||
                lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels     = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Digits     = %d\n", digits);

    return 0;
}
