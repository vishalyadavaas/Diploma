//after given position

#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head,*new,*temp;
    head=0;
    int choice, count=0,pos,i=1;
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
    // after given position
    struct node *new1;
    new1 = (struct node*)malloc(sizeof(struct node));
    printf("Enter the position :");
    scanf("%d",&pos);
    temp=head;
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    printf("Enter the data for new node :");
    scanf("%d",&new1->data);
    new1->next=temp->next;
    temp->next=new1;
    // 
    temp=head;
    printf("all nodes data :\n");
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
        count++;
    }
    printf("Total no of nodes : %d",count);
}