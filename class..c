// Program for Bubble Sort:
#include <stdio.h>
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
    printf("\n Enter The elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    printf("\nBefore sorting:\n");
    for (i = 0; i < n; i++)
    {
        printf("%5d", x[i]);
    }
    bubblesort(x, n);
    printf("\nArray Elements after sorting: ");
    for (i = 0; i < n; i++)
        printf("%5d", x[i]);
    return 0;
}
