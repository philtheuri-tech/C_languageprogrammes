#include <stdio.h>

// Function to check if a number is prime
int isprime(int num) {
    if (num <= 1) {
        return 0; // Not prime
    }

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }

    return 1; // Prime
}

int main() {
    int number;

    // Prompt user input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call function and display result
    if (isprime(number) == 1) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}