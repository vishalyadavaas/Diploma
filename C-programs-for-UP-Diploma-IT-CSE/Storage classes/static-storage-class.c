//----- static storage class----------
#include<stdio.h>
void ref()
{
    static int a=1;
    static int b=11;
    printf("%d %d\n",a,b);
    a++;
    b++;
}

int main()
{
    int i;
    for(i=1;i<=5;i++)
    {
        ref();
    }
}