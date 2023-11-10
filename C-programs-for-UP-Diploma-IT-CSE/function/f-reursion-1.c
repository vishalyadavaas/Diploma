//

#include<stdio.h>
void display(int);// function declaration 
void main()
{
    int n =3;
    display(n); // function call
}
void display(int n) // function definiation
{
    if(n<1)
    return;
    else
    {
        printf("%d",n);
        display(n-1);
        printf("%d",n);
    }
}