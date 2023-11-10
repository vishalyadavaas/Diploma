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
    printf("Entered data is :\n");
    while (temp != 0)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
void main()
{
    create();
    display();
}