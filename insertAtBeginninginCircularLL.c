
// insert at beginning

#include <stdio.h>
#include <stdlib.h>
void creatingNode();
void insertnode();
void display();
void main()
{
    creatingNode();
    printf("hello");
    display();
    insertnode();

    display();
}
struct node
{
    int data;
    struct node *next;
};
struct node *head, *newnode, *temp;

void creatingNode()
{

    head = 0;
    int choice;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter data");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("do you want to continue press 0 for no 1 for yes");
        scanf("%d", &choice);
    }
}
void display()
{
    printf("your data in linked list is");
    temp = head;
    while (temp->next != head)
    {
        printf(" %d", temp->data);
        temp = temp->next;
    }
    printf("%d",temp->data);
}
void insertnode()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nenter data for insert a node at beginning");
    scanf("%d", &newnode->data);
    newnode->next=0;
    temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next=newnode;
    newnode->next = head;
    head = newnode;
}
