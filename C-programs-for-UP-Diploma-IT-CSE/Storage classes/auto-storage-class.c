#include<stdio.h>
void main()
{
    auto int i = 1;
    {
        auto int i = 2;
        {
            auto int i = 3;
            printf("%d\n",i); 
        }
        printf("%d\n",i);
    }
    printf("%d\n",i);
}