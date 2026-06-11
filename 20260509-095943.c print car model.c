#include <stdio.h>

/* Creating a structure */
struct Car
{
    int number;
    char model[20];
    char brand[20];
    int year;
};

int main()
{
    /* Creating a variable of structure type */
    struct Car car1;

    /* Assigning values using pointer */
    struct Car *ptr = &car1;

    ptr->number = 101;

    /* assigning strings character by character */
    sprintf(ptr->model, "Corolla");
    sprintf(ptr->brand, "Toyota");

    ptr->year = 2020;

    /* Printing the values */
    printf("Car Details\n");
    printf("Number: %d\n", ptr->number);
    printf("Model: %s\n", ptr->model);
    printf("Brand: %s\n", ptr->brand);
    printf("Year: %d\n", ptr->year);

    return 0;
}