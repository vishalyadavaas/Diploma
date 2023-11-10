#include<stdio.h>
void main()
{
    int i,j;
    int a[2][3],b[2][3],c[2][3];
    //input 1st matrix
    printf("enter the 1st matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //input 2nd matrix
    printf("enter the 2nd matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    //printing 1st matrix
    printf("1st Matrix \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    //printing 2nd matrix
    printf("2nd Matrix \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    //subtract two matrix
    printf("subtraction of two matrixes\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j] = a[i][j]-b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

}