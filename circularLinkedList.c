
//creating Linked list and tranversing it.

#include <stdio.h>
#include <stdlib.h>
void createNode();
void display();
void main()
{
    createNode();
    display();
}
//creating node
struct node
{
    int data;
    struct node *next;
};
struct node *head, *newnode;
void createNode()
{
    struct node *temp;
    head = 0;
    int choice;
    while (choice)
    {
        // giving the 8 byte memory to node using malloc
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter data");
        scanf("%d", &newnode->data); //here we use newnode to scan the address of data because we cannot directly access to struct node variables.
        newnode->next = 0;

        // giving the address of 1st node to the head
        if (head == 0)
        {
            head = temp = newnode; // here we take temp because head is fixed we cannot change head so temp is used to store newnode value
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        temp->next = head;
        printf("do you want to contine press 0 for No 1 for yes");
        scanf("%d", &choice);
    }

    // for printing the data
}
void display()
{
    struct node *temp;
    printf("your data in circular linked list is");
    temp = head;
    while (temp->next != head)
    {
        printf(" %d", temp->data);
        temp = temp->next;
    }

    printf(" %d", temp->data);
}