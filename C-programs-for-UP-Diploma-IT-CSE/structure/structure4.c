// addtion of three number and its average using structure---

#include<stdio.h>
struct add
{
    int m;
    int n;
    int p;
};
void main()
{
    int a;
    float b;
    struct add s;
    printf("enter 1st number :");
    scanf("%d",&s.p);
    printf("enter 2nd number :");
    scanf("%d",&s.n);
    printf("enter 3rd number :");
    scanf("%d",&s.m);
    a = s.m+s.n+s.p;
    b = a/3;
    printf("addition is %d\n",a);
    printf("Average is %f\n",b);
}
