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
