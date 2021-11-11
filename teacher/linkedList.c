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

int main()
{
    printf("%s", createNode());
    printf("Hello world");
    return 0;
}