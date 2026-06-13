//write a program to find x^n without using pow() function
#include <stdio.h>

int main() {
    int x, n, result = 1;

    printf("Enter the base (x): ");
    scanf("%d", &x);

    printf("Enter the exponent (n): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        result = result * x;
    }

    printf("%d^%d = %d", x, n, result);
    return 0;
}