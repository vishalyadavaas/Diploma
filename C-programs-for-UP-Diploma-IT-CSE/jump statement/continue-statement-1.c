#include<stdio.h>
void main()
{
    int a,b,c=0;
    for(b=1;b<=5;b++)
    {
        printf("Enter a number :");
        scanf("%d",&a);
        if(a<0)
        continue;
        c = c+a;
    }
    printf("%d",c);
   
}