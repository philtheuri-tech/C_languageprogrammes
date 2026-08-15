// This program inserts an item into an array at a specified location.
/*#include <stdio.h>
int main()
{
    int array[100], item, i, position, n;
    printf("Enter the number of elements in the array: ");
scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the item to be inserted: ");
    scanf("%d", &item);

    printf("Enter the position to insert the item (0 to %d): ", n);
    scanf("%d", &position);

    if (position < 0 || position > n) {
        printf("Invalid position! Please enter a position between 0 and %d.\n", n);
        return 1;
    }

    // Shift elements to the right to make space for the new item
    for (i = n; i > position; i--) {
        array[i] = array[i - 1];
    }

    // Insert the new item at the specified position
    array[position] = item;
    n++; // Increase the size of the array

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}*/

// searching for an element in an array
/*algorithm
start at the first element
*/
/*#include <stdio.h>
int main()
{
    int array[100], item, i, n, found = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the item to search for: ");
    scanf("%d", &item);

    for (i = 0; i < n; i++)
    {
        if (array[i] == item)
        {
            found = 1;
            break;
        }
    }

    if (found)
    {
        printf("Item %d found at position %d.\n", item, i);
    }
    else
    {
        printf("Item %d not found in the array.\n", item);
    }

    return 0;
}*/
/*linear search- can work on both sorted and unsorted arrays
takes a longer time to reach the desired elements for large numbers
*/

/*Binary search- can only work on sorted arrays
characteristics:
algorithm:
identify the low and the high pointers( low is the first element, high is the last element in the array)
find the middle element(high + low)/2
compare the middle element with the target value
if the target value is equal to the middle element, return the index and stop.
if the target value is less than the middle element, search in the left half
if the target value is greater than the middle element, search in the right half
repeat until the element is found or the search space is exhausted
*/
// Iterative binary search- uses a loop to repeat the process until the element is found or the search space is exhausted
/*# include <stdio.h>
int main()
{
    int number[25], n, data;
    int low, high, mid;
    int flag = 0;
    int i;
printf("Binary search Algorithm\n");
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements in ascending order:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &data);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(number[mid] == data)
        {
            flag = 1;
            break;
        }

        if(data < number[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if(flag == 1)
        printf("Data found at position %d\n", mid + 1);
    else
        printf("Data not found\n");

    return 0;
}*/
// binary code search for recursicive(calling itself) functionre
// recursive binary search- uses a function that calls itself to repeat the process until the element is found or the search space is exhausted
#include <stdio.h>
int binarySearch(int number[], int low, int high, int data)
{
    if (low > high)
    {
        return -1;
    } // Base case: element not found
    int mid = (low + high) / 2;

    if (data == number[mid])
    {
        return mid;
    } // Element found
    else if (data < number[mid])
    {
        return binarySearch(number, low, mid - 1, data);
    } // Search in the left half
    else
    {
        return binarySearch(number, mid + 1, high, data);
        // search in the right half
    }
}
int main()
{
    int number[25], n, data, result;
    int i;
    printf("Recusrsive Binary Search Algorithm\n");
    printf("Enter the number of Elemnts: ");
    scanf("%d", &n);
    printf("Enter the elements in ascending order:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &data);

    result = binarySearch(number, 0, n - 1, data);

    if (result != -1)
        printf("Data found at position %d\n", result + 1);
    else
        printf("Data not found\n");

    return 0;
}