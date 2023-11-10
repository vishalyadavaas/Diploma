// insertion at end

#include<stdio.h>
#include<stdlib.h>

void main()
{
    struct node
    {
        int data;
        struct node *link;
    };
    struct node *new,*temp,*head;
    head=0;
    int choice;
    while(choice)
    {
        new=(struct node*)malloc(sizeof(struct node));
        printf("enter the data :");
        scanf("%d",&new->data);
        new->link=0;
        if(head==0)
        {
            head=temp=new;
        }
        else
        {
            temp->link=new;
            temp=new;
        }
        printf("do you want to continue(0,1)");
        scanf("%d",&choice);
    }

// at end
   
    struct node *new1;
    new1=(struct node*)malloc(sizeof(struct node));
    printf("enter data :");
    scanf("%d",&new1->data);
    new1->link=0;
    temp=head;
    while(temp->link!=0)
    {
        temp=temp->link;
    }
    temp->link=new1;
//

    temp=head;
    while(temp!=0)
    {
        printf("%d\t",temp->data);
        temp=temp->link;
    }
}
    