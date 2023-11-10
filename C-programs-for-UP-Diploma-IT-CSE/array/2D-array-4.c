//------WAP to add two matrix---------------

#include<stdio.h>
void main()
{
    int i,j;
    int a[2][3];
    int b[2][3];
    int c[2][3];
    //input 1st matrix
    printf("Enter the 1st 2D array :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //input 2nd matrix 
    printf("Enter the 2nd 2D array :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    //printing 1st matrix
    printf("1st Matrix is :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    //printing 2nd matrix
    printf("2nd Matrix is :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    //adding matrix
    printf("1st Matrix + 2nd Matrix is :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j] = a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}