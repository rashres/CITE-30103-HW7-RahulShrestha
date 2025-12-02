#include <stdio.h>

int main(void) {
    int arr[10];
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < 10; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Smallest value = %d\n", min);
    printf("Largest  value = %d\n", max);

    return 0;
}
