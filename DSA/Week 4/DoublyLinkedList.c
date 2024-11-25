/*1) Write a Menu driven C program to accomplish the following functionalities in doubly
linked list.
a) Create a doubly linked list.
b) Display the elements of a doubly linked list.
c) Insert a node at the beginning of a doubly linked list.
d) Insert a node at the end of a doubly linked list.
e) Insert a node before a given node of a doubly linked list.
f) Insert a node after a given node of a doubly linked list.
g) Delete a node from the beginning of a doubly linked list.
h) Delete a node from the end of a doubly linked list.
i) Delete a node after a given node of a doubly linked list.
j) Delete the entire doubly linked list.*/

#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function prototypes
void createDoublyLinkedList(struct Node** head);
void displayDoublyLinkedList(struct Node* head);
void insertAtBeginning(struct Node** head, int data);
void insertAtEnd(struct Node** head, int data);
void insertBeforeNode(struct Node** head, int target, int data);
void insertAfterNode(struct Node* head, int target, int data);
void deleteFromBeginning(struct Node** head);
void deleteFromEnd(struct Node** head);
void deleteAfterNode(struct Node* head, int target);
void deleteEntireList(struct Node** head);

int main() {
    struct Node* head = NULL;
    int choice, data, target;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Create a doubly linked list\n");
        printf("2. Display the doubly linked list\n");
        printf("3. Insert at the beginning\n");
        printf("4. Insert at the end\n");
        printf("5. Insert before a given node\n");
        printf("6. Insert after a given node\n");
        printf("7. Delete from the beginning\n");
        printf("8. Delete from the end\n");
        printf("9. Delete after a given node\n");
        printf("10. Delete the entire doubly linked list\n");
        printf("11. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createDoublyLinkedList(&head);
                break;
            case 2:
                displayDoublyLinkedList(head);
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
                printf("Enter the target node data and the new data: ");
                scanf("%d %d", &target, &data);
                insertBeforeNode(&head, target, data);
                break;
            case 6:
                printf("Enter the target node data and the new data: ");
                scanf("%d %d", &target, &data);
                insertAfterNode(head, target, data);
                break;
            case 7:
                deleteFromBeginning(&head);
                break;
            case 8:
                deleteFromEnd(&head);
                break;
            case 9:
                printf("Enter the target node data: ");
                scanf("%d", &target);
                deleteAfterNode(head, target);
                break;
            case 10:
                deleteEntireList(&head);
                break;
            case 11:
                deleteEntireList(&head);
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

// Function to create a doubly linked list
void createDoublyLinkedList(struct Node** head) {
    int n, data;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        insertAtEnd(head, data);
    }
}

// Function to display a doubly linked list
void displayDoublyLinkedList(struct Node* head) {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    printf("The doubly linked list is: ");
    while (head != NULL) {
        printf("%d <-> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Function to insert a node at the beginning of a doubly linked list
void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = *head;

    if (*head != NULL) {
        (*head)->prev = newNode;
    }
    *head = newNode;
}

// Function to insert a node at the end of a doubly linked list
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp = *head;
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        newNode->prev = NULL;
        *head = newNode;
        return;
    }

    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

// Function to insert a node before a given node
void insertBeforeNode(struct Node** head, int target, int data) {
    struct Node* temp = *head;

    if (*head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    while (temp != NULL && temp->data != target) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Target node not found.\n");
        return;
    }

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = temp->prev;
    newNode->next = temp;

    if (temp->prev != NULL) {
        temp->prev->next = newNode;
    } else {
        *head = newNode;
    }
    temp->prev = newNode;
}

// Function to insert a node after a given node
void insertAfterNode(struct Node* head, int target, int data) {
    while (head != NULL && head->data != target) {
        head = head->next;
    }

    if (head == NULL) {
        printf("Target node not found.\n");
        return;
    }

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head->next;
    newNode->prev = head;

    if (head->next != NULL) {
        head->next->prev = newNode;
    }
    head->next = newNode;
}

// Function to delete a node from the beginning of a doubly linked list
void deleteFromBeginning(struct Node** head) {
    if (*head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    struct Node* temp = *head;
    *head = (*head)->next;

    if (*head != NULL) {
        (*head)->prev = NULL;
    }
    free(temp);
}

// Function to delete a node from the end of a doubly linked list
void deleteFromEnd(struct Node** head) {
    if (*head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    struct Node* temp = *head;

    if (temp->next == NULL) {
        free(temp);
        *head = NULL;
        return;
    }

    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->prev->next = NULL;
    free(temp);
}

// Function to delete a node after a given node
void deleteAfterNode(struct Node* head, int target) {
    while (head != NULL && head->data != target) {
        head = head->next;
    }

    if (head == NULL || head->next == NULL) {
        printf("Target node not found or no node to delete after it.\n");
        return;
    }

    struct Node* temp = head->next;
    head->next = temp->next;

    if (temp->next != NULL) {
        temp->next->prev = head;
    }
    free(temp);
}

// Function to delete the entire doubly linked list
void deleteEntireList(struct Node** head) {
    struct Node* temp;

    while (*head != NULL) {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }

    printf("The entire list has been deleted.\n");
}
