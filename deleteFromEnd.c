
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
    }
}

void deleteFromLast()
{ 
    struct node *prevnode;
    printf("\nwhen you delete data from end\n");
    temp = head;
    if(head==0){
        printf("no data i list");
    }
    else{
        while (temp->next!=0)
        {
            prevnode=temp;
            temp=temp->next;
        }
        prevnode->next=0;
        free(temp);
    }
}
