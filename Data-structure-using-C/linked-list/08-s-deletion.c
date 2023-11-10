// delete from given position

#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head,*new,*temp,*temp1;
    head=0;
    int choice,key;
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
    // deletion
    printf("enter the data of before the deleting node :");
    scanf("%d",&key);
    temp=head;
    while(temp->next!=0)
    {
        if(temp->data==key)
        {
            temp1=temp->next;
            temp->next=temp1->next;
            free(temp1);
            break;
        }
        temp=temp->next;
    }
    temp=head;
    printf("after deletion :\n");
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}