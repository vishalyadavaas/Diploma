#include<stdio.h>
void main()
{
    int i,j;
    int a[2][3],sum=0;
    float avg;
    printf("enter the element of array :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=sum+a[i][j];
        } 
    }
    printf("sum is %d\n",sum);
    avg=(float)sum/6;
    printf("average is %f",avg);
}