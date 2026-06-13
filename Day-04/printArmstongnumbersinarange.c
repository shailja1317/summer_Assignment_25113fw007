//Write a program to print Armstrong numbers in a range
#include<stdio.h>
int main()
{
    int n1, n2, n, Num, rem, result = 0;// n1 = staring number, n2 = ending number
    printf("Enter the n1 and n2 of the range: ");
    scanf("%d %d", &n1, &n2);
    printf("Armstrong numbers in the range %d to %d are: ", n1, n2);
    for (n = n1; n <= n2; n++)
    {
        Num = n;
        result = 0;
        while (Num != 0)
        {
            rem = Num % 10;
            result = result + rem * rem * rem;
            Num =Num / 10;
        }
        if (result == n)
            printf("%d ", n);
    }
    return 0;
}