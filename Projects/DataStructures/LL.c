#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;

struct Node {
    int data;
    Node* next;
};

void insertAtFirst(Node** head_ref, Node** tail_ref, int data) {
    Node* new_node = (Node*)malloc(sizeof(Node));

    if (*head_ref == NULL) {
        *tail_ref = new_node;
    }

    new_node->data = data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void insertAtLast(Node** tail_ref, int data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;
    (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}

void printList(Node* node_pointer) {
    while (node_pointer != NULL) {
        printf("%d  ", node_pointer->data);
        node_pointer = node_pointer->next;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insertAtFirst(&head, &tail ,10);
    insertAtFirst(&head, &tail ,45);

    printList(head);

    return 0;
}