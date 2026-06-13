//write a program to find largest prime factors
#include<stdio.h>
int main()
{
    int n, i, max;
    printf("enter the number:");
    scanf("%d", &n);
    for(i=2; i<=n; i++)
    {
        if(n%i == 0)
        {
            max = i;
            n = n/i;
        }
    }
    printf("largest prime factor is %d", max);
    return 0;
}