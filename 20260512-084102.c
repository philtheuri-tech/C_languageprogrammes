#include <stdio.h>

int main() {

    float unit1, unit2, unit3, average;

    // Input scores
    printf("Enter marks for Unit 1: ");
    scanf("%f", &unit1);

    printf("Enter marks for Unit 2: ");
    scanf("%f", &unit2);

    printf("Enter marks for Unit 3: ");
    scanf("%f", &unit3);

    // Calculate average
    average = (unit1 + unit2 + unit3) / 3;

    // Display average
    printf("The average marks are: %.2f\n", average);

    return 0;
}