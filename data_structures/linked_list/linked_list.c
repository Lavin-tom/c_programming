#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertNode(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

void printList(struct Node* node) {
    while(node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

int main() {
    struct Node* head = NULL;
    
    // Insert nodes at the beginning of the list
    insertNode(&head, 4);
    insertNode(&head, 2);
    insertNode(&head, 1);
    
    // Print the contents of the list
    printList(head);
    
    return 0;
}
