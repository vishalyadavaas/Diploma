// --------array of pointer------

#include<stdio.h>
void main()
{
    int i;
    int a[3];
    int *b[3];
    printf("Enter a array :\n");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("using array\n");
    for(i=0;i<3;i++)
    {
        printf("%d\n",a[i]);
        b[i] = &a[i];
    }
    printf("Using array pointer\n");
    for(i=0;1<3;i++)
    {
        printf("%d\n",*b[i]);
    }
}