// take 3 input number and find the greatest number--------

#include<stdio.h>
void main()
{
    int a,b,c;
    int *p,*q,*r;
    printf("Enter 1st number :");
    scanf("%d",&a);
    printf("Enter 2nd number :");
    scanf("%d",&b);
    printf("Enter 3rd number :");
    scanf("%d",&c);
    p = &a;
    q = &b;
    r = &c;
    if(*p>*q&&*p>*r)
    {
        printf("%d is greatest number",*p);
    }
    if(*q>*p&&*q>*r)
    {
        printf("%d is greatest number",*q);
    }
    if(*r>*q&&*r>*p)
    {
        printf("%d is greatest number",*r);
    }

}