
// insert value at beginning in Doubly linked list

#include <stdio.h>
#include <stdlib.h>
void createNode();
void display();
void insert();
void main()
{
    createNode();
    display();
    insert();
    display();
}
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head;
void createNode()
{
    int choice;
      struct node *newnode, *temp;
        head = 0;
        while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data ");
        scanf("%d", &newnode->data);
        newnode->prev = 0;
        newnode->next = 0;

        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {

            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
        printf("do yo want to continue press 0 for no 1 for yes");
        scanf("%d", &choice);
    }
}

void display()
{
    struct node *temp;
    printf("your data in linked list is");
    temp = head;
    while (temp != 0)
    {
        printf(" %d", temp->data);
        temp = temp->next;
    }
}
void insert(){
    struct node *newnode;
     newnode = (struct node *)malloc(sizeof(struct node));
        printf("\nenter the data ");
        scanf("%d", &newnode->data);
    printf("after inserting node at position first \n");
        newnode->prev = 0;
        newnode->next = head;
        head->prev=newnode;
        head=newnode;

}
