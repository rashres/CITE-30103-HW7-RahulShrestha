#include <stdio.h>

long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main(void) {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: factorial is not defined for negative numbers.\n");
    } else {
        long f = factorial(n);
        printf("%d! = %ld\n", n, f);
    }

    return 0;
}
