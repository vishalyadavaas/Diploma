//----- if number entered is positive then will be accepted if you have entered negative number then loop will end---

#include<stdio.h>
void main()
{
    int a,b,c;
    for(b=1;b<=5;b++)
    {
        printf("Enter a number :");
        scanf("%d",&a);
        if(a<0)
        break;
        c=c+a;
    }
    printf("%d",c);
}