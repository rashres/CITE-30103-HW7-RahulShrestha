#include <stdio.h>

int main(void) {
    int x;
    int *ptr;

    printf("Enter an integer: ");
    scanf("%d", &x);

    ptr = &x;

    printf("Value of x          = %d\n", x);
    printf("Address of x        = %p\n", (void *)&x);
    printf("Value via *ptr      = %d\n", *ptr);
    printf("Address stored in ptr = %p\n", (void *)ptr);

    return 0;
}
