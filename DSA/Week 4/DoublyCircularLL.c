/*2) Write a Menu driven C program to accomplish the following functionalities in circular
doubly linked list.
a) Create a circular doubly linked list.
b) Display the elements of a circular doubly linked list.
c) Insert a node at the beginning of a circular doubly linked list.
d) Insert a node at the end of a circular doubly linked list.
e) Delete a node from the beginning of a circular doubly linked list.
f) Delete a node from the end of a circular doubly linked list.
g) Delete a node after a given node of a circular doubly linked list.
h) Delete the entire circular doubly linked list.*/


#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function prototypes
void createCircularDoublyLinkedList(struct Node** head);
void displayCircularDoublyLinkedList(struct Node* head);
void insertAtBeginning(struct Node** head, int data);
void insertAtEnd(struct Node** head, int data);
void deleteFromBeginning(struct Node** head);
void deleteFromEnd(struct Node** head);
void deleteAfterNode(struct Node** head, int target);
void deleteEntireList(struct Node** head);

int main() {
    struct Node* head = NULL;
    int choice, data, target;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Create a circular doubly linked list\n");
        printf("2. Display the circular doubly linked list\n");
        printf("3. Insert at the beginning\n");
        printf("4. Insert at the end\n");
        printf("5. Delete from the beginning\n");
        printf("6. Delete from the end\n");
        printf("7. Delete after a given node\n");
        printf("8. Delete the entire circular doubly linked list\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createCircularDoublyLinkedList(&head);
                break;
            case 2:
                displayCircularDoublyLinkedList(head);
                break;
            case 3:
                printf("Enter data to insert at the beginning: ");
                scanf("%d", &data);
                insertAtBeginning(&head, data);
                break;
            case 4:
                printf("Enter data to insert at the end: ");
                scanf("%d", &data);
                insertAtEnd(&head, data);
                break;
            case 5:
                deleteFromBeginning(&head);
                break;
            case 6:
                deleteFromEnd(&head);
                break;
            case 7:
                printf("Enter the target node data: ");
                scanf("%d", &target);
                deleteAfterNode(&head, target);
                break;
            case 8:
                deleteEntireList(&head);
                break;
            case 9:
                deleteEntireList(&head);
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

// Function to create a circular doubly linked list
void createCircularDoublyLinkedList(struct Node** head) {
    int n, data;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        insertAtEnd(head, data);
    }
}

// Function to display a circular doubly linked list
void displayCircularDoublyLinkedList(struct Node* head) {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    struct Node* temp = head;
    printf("The circular doubly linked list is: ");
    do {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(back to head)\n");
}

// Function to insert a node at the beginning of a circular doubly linked list
void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    if (*head == NULL) {
        newNode->next = newNode->prev = newNode;
        *head = newNode;
        return;
    }

    struct Node* tail = (*head)->prev;
    newNode->next = *head;
    newNode->prev = tail;
    tail->next = newNode;
    (*head)->prev = newNode;
    *head = newNode;
}

// Function to insert a node at the end of a circular doubly linked list
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    if (*head == NULL) {
        newNode->next = newNode->prev = newNode;
        *head = newNode;
        return;
    }

    struct Node* tail = (*head)->prev;
    newNode->next = *head;
    newNode->prev = tail;
    tail->next = newNode;
    (*head)->prev = newNode;
}

// Function to delete a node from the beginning of a circular doubly linked list
void deleteFromBeginning(struct Node** head) {
    if (*head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    struct Node* tail = (*head)->prev;
    struct Node* temp = *head;

    if (*head == (*head)->next) {
        *head = NULL;
    } else {
        *head = (*head)->next;
        (*head)->prev = tail;
        tail->next = *head;
    }
    free(temp);
}

// Function to delete a node from the end of a circular doubly linked list
void deleteFromEnd(struct Node** head) {
    if (*head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    struct Node* tail = (*head)->prev;

    if (*head == (*head)->next) {
        free(tail);
        *head = NULL;
    } else {
        struct Node* prev = tail->prev;
        prev->next = *head;
        (*head)->prev = prev;
        free(tail);
    }
}

// Function to delete a node after a given node of a circular doubly linked list
void deleteAfterNode(struct Node** head, int target) {
    if (*head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    struct Node* temp = *head;

    do {
        if (temp->data == target) {
            struct Node* toDelete = temp->next;

            if (toDelete == *head) { // Cannot delete the head in this operation
                printf("Cannot delete the head node using this operation.\n");
                return;
            }

            temp->next = toDelete->next;
            toDelete->next->prev = temp;

            free(toDelete);
            return;
        }
        temp = temp->next;
    } while (temp != *head);

    printf("Target node not found.\n");
}

// Function to delete the entire circular doubly linked list
void deleteEntireList(struct Node** head) {
    if (*head == NULL) {
        printf("The list is already empty.\n");
        return;
    }

    struct Node* temp = *head;
    struct Node* nextNode;

    do {
        nextNode = temp->next;
        free(temp);
        temp = nextNode;
    } while (temp != *head);

    *head = NULL;
    printf("The entire list has been deleted.\n");
}
