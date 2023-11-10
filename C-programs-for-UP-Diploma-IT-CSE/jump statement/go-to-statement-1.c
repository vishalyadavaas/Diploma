// checking number is odd or even by using goto statement-------

#include<stdio.h>
void main()
{
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    if(a%2==0)
    goto even;
    else
    goto odd;
    even:
    printf("Number is even");
    return;
    odd:
    printf("Number is odd");
    return;
}