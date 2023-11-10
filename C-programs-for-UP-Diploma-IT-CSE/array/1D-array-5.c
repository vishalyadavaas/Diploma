//-----input 10 integer and print the  total numbers of odd & even-------

#include<stdio.h>
void main()

{
    int i;
    int a[10];
    int even=0,odd=0;
    printf("Enter the 10 integer :\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            even=even+1;
        }
        else
        {
            odd=odd+1;
        }
    }
    printf(" total even numbers : %d\n",even);
    printf(" total odd numbers : %d",odd);
    
}