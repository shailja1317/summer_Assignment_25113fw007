//write the program to find the product of digits
#include<stdio.h>
int main()
{
    int num, product = 1, rem;
    printf("enter the number :");
    scanf("%d",&num);
    while(num >  0)
    {
        rem = num % 10;
    product = product *rem; 
    num = num /10;
}
printf("the product of digits is %d\n",product);
return 0;
}
