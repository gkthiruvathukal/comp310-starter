#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void push(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}

void deleteNode(struct Node **head_ref, int key) {
    struct Node* temp = *head_ref, *prev;
    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) return;
    prev->next = temp->next;
    free(temp);
}

void printList(struct Node *node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

void deleteList(struct Node** head_ref) {
    struct Node* current = *head_ref;
    struct Node* next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
    *head_ref = NULL;
}

int main() {
    struct Node* head = NULL;
    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);
    printf("\nCreated Linked list is: \n");
    printList(head);
    deleteNode(&head, 1);
    printf("\nLinked List after Deletion of 1: \n");
    printList(head);
    deleteList(&head);
    return 0;
}
