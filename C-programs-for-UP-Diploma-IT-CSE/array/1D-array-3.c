//------------WAP to read marks of 5 students calulate sum & avg using array------------

#include<stdio.h>
void main()
{
    int i;
    float marks[5];
    float sum=0,avg;
    printf("Enter the marks of five students :\n");
    for(i=0;i<5;i++)
    {
        scanf("%f",&marks[i]);
    }
    for(i=0;i<5;i++)
    {
        sum = sum+marks[i];
    }
    avg = sum/5;
    printf("Sum is %f\n",sum);
    printf("Average is %f",avg);
}