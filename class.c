// Program for Bubble Sort:
/*#include <stdio.h>
void bubblesort(int x[], int n)
{
    int i, j, t;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (x[j] > x[j + 1])
            {
                t = x[j];
                x[j] = x[j + 1];
                x[j + 1] = t;
            }
        }
    }
}
int main()
{
    int i, n, x[25];

    printf("\n Enter the number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n Enter element %d: ", i + 1);
        scanf("%d", &x[i]);
    }
    printf("\nBefore sorting:\n");
    for (i = 0; i < n; i++)
    {
        printf("%5d", x[i]);
    }
    bubblesort(x, n);
    printf("\nArray Elements after sorting: \n");
    for (i = 0; i < n; i++)
        printf("%5d", x[i]);
    return 0;
}
*/

/*pseudo code for selection sort:
1 Start
2.Read the number of elements
3.Read elements in ascending order
4compare the element the first two elements of the array
5. swap if element is larger than the second element
6.Move to the next element and repeat the process until the last element is reached
7.Reduce the unsorted array by one and repeat the process until the entire array is sorted
8.Stop when already sorted*/
// selection sort
#include <stdio.h>
void selectionSort(int low, int high, int a[]);

int main()
{
    int a[25];
    int num, i = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        printf("\nEnter element %d:", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\nThe elements before sorting are: ");
    for (i = 0; i < num; i++)
        printf("%d ", a[i]);
    selectionSort(0, num - 1, a);
    printf("\nThe elements after sorting are: ");
    for (i = 0; i < num; i++)
        printf("%d ", a[i]);
    return 0;
}
void selectionSort(int low, int high, int a[])
{
    int i = 0, j = 0, temp = 0, minindex;
    for (i = low; i <= high; i++)
    {
        minindex = i;
        for (j = i + 1; j <= high; j++)
            if (a[j] < a[minindex]){
                minindex = j;}
                if (minindex != i){
        temp = a[i];
        a[i] = a[minindex];
        a[minindex] = temp;
             }
          }
        }
