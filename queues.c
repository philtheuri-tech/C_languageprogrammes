/*Code implementation od Queues in C
#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 5

int queue[MAXSIZE];

int front = -1;
int rear = -1;
//Insert an element into the queue 
void enqueue(void) {
    int value;

    if (rear == MAXSIZE - 1) {
        printf("\nQueue Overflow! Queue is full.\n");
        return;
    }

    printf("Enter value to insert: ");
    scanf("%d", &value);

    rear++;
    queue[rear] = value;

    if (front == -1) {
        front = 0;
    }

    printf("%d inserted into the queue.\n", value);
}

//Delete an element from the queue 
void dequeue(void) {
    int value;

    if (front == -1) {
        printf("\nQueue Underflow! Queue is empty.\n");
        return;
    }

    value = queue[front];

    printf("%d deleted from the queue.\n", value);

    front++;
n
    if (front > rear) {
        front = -1;
        rear = -1;
    }
}

//Display queue 
void display(void) {
    int i;

    if (front == -1) {
        printf("\nQueue is empty.\n");
        return;
    }

    printf("\nQueue elements:\n");

    for (i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }

    printf("\n");
}

//View the front element 
void peek(void) {
    if (front == -1) {
        printf("\nQueue is empty.\n");
        return;
    }

    printf("\nFront element: %d\n", queue[front]);
}

int main(void) {
    int choice;

    while (1) {

        printf("\n====================================\n");
        printf("          LINEAR QUEUE\n");
        printf("====================================\n");
        printf("1. ENQUEUE\n");
        printf("2. DEQUEUE\n");
        printf("3. DISPLAY\n");
        printf("4. PEEK\n");
        printf("5. EXIT\n");
        printf("====================================\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);

        switch (choice) {

            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                peek();
                break;

            case 5:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}*

