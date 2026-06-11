#include <stdio.h>

int isDivisibleBy9(int number) {
    return number % 9 == 0;
}

int main() {
    int number;
    int result;

    printf("=== Divisibility by 9 Checker ===\n");

    while (1) {
        printf("Enter an integer (or -1 to exit): ");

        result = scanf("%d", &number);

        // Check for invalid input
        if (result != 1) {
            printf("Invalid input! Please enter a valid integer.\n");

            // Clear input buffer
            while (getchar() != '\n');
            continue;
        }

        // Exit condition
        if (number == -1) {
            printf("Program ended. Goodbye!\n");
            break;
        }

        int remainder = number % 9;

        if (isDivisibleBy9(number)) {
            printf("%d is divisible by 9.\n", number);
        } else {
            printf("%d is NOT divisible by 9. Remainder = %d\n", number, remainder);
        }

        printf("\n"); // spacing
    }

    return 0;
}