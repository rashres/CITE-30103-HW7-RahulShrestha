#include <stdio.h>

int main(void) {
    char str[101];
    int wordCount = 0;
    int inWord = 0;

    printf("Enter a line of text (max 100 chars):\n");
    getchar();   // clear leftover newline
    fgets(str, 101, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == ' ' || ch == '\t' || ch == '\n') {
            inWord = 0;
        } else {
            if (!inWord) {
                wordCount++;
                inWord = 1;
            }
        }
    }

    printf("Word count = %d\n", wordCount);

    return 0;
}
