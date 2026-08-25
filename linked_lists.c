/*Code for the Implementation of Single Linked List
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

typedef struct Node Node;

Node *start = NULL;

// Create a new node
Node *getNode(void) {
    Node *newNode = malloc(sizeof(Node));

    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    printf("Enter data: ");
    scanf("%d", &newNode->data);

    newNode->next = NULL;

    return newNode;
}

// Count the number of nodes
int countNode(Node *ptr) {
    int count = 0;

    while (ptr != NULL) {
        count++;
        ptr = ptr->next;
    }

    return count;
}

// Create a list 
void createList(int n) {
    int i;
    Node *newNode;
    Node *temp;

    for (i = 0; i < n; i++) {
        newNode = getNode();

        if (start == NULL) {
            start = newNode;
        } else {
            temp = start;

            while (temp->next != NULL) {
                temp = temp->next;
            }

            temp->next = newNode;
        }
    }
}

//Display list from left to right 
void traverse(void) {
    Node *temp = start;

    if (start == NULL) {
        printf("\nList is empty.\n");
        return;
    }

    printf("\nList: ");

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

// Display list from right to left using recursion 
void reverseTraverse(Node *ptr) {
    if (ptr == NULL) {
        return;
    }

    reverseTraverse(ptr->next);
    printf("%d -> ", ptr->data);
}

// Insert at beginning 
void insertAtBeginning(void) {
    Node *newNode = getNode();

    newNode->next = start;
    start = newNode;

    printf("Node inserted at beginning.\n");
}

//Insert at end 
void insertAtEnd(void) {
    Node *newNode = getNode();

    if (start == NULL) {
        start = newNode;
    } else {
        Node *temp = start;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    printf("Node inserted at end.\n");
}

// Insert at a specified middle position
void insertAtMiddle(void) {
    int position;
    int nodeCount;
    int counter = 1;

    Node *newNode;
    Node *temp;
    Node *previous;

    nodeCount = countNode(start);

    printf("Enter position: ");
    scanf("%d", &position);

    if (position <= 1 || position >= nodeCount) {
        printf("Position must be between 2 and %d.\n", nodeCount);
        return;
    }

    newNode = getNode();

    temp = start;
    previous = NULL;

    while (counter < position) {
        previous = temp;
        temp = temp->next;
        counter++;
    }

    previous->next = newNode;
    newNode->next = temp;

    printf("Node inserted at position %d.\n", position);
}

// Delete from beginning 
void deleteAtBeginning(void) {
    Node *temp;

    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }

    temp = start;
    start = start->next;

    printf("Deleted node: %d\n", temp->data);

    free(temp);
}

// Delete from end 
void deleteAtEnd(void) {
    Node *temp;
    Node *previous;

    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }

    //Only one node 
    if (start->next == NULL) {
        printf("Deleted node: %d\n", start->data);
        free(start);
        start = NULL;
        return;
    }

    temp = start;
    previous = NULL;

    while (temp->next != NULL) {
        previous = temp;
        temp = temp->next;
    }

    previous->next = NULL;

    printf("Deleted node: %d\n", temp->data);

    free(temp);
}

//Delete from a specified middle position 
void deleteAtMiddle(void) {
    int position;
    int nodeCount;
    int counter = 1;

    Node *temp;
    Node *previous;

    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }

    nodeCount = countNode(start);

    printf("Enter position to delete: ");
    scanf("%d", &position);

    if (position <= 1 || position >= nodeCount) {
        printf("Position must be between 2 and %d.\n", nodeCount);
        return;
    }

    temp = start;
    previous = NULL;

    while (counter < position) {
        previous = temp;
        temp = temp->next;
        counter++;
    }

    previous->next = temp->next;

    printf("Deleted node: %d\n", temp->data);

    free(temp);
}

 //Display menu 
int menu(void) {
    int choice;

    printf("\n====================================\n");
    printf("       SINGLY LINKED LIST\n");
    printf("====================================\n");
    printf("1. Create a list\n");
    printf("2. Insert at beginning\n");
    printf("3. Insert at end\n");
    printf("4. Insert at middle\n");
    printf("5. Delete from beginning\n");
    printf("6. Delete from end\n");
    printf("7. Delete from middle\n");
    printf("8. Traverse left to right\n");
    printf("9. Traverse right to left\n");
    printf("10. Count nodes\n");
    printf("11. Exit\n");
    printf("====================================\n");
    printf("Enter your choice: ");

    scanf("%d", &choice);

    return choice;
}

int main(void) {
    int choice;
    int numberOfNodes;

    while (1) {
        choice = menu();

        switch (choice) {

            case 1:
                if (start == NULL) {
                    printf("Number of nodes to create: ");
                    scanf("%d", &numberOfNodes);

                    if (numberOfNodes <= 0) {
                        printf("Number of nodes must be greater than 0.\n");
                    } else {
                        createList(numberOfNodes);
                        printf("List created successfully.\n");
                    }
                } else {
                    printf("List already exists.\n");
                }
                break;

            case 2:
                insertAtBeginning();
                break;

            case 3:
                insertAtEnd();
                break;

            case 4:
                insertAtMiddle();
                break;

            case 5:
                deleteAtBeginning();
                break;

            case 6:
                deleteAtEnd();
                break;

            case 7:
                deleteAtMiddle();
                break;

            case 8:
                traverse();
                break;

            case 9:
                if (start == NULL) {
                    printf("List is empty.\n");
                } else {
                    printf("\nList in reverse: ");
                    reverseTraverse(start);
                    printf("NULL\n");
                }
                break;

            case 10:
                printf("Number of nodes: %d\n", countNode(start));
                break;

            case 11:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}

Exercise
1.	Implement a search function that tells the user whether a value exists and returns the position as well.
2.	Modify the delete function to delete a number you provide, instead of asking for the position. So instead of having the delete from beginning, middle or end, you have a new delete function that deletes a number you give it. 
*/
//singly linked lists implementation in c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

