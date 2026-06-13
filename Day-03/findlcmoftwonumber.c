//write a program to find lcm of two numbers
#include <stdio.h>

int main() {
    int a, b, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    lcm = (a > b) ? a : b;
    while (1) {
        if (lcm % a == 0 && lcm % b == 0) {
            printf("LCM of the two numbers is: %d\n", lcm);
            break;
        }
        lcm++;
    }
    return 0;
}