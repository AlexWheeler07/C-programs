/*2) Write a Menu driven C program to accomplish the following functionalities in circular
linked list.
a) Create a circular linked list.
b) Display the elements of a circular linked list.
c) Insert a node at the beginning of a circular linked list.
d) Insert a node at the end of a circular linked list.
e) Delete a node from the beginning of a circular linked list.
f) Delete a node from the end of a circular linked list.
g) Delete a node after a given node of a circular linked list.
h) Delete the entire circular linked list.*/

#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int data;
    struct Node* next;
};

// Function prototypes
void createCircularList(struct Node** last);
void displayCircularList(struct Node* last);
void insertAtBeginning(struct Node** last, int data);
void insertAtEnd(struct Node** last, int data);
void deleteFromBeginning(struct Node** last);
void deleteFromEnd(struct Node** last);
void deleteAfterNode(struct Node* last, int target);
void deleteEntireList(struct Node** last);

int main() {
    struct Node* last = NULL;
    int choice, data, target;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Create a circular linked list\n");
        printf("2. Display the circular linked list\n");
        printf("3. Insert at the beginning\n");
        printf("4. Insert at the end\n");
        printf("5. Delete from the beginning\n");
        printf("6. Delete from the end\n");
        printf("7. Delete after a given node\n");
        printf("8. Delete the entire circular linked list\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createCircularList(&last);
                break;
            case 2:
                displayCircularList(last);
                break;
            case 3:
                printf("Enter data to insert at the beginning: ");
                scanf("%d", &data);
                insertAtBeginning(&last, data);
                break;
            case 4:
                printf("Enter data to insert at the end: ");
                scanf("%d", &data);
                insertAtEnd(&last, data);
                break;
            case 5:
                deleteFromBeginning(&last);
                break;
            case 6:
                deleteFromEnd(&last);
                break;
            case 7:
                printf("Enter the target node data: ");
                scanf("%d", &target);
                deleteAfterNode(last, target);
                break;
            case 8:
                deleteEntireList(&last);
                break;
            case 9:
                deleteEntireList(&last);
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

// Function to create a circular linked list
void createCircularList(struct Node** last) {
    int n, data;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        insertAtEnd(last, data);
    }
}

// Function to display a circular linked list
void displayCircularList(struct Node* last) {
    if (last == NULL) {
        printf("The list is empty.\n");
        return;
    }

    struct Node* temp = last->next;
    printf("The circular linked list is: ");
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != last->next);
    printf("HEAD\n");
}

// Function to insert a node at the beginning of a circular linked list
void insertAtBeginning(struct Node** last, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    if (*last == NULL) {
        newNode->next = newNode;
        *last = newNode;
    } else {
        newNode->next = (*last)->next;
        (*last)->next = newNode;
    }
}

// Function to insert a node at the end of a circular linked list
void insertAtEnd(struct Node** last, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    if (*last == NULL) {
        newNode->next = newNode;
        *last = newNode;
    } else {
        newNode->next = (*last)->next;
        (*last)->next = newNode;
        *last = newNode;
    }
}

// Function to delete a node from the beginning of a circular linked list
void deleteFromBeginning(struct Node** last) {
    if (*last == NULL) {
        printf("The list is empty.\n");
        return;
    }

    struct Node* temp = (*last)->next;

    if (*last == temp) {  // Single node
        free(temp);
        *last = NULL;
    } else {
        (*last)->next = temp->next;
        free(temp);
    }
}

// Function to delete a node from the end of a circular linked list
void deleteFromEnd(struct Node** last) {
    if (*last == NULL) {
        printf("The list is empty.\n");
        return;
    }

    struct Node* temp = (*last)->next;

    if (*last == temp) {  // Single node
        free(temp);
        *last = NULL;
    } else {
        while (temp->next != *last) {
            temp = temp->next;
        }
        temp->next = (*last)->next;
        free(*last);
        *last = temp;
    }
}

// Function to delete a node after a given node of a circular linked list
void deleteAfterNode(struct Node* last, int target) {
    if (last == NULL) {
        printf("The list is empty.\n");
        return;
    }

    struct Node* temp = last->next;
    do {
        if (temp->data == target) {
            struct Node* toDelete = temp->next;
            if (toDelete == last) {
                last = temp;
            }
            temp->next = toDelete->next;
            free(toDelete);
            return;
        }
        temp = temp->next;
    } while (temp != last->next);

    printf("Target node not found.\n");
}

// Function to delete the entire circular linked list
void deleteEntireList(struct Node** last) {
    if (*last == NULL) {
        printf("The list is already empty.\n");
        return;
    }

    struct Node* temp = (*last)->next;
    struct Node* next;

    while (temp != *last) {
        next = temp->next;
        free(temp);
        temp = next;
    }
    free(*last);
    *last = NULL;

    printf("The entire list has been deleted.\n");
}
