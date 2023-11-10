#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head,*newnode,*temp;
    head=0;
    int choice,count=0;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data :\n");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("do you want to continue(0,1) :");
        scanf("%d",&choice);
    }
    temp=head;
    printf("Entered data is :\n");
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
        count++;
    }
    printf("Total no of nodes : %d",count);
}