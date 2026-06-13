// write a program to find GCD of two numbers
#include <stdio.h>

int main() {
    int a, b, gcd;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    gcd = a;
    printf("GCD of the two numbers is: %d\n", gcd);
    return 0;
}