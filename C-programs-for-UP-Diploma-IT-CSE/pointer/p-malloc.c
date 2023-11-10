// dynamic memory allocation using malloc function

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,n,*ptr;
    printf("enter the total no of values :");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));
    printf("enter values :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("entered values are :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(ptr+i));
    }
    free(ptr);
}