#include<stdio.h>
void main()
{
    int a;
    for(a=1;a<=5;a++)
    {
        if(a==3)
        continue;
        printf("%d\n",a);
    }
}