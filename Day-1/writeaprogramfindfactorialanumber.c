//write a program to find a factorial of a given number
#include <stdio.h>

int main() {
    int n, i;
    int factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    printf("Factorial of %d = %d", n, factorial);

    return 0;
}
