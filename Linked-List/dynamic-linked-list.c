#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct node
{
    int data;
    Node *next;
};

Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

void printList(Node *head)
{
    Node *current = head;

    for (current = head; current != NULL; current = current->next)
    {
        printf("%d\n", current->data);
    };
}

void appendNode(Node **head, int data)
{
    // Step 1: Create new node
    Node *newNode = createNode(data);

    // Step 2: Append node

    // CASE 1: list is empty
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    // CASE 2: list is not empty

    // Find the last node
    Node *last = *head;
    while (last->next != NULL)
    {
        last = last->next;
    }

    // Append the new node
    last->next = newNode;
    return;
}

void deleteNode(Node **head, int data)
{
    // Step 1: Find the node to delete
    Node *target = *head;
    Node *prev = NULL;

    while (target != NULL && target->data != data)
    {
        prev = target;
        target = target->next;
    }

    // Step 2: Check the node exists
    if (target == NULL)
    {
        return;
    }

    // Step 3: Delete the node

    // Case 1: Delete the first node
    if (target == *head)
    {
        *head = target->next;
        free(target);
        return;
    }

    // Case 2: Delete the last or middle node
    prev->next = target->next;
    free(target);
}

int main()
{
    Node *list = NULL;

    // Append three nodes
    appendNode(&list, 1);
    printf("\nAfter appending 1:\n");
    printList(list);

    appendNode(&list, 2);
    printf("\nAfter appending 2:\n");
    printList(list);

    appendNode(&list, 3);
    printf("\nAfter appending 3:\n");
    printList(list);

    appendNode(&list, 4);
    printf("\nAfter appending 4:\n");
    printList(list);

    appendNode(&list, 5);
    printf("\nAfter appending 5:\n");
    printList(list);

    // After deleting head
    deleteNode(&list, 1);
    printf("\nAfter deleting 1:\n");
    printList(list);

    // After deleting middle
    deleteNode(&list, 3);
    printf("\nAfter deleting 3:\n");
    printList(list);

    // After deleting last
    deleteNode(&list, 5);
    printf("\nAfter deleting 5:\n");
    printList(list);

    return 0;
}