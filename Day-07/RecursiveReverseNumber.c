// write a program to reverse a number using recursion

#include <stdio.h>

int reverse = 0;

void reverseNumber(int n)
{
    if (n == 0)
        return;

    reverse = reverse * 10 + n % 10;
    reverseNumber(n / 10);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num); 

    reverseNumber(num);

    printf("Reverse of %d = %d", num, reverse);

    return 0;
}