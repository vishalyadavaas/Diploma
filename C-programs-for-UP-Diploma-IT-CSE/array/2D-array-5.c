//----WAP to print multiplication of two matrixes-------

#include<stdio.h>
void main()
{
    int i,j,m,n,p,q,k,sum;
    int a[50][50],b[50][50],c[50][50];
    //input 1st matrix
    printf("Enter the no of row & column of 1st matrix :");
    scanf("%d %d",&m,&n);
    printf("Enter the 1st matrix :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //input 2nd matrix
    printf("Enter the no of row & column of 2nd matrix :");
    scanf("%d %d",&p,&q);
    printf("Enter the 2nd matrix :\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    //printing 1st matrix-
    printf("1st matrix is :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    //printing 2nd matrix-
    printf("2nd matrix is :\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    if(n!=p)
    {
        printf("you can't multiply!");
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
                    sum = sum+(a[i][k]*b[k][j]);
                    c[i][j]=sum;
                }

            }
        }
    }
    //printing multiplication of matrix
    printf("Multiplication is :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

}