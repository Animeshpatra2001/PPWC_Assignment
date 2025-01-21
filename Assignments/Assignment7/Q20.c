#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void append(struct Node** head, int value) {
    struct Node* newNode = createNode(value);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void swap(struct Node* a, struct Node* b) {
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}

void sortList(struct Node* head) {
    if (head == NULL) return;

    struct Node* i = head;
    struct Node* j = NULL;
    int swapped;

    do {
        swapped = 0;
        i = head;
        while (i->next != j) {
            if (i->data > i->next->data) {
                swap(i, i->next);
                swapped = 1;
            }
            i = i->next;
        }
        j = i;
    } while (swapped);
}

int main() {
    int n, value;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    struct Node* head = NULL;

    for (int i = 0; i < n; i++) {
        printf("Enter the value for node %d: ", i + 1);
        scanf("%d", &value);
        append(&head, value);
    }

    printf("Linked list before sorting: ");
    printList(head);

    sortList(head);

    printf("Linked list after sorting: ");
    printList(head);

    return 0;
}