// This program demonstrate the implimentation of linked list
// Inseting the header file
#include <stdio.h>
#include <stdlib.h>

// Defining a node for linked list
struct Node
{
    int data;
    struct Node *next;
};

// Creating Node for linked list
struct Node *createNode()
{
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->next = NULL;
    return (temp);
};

// Inserting node at the begining
struct Node *addNodeFirst(struct Node *head, int value)
{
    struct Node *temp;
    temp = createNode();
    temp->data = value;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
    return (head);
}

// Inserting Node at the last
struct Node *addNodeLast(struct Node *head, int value)
{
    struct Node *temp, *p;
    temp = createNode();
    temp->data = value;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        p = head;
        while (p->next != NULL)
        {
            p = p->next;
            p->next = temp;
        }
    }
    return (head);
}

// Inserting after
struct Node *addNodeAfter(struct Node *head, int value, int pos)
{
    struct Node *temp, *p, *q;
    temp = createNode();
    temp->data = value;
    int count = 0;
    p = head;
    while (p == NULL || (count < pos))
    {
        p = p->next;
        count++;
    }
    if (count < pos)
    {
        printf("\n Underflow");
    }
    else
    {
        q = p->next;
        q->next = temp;
        temp->next = q;
    }
}

// Traversing linkedlist
void printlist(struct Node *head)
{
    while (head != NULL)
    {
        printf(" %d ", head->data);
        head = head->next;
    }
}

int main()
{
    struct Node *head;
    head = NULL;
    int value, ins, aft;
    int ch =1 ;
    while (ch==1){
        printf("Enter to va`")
    }
    return 0;
}