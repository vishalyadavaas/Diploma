#include<stdio.h>
void main()
{
    int i,a[5],sum=0,avg;
    printf("enter the element of arry:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    printf("sum is %d\n",sum);
    avg = sum/5;
    printf("average is %d",avg);
}