//addition of two matricec using functions

#include<stdio.h>
void add();
void main()
{
    add();
}
void add()
{
    int i,j;
    int a[2][3],b[2][3],c[2][3];
    //input 1st matrix
    printf("Enter the element of 1st matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //input 2nd matrix
    printf("Enter the element of 2nd matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    //print 1st matrix
    printf("1st matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    //print 2nd matrix
    printf("2nd matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    //adding matrices
    printf("1st matrix + 2nd matrix :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}