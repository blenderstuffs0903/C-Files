#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

void insertAtFirst(Node **head_ref, Node **tail_ref,int data) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    if (*head_ref == NULL) {
         *tail_ref = newNode;
    }
    newNode->data = data;
    newNode->next = *head_ref;
    *head_ref = newNode;
}

void insertAtLast(Node **tail_ref, int data) {
    Node *new_node = (Node*)malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;
    (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}

void printList(Node *node_pointer)
{
    while (node_pointer != NULL)
    {
        printf("%d ", node_pointer->data);
        node_pointer = node_pointer->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtFirst(&head, &tail, 12);
    insertAtFirst(&head, &tail, 23);

    insertAtLast(&tail, 34);
    insertAtLast(&tail, 45);
    printList(head);
    return 0;
}
