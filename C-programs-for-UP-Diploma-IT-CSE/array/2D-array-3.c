//---------WAP to print sum of indiviual rows & columns------------

#include<stdio.h>
void main()
{
    int i,j;
    int a[3][3];
    printf("Enter the element of 2D array :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix is :\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        int rsum=0,csum=0;
        for(j=0;j<3;j++)
        {
            rsum = rsum+a[i][j];
            csum = csum+a[j][i];    
        }
        printf("Rowsum = %d,Colsum = %d\n",rsum,csum);
    }
    
}