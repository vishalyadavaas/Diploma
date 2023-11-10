//-----------add/subtraction/multiplication/division of two number using pointer--------

#include<stdio.h>
void main()
{
    int a,b,c,d,e,f,*p,*q;
    printf("Enter 1st number :");
    scanf("%d",&a);
    printf("Enter 2nd number :");
    scanf("%d",&b);
    p=&a;
    q=&b;
    c= *p + *q;
    d= *p - *q;
    e= *p * *q;
    f= *p / *q;

    printf(" Addtion is %d\n",c);
    printf(" subtraction is %d\n",d);
    printf(" multiplication is %d\n",e);
    printf(" division is %d\n",f);
}