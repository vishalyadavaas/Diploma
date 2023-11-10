#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *pre;
    int data;
    struct node *next;
};
struct node *head, *new;
void create()
{
    head = 0;
    int choice;
    struct node *temp;
    while (choice)
    {
        new = (struct node *)malloc(sizeof(struct node));
        printf("Enter data :");
        scanf("%d", &new->data);
        new->pre = 0;
        new->next = 0;
        if (head == 0)
        {
            head = temp = new;
        }
        else
        {
            temp->next = new;
            new->pre = temp;
            temp = new;
        }
        printf("do you want to continue :");
        scanf("%d", &choice);
    }
}
void display()
{
    struct node *temp;
    temp = head;
    while (temp != 0)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
void ins()
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("enter the data which you want to insert :");
    scanf("%d",&newnode->data);
    newnode->pre=0;
    newnode->next=0;
    head->pre=newnode;
    newnode->next=head;
    head=newnode;
}
void del()
{
    struct node *temp;
    if(head==0)
    {
        printf("list is empty");
    }
    else
    {
        temp=head;
        head=head->next;
        head->pre=0;
        free(temp);
    }
}
void main()
{
    create();
    ins();
    printf("Entered element is :\n");
    display();
    del();
    printf("after deleting element\n");
    display();
}