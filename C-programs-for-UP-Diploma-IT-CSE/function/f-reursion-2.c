// sum

#include<stdio.h>
int sum(int);
void main()
{
    int a;
    a = sum(5);
    printf("%d",a);
}
int sum(int x)
{
    int s = 0;
    if(x==1)
    return x;
    else
    {
        s = x+sum(x-1);
        return s;
    }
}