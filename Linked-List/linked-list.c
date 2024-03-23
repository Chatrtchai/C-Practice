#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct node
{
    int data;
    Node *next;
};

int main()
{
    // Create and allocate memory for the nodes
    Node *n1 = (Node *)malloc(sizeof(Node));
    Node *n2 = (Node *)malloc(sizeof(Node));
    Node *n3 = (Node *)malloc(sizeof(Node));

    // Assign data to each node
    n1->data = 1;
    n2->data = 2;
    n3->data = 3;

    // Link the nodes together
    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    // Print the linked list
    Node *current = n1;
    while (current != NULL)
    {
        printf("%d\n", current->data);
        current = current->next;
    }

    return 0;
}