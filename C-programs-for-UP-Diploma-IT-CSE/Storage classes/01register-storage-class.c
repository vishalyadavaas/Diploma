#include<stdio.h>
void main()
{
    register int i = 1;
    {
        register int i = 2;
        {
            register int i = 3;
            printf("%d\n",i); 
        }
        printf("%d\n",i);
    }
    printf("%d\n",i);
}