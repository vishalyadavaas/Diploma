// WAP to take input element of 2D array and print it and find the sum of elements-------------

#include<stdio.h>
void main()
{
    int i,j;
    int a[2][3],sum=0;
    printf("Enter the element of 2D array :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix is :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
            sum = sum+a[i][j];
        }
        printf("\n");
    }
    printf("Sum is %d",sum);
}