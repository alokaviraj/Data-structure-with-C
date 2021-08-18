// deleteFromGivenPosition in doubly linkedlist;

#include <stdio.h>
#include <stdlib.h>
void createNode();
void display();
void delete();
void main()
{
    createNode();
    display();
    delete();
    display();
}
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head;
int count;

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
        count++;
    }
}
void delete()
{
    struct node  *prenode, *currnode, *nextnode;
    prenode = currnode = head;
    int pos, i = 1;
    printf("\nenter the position to delete the value ");
    scanf("%d", &pos);
    if (pos > count || pos < 0)
    {
        printf("enter position between 0 to %d\n", count);
    }
    else
    {
        while (i < pos)
        {
            prenode = currnode;
            currnode = currnode->next;
            i++;
        }
        nextnode = currnode->next;
        prenode->next = nextnode;
        nextnode->prev = prenode;
        free(currnode);
    }
}
