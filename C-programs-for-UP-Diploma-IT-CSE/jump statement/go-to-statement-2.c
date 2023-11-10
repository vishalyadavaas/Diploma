//-------printing number 1 to 10---

#include<stdio.h>
void main()
{
    int a=1;
    count:
    printf("%d\n",a);
    a++;
    if(a<=10)
    goto count;
}