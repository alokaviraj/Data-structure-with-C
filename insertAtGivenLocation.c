
// insert at after given location

#include <stdio.h>
#include <stdlib.h>
void creatingNode();
void insertAtLocation();
void display();
void main()
{
    creatingNode();
    display();
    insertAtLocation();
    display();
}
struct node
{
    int data;
    struct node *next;
};
struct node *head, *newnode, *temp;
int count = 0;

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
    while (temp != 0)
    {
        printf(" %d", temp->data);
        temp = temp->next;
        count++;
    }
    printf("\ndata in linked list %d", count);
}

void insertAtLocation()
{
    int loc;
    int i = 1;
    printf("enter the location to insert data");
    scanf("%d", &loc);
    if (loc > count)
    {
        printf("invalid location");
    }
    else
    {
        temp = head;
        while (i < loc)
        {
            temp = temp->next;
            i++;
        }
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("\nenter data for insert a elemet at given  location");
        scanf("%d", &newnode->data);
        newnode->next = temp->next;
        temp->next = newnode;
    }
}
