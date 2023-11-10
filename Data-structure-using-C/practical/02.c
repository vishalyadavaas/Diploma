//multiplication of two matrices

#include<stdio.h>
void main()
{
    int i,j,m,n,p,q,k,sum;
    int a[50][50],b[50][50],c[50][50];
    //input 1st matrix
    printf("enter the size of row and column of 1st matrix:");
    scanf("%d %d",&m,&n);
    printf("enter the element of 1st matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //input 2nd matrix
    printf("enter the size of row and column of 2nd matrix:");
    scanf("%d %d",&p,&q);
    printf("enter the element of 2nd matrix:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    //print 1st matrix
    printf("1st matrix \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    //print 2nd matrix
    printf("2nd matrix\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
        printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    //multiplication
    if(n!=p)
    {
        printf("invalid matrix");
    }
    else
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
               sum=0;
               for(k=0;k<m;k++)
               {
                   sum=sum+(a[i][k]*b[k][j]);
                   c[i][j]=sum;
               }
            }
        }
    }
    //multiplication print
    printf("Multiplication\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}