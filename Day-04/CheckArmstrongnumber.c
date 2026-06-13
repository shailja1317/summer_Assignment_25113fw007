//Write a program to check Armstrong number.
#include<stdio.h>
int main()
{
    int n, Num, rem, result = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    Num = n;
    while (Num != 0)
    {
        rem = Num % 10; //rem = remainder
        result = result + rem * rem * rem;
        Num =Num / 10;
    }
    if (result == n)
        printf("%d is an Armstrong number.", n);
    else
        printf("%d is not an Armstrong number.", n);
    return 0;
}