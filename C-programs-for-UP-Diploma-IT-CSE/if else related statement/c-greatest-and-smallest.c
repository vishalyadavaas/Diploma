//---------find greatest and smallest number amoung given four number---------------

#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("Enter 1st number :");
    scanf("%d",&a);
    printf("Enter 2nd number :");
    scanf("%d",&b);
    printf("Enter 3rd number :");
    scanf("%d",&c);
    printf("Enter 4th number :");
    scanf("%d",&d);
    if((a>b)&&(a>c)&&(a>d))
    {
        printf("%d is gratest number\n",a);
    }
    if((b>a)&&(b>c)&&(b>d))
    {
        printf("%d is gratest number\n",b);
    }
    if((c>a)&&(c>b)&&(c>d))
    {
        printf("%d is gratest number\n",c);
    }
    if((d>a)&&(d>b)&&(d>c))
    {
        printf("%d is gratest number\n",d);
    }
    if((a<b)&&(a<c)&&(a<d))
    {
        printf("%d is smallest number\n",a);
    }
    if((b<a)&&(b<c)&&(b<d))
    {
        printf("%d is smallest number\n",b);
    }
    if((c<a)&&(c<b)&&(c<d))
    {
        printf("%d is smallest number\n",c);
    }
    if((d<a)&&(d<b)&&(d<c))
    {
        printf("%d is smallest number\n",d);
    }
}