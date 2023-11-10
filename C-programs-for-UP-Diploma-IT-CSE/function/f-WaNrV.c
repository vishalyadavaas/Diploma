// With argument no retun value-----

#include<stdio.h>
void sum(int,int);  // function declaration
void main()
{
    int a,b;
    printf("Enter 1st number :");
    scanf("%d",&a);
    printf("Enter 2nd number :");
    scanf("%d",&b);
    sum(a,b); // function call
}
void sum(int a,int b) // function definition
{
    int c;
    c= a+b;
    printf("sum is %d",c);
}