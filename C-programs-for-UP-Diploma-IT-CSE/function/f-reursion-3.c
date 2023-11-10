// factorial of number

#include<stdio.h>
int fac(int);
void main()
{
    int n,a;
    printf("Enter a number :");
    scanf("%d",&n);
    a = fac(n);
    printf("Factorial is %d",a);
}
int fac(int n)
{
    if(n==0)
    return 1;
    else
    return(n*fac(n-1));
}