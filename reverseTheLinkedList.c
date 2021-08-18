
// Reverse the linked list

#include <stdio.h>
#include <stdlib.h>
void creatingNode();
void reverse();
void display();
void main()
{
    creatingNode();
    display();
    reverse();
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
void display(){
    printf("your data in linked list is");
    temp = head;
    while (temp != 0)
    {
        printf(" %d", temp->data);
        temp = temp->next;
    }

}

void reverse(){
    printf("\nafter Reversing the list\n");
    struct node *prevnode, *currnode,*nextnode;
    prevnode=0;
    currnode=nextnode=head;
    while (currnode!=0)
    {
        nextnode=nextnode->next;
        currnode->next=prevnode;
        prevnode=currnode;
        currnode=nextnode; 
    }
    head=prevnode;
}
