//  function with array

#include<stdio.h>
void disp(int[],int); //function declaration
void main()
{
    int a[5];
    int i;
    printf("Enter the 5 values of array :\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    disp(a,5); // function call
}
void disp(int a[],int s) // function definition          //formal parameter me address pass hoga na ki value
{
    int i,sum =0;
    printf("element are :\n");
    for(i=0;i<s;i++)
    {
        printf("%d\t",a[i]);
        sum = sum+a[i];
    }
    printf("\n");
    printf("total = %d",sum);
}