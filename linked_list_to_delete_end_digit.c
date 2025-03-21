#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void append(struct Node** head, int new_data) {
    struct Node* new_node = createNode(new_data);
    if (*head == NULL) {
        *head = new_node;
        return;
    }
    struct Node* last = *head;
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;
}

void deleteLastNode(struct Node** head) {
    if (*head == NULL) {
        printf("The list is empty,\n");
        return;
    }
    
    struct Node* temp = *head;
    
    if (temp->next == NULL) {
        free(temp);
        *head = NULL;
        return;
    }
    
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    
    free(temp->next);
    temp->next = NULL;
}
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}
int main() {
    struct Node* head = NULL;

    append(&head, 10);
    append(&head, 20);
    append(&head, 30);
    append(&head, 40);

    printf("Original Linked List: ");
    printList(head);

    deleteLastNode(&head);
    printf("Linked List after deleting the last node: ");
    printList(head);

    while (head != NULL) {
        deleteLastNode(&head);
    }

    return 0;
}