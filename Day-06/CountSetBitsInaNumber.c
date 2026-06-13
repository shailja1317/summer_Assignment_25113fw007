//Write a program to count set bits in a number.
#include <stdio.h>
int countSetBits(int n) 
{
    int count = 0;
    while (n > 0) {
        count = count + (n & 1) ; 
        n >>= 1; 
    }
    return count;
} 
int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Number of set bits in %d is %d", n, countSetBits(n));
    return 0;
}