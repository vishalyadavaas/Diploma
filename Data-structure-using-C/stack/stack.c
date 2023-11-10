#include<stdio.h>
void push(void);
void pop(void);
void display(void);
int stack[20],choice,size,top,a,i;
void main()
{
    top=-1;
    printf("enter the size of stack :");
    scanf("%d",&size);
    printf("1.push\n 2.pop\n 3.display\n 4.exit\n");
    do
    {
        printf("enter choice :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("exit");
                break;
            }
            default:
            {
                printf("invalid choice !");
            }
        }
    }
    while(choice!=4);
}
void push()
{
    if(top>=size-1)
    {
        printf("stack is overflow condition\n");
    }
    else
    {
        printf("enter value to be pushed :");
        scanf("%d",&a);
        top++;
        stack[top]=a;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("stack is underflow condition\n");
    }
    else
    {
        printf("poped element is %d\n",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("element in stack :\n");
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
    else
    {
        printf("stack is empty");
    }
}