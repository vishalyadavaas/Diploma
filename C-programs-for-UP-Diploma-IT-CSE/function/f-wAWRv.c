// with argument with retun value----------

#include<stdio.h>
int sum(int,int);  // function declaration
void main()
{
    int a,b,c;
    printf("Enter 1st number :");
    scanf("%d",&a);
    printf("Enter 2nd number :");
    scanf("%d",&b);
    c = sum(a,b);  // function call
    printf("Sum is %d",c);
}
int sum(int a,int b)
{
    return a+b;
}