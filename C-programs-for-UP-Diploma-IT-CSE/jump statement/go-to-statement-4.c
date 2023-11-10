#include<stdio.h>
void main()
{
    int n,a=1;
    printf("Enter a number :");
    scanf("%d",&n);
    table:
    printf("%d*%d = %d\n",n,a,n*a);
    a++;
    if(a<=10)
    goto table;
}