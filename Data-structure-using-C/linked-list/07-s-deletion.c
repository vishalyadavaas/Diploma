// delete from end

#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head,*new,*temp,*pre;
    head=0;
    int choice;
    while(choice)
    {
        new = (struct node*)malloc(sizeof(struct node));
        printf("enter the data :");
        scanf("%d",&new->data);
        new->next=0;
        if(head==0)
        {
            head=temp=new;
        }
        else
        {
            temp->next=new;
            temp=new;
        }
        printf("do you want to continue (0,1) :");
        scanf("%d",&choice);
    }
    temp=head;
    printf("before deletion :\n");
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    //  deletion
    temp=head;
    while(temp->next!=0)
    {
        pre=temp;
        temp=temp->next;
    }
    pre->next=0;
    free(temp);
    // print 
    temp=head;
    printf("after deletion :\n");
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}