#include <stdio.h>

int square(int x) {
    return x * x;
}

int main(void) {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    int (*funcPtr)(int);
    funcPtr = square;

    int result = funcPtr(n);
    printf("Square of %d is %d\n", n, result);

    return 0;
}
