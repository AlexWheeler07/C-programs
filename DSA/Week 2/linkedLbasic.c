#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* createnode(int data)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

void insertAtBeginning(struct node** head,int data)
{
    struct node* newnode = createnode(data);
    newnode->next = *head;
    *head = newnode;
}

