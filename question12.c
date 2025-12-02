#include <stdio.h>

int main(void) {
    char str[100];
    printf("Enter a word (no spaces): ");
    scanf("%99s", str);

    int i = 0;
    int j = 0;
    while (str[j] != '\0') {
        j++;
    }
    j--;

    int isPal = 1;
    while (i < j) {
        if (str[i] != str[j]) {
            isPal = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPal) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}
