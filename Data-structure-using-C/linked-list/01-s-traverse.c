// traverse of linked list

#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct node
    {
        int data;
        struct node *link;
    };
    struct node *first,*second,*third,*fourth,*temp;
    first = (struct node*)malloc(sizeof(struct node));
    first->data=10;
    second = (struct node*)malloc(sizeof(struct node));
    second->data=20;
    third = (struct node*)malloc(sizeof(struct node));
    third->data=30;
    fourth = (struct node*)malloc(sizeof(struct node));
    fourth->data=40;
    temp = (struct node*)malloc(sizeof(struct node));
    first->link=second;
    second->link=third;
    third->link=fourth;
    fourth->link=NULL;
    temp = first;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp = temp->link;
    }
}