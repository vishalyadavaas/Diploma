// use of for loop

#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter any number :\n");
    scanf("%d",&a);
    for(b=1;b<=10;b++)
    {
        printf("%d*%d = %d\n",a,b,a*b);
    }
}