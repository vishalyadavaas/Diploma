#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter 1st number :");
    scanf("%d",&a);
    printf("Enter 2nd number :");
    scanf("%d",&b);
    goto sum;
    sum:
    printf("Sum is %d",a+b);  
}