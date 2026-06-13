//write a program to   check whether a number is palindrome or not
#include<stdio.h>
int main()
{
    int num,rev =0,rem,temp;
    printf("enter the numbber:");
    scanf("%d",&num);
    temp =num;
    while(num > 0)
    {
        rem = num % 10;
        rev =rev*10 + rem;
        num = num / 10;

    }
    if(temp ==rev)
    printf("the number is palindrome\n");
    else 
    printf("the number is not palindrome\n");
    return 0;
    
    
}