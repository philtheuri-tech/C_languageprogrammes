#include <stdio.h>

int main() {
    int numbers[10]; // This creates space for 10 integers
    int i;

    printf("Enter 10 numbers:\n");

    // Loop 1: Getting user input
    for(i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nThe numbers in reverse order are:\n");

    // Loop 2: Printing in reverse
    // We start at index 9 (the last item) and go down to 0
    for(i = 9; i >= 0; i--) {
        printf("%d\t ", numbers[i]);
    }

    printf("\n");

    return 0;
}