typedef struct Node Node;

Node *start = NULL;

/* Create a new node */
Node *getNode(void) {
    Node *newNode = malloc(sizeof(Node));

    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    printf("Enter data: ");
    scanf("%d", &newNode->data);

    newNode->next = NULL;

    return newNode;
}

/* Count the number of nodes */
int countNode(Node *ptr) {
    int count = 0;

    while (ptr != NULL) {
        count++;
        ptr = ptr->next;
    }

    return count;
}

/* Create a list */
void createList(int n) {
    int i;
    Node *newNode;
    Node *temp;

    for (i = 0; i < n; i++) {
        newNode = getNode();

        if (start == NULL) {
            start = newNode;
        } else {
            temp = start;

            while (temp->next != NULL) {
                temp = temp->next;
            }

            temp->next = newNode;
        }
    }
}

/* Display list from left to right */
void traverse(void) {
    Node *temp = start;

    if (start == NULL) {
        printf("\nList is empty.\n");
        return;
    }

    printf("\nList: ");

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

/* Display list from right to left using recursion */
void reverseTraverse(Node *ptr) {
    if (ptr == NULL) {
        return;
    }

    reverseTraverse(ptr->next);
    printf("%d -> ", ptr->data);
}

/* Insert at beginning */
void insertAtBeginning(void) {
    Node *newNode = getNode();

    newNode->next = start;
    start = newNode;

    printf("Node inserted at beginning.\n");
}

/* Insert at end */
void insertAtEnd(void) {
    Node *newNode = getNode();

    if (start == NULL) {
        start = newNode;
    } else {
        Node *temp = start;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    printf("Node inserted at end.\n");
}

/* Insert at a specified middle position */
void insertAtMiddle(void) {
    int position;
    int nodeCount;
    int counter = 1;

    Node *newNode;
    Node *temp;
    Node *previous;

    nodeCount = countNode(start);

    printf("Enter position: ");
    scanf("%d", &position);

    if (position <= 1 || position >= nodeCount) {
        printf("Position must be between 2 and %d.\n", nodeCount);
        return;
    }

    newNode = getNode();

    temp = start;
    previous = NULL;

    while (counter < position) {
        previous = temp;
        temp = temp->next;
        counter++;
    }

    previous->next = newNode;
    newNode->next = temp;

    printf("Node inserted at position %d.\n", position);
}
/* Delete a node containing a specified value */
void deleteNode(void) {
    int value;
    Node *temp;
    Node *previous;

    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("Enter value to delete: ");
    scanf("%d", &value);

    temp = start;
    previous = NULL;

    while (temp != NULL) {
        if (temp->data == value) {
            /* Deleting the first node */
            if (previous == NULL) {
                start = temp->next;
            } else {
                previous->next = temp->next;
            }

            printf("Deleted node: %d\n", temp->data);
            free(temp);
            return;
        }

        previous = temp;
        temp = temp->next;
    }

    printf("%d not found in the list.\n", value);
}
/* Search for a value */
void search(void) {
    int value;
    int position = 1;
    Node *temp = start;

    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("Enter value to search: ");
    scanf("%d", &value);

    while (temp != NULL) {
        if (temp->data == value) {
            printf("%d found at position %d.\n", value, position);
            return;
        }

        temp = temp->next;
        position++;
    }

    printf("%d not found in the list.\n", value);
}
/* Display menu */
int menu(void) {
    int choice;

    printf("\n====================================\n");
    printf("       SINGLY LINKED LIST\n");
    printf("====================================\n");
    printf("1. Create a list\n");
    printf("2. Insert at beginning\n");
    printf("3. Insert at end\n");
    printf("4. Insert at middle\n");
    printf("5. Delete a value\n");
    printf("6. Traverse left to right\n");
    printf("7. Traverse right to left\n");
    printf("8. Count nodes\n");
    printf("9. Search\n");
    printf("10. Exit\n");
    printf("====================================\n");
    printf("Enter your choice: ");

    scanf("%d", &choice);

    return choice;
}

int main(void) {
    int choice;
    int numberOfNodes;

    while (1) {
        choice = menu();

        switch (choice) {

            case 1:
                if (start == NULL) {
                    printf("Number of nodes to create: ");
                    scanf("%d", &numberOfNodes);

                    if (numberOfNodes <= 0) {
                        printf("Number of nodes must be greater than 0.\n");
                    } else {
                        createList(numberOfNodes);
                        printf("List created successfully.\n");
                    }
                } else {
                    printf("List already exists.\n");
                }
                break;

            case 2:
                insertAtBeginning();
                break;

            case 3:
                insertAtEnd();
                break;

            case 4:
                insertAtMiddle();
                break;

            case 5:
                deleteNode();
                break;

            case 6:
                traverse();
                break;

            case 7:
                if (start == NULL) {
                    printf("List is empty.\n");
                } else {
                    printf("\nList in reverse: ");
                    reverseTraverse(start);
                    printf("NULL\n");
                }
                break;
            case 8:
                search();
                break;
            case 9:
                printf("Number of nodes: %d\n", countNode(start));
                break;

         

            case 10:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}

