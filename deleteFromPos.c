
// delete data from end of linkedlist

#include <stdio.h>
#include <stdlib.h>
void creatingNode();
void deleteFromLast();
void display();
void main()
{
    creatingNode();
    display();
    deleteFromLast();
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
}

void deleteFromLast()
{
    int pos, i = 1;
    struct node *nextnode;
    printf("\nenter the position to delete data");
    scanf("%d", &pos);
    printf("when you delete data from %dth position\n", pos);
    temp = head;
    if (pos <= 0)
    {
        printf("no data at position 0 insert greater than zero\n");
    }
    else if (pos > count)
    {
        printf("position greater than list insert between 1 to %d\n", count);
    }
    else
    {
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        nextnode = temp->next;
        temp->next = nextnode->next;
        free(nextnode);
    }
}
