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
        q = p;
        q->next = temp;
        temp->next = q;
    }
    return (head);
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
    int ch = 1;
    while (ch == 1)
    {
        printf("Enter value to be inserted in linked list");
        scanf("%d", &value);
        printf("\nEnter place to insert: \n");
        printf("1... First\n2...After\n3...Last");
        scanf("%d", &ins);
        switch (ins)
        {
        case 1:
            head = addNodeFirst(head, value);
            break;
        case 2:
            printf("\n Enter place: ");
            scanf("%d", &aft);
            head = addNodeAfter(head, value, aft);
            break;
        case 3:
            head = addNodeLast(head, value);
            break;
        }
        printf("\nDo you want to continue : YES-1/No-0 :\n");
        scanf("%d ", &ch);
    }
    printlist(head);

    return 0;
}