#include<stdio.h>
void main()
{
    int a;
    printf("Enter a number(a) : ");
    scanf("%d",&a);
    if(a>0)
    {
        printf("a is greater than 0\n");
        if(a%2==0)
        {
            printf("a is even number\n");
        }
        else
        {
            printf("a is odd number\n");
        }
    }
    else
    {
        printf("a is less than 0\n");
    }
}