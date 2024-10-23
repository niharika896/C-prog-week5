#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    int a[n + 1]; // Array with extra space for the new element
    for (i = 0; i < n; i++)
    {
        printf("Enter element no %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Insert new element at the end
    printf("Enter the element to be inserted: ");
    scanf("%d", &a[n]);

    // Bubble sort to include the newly added element
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++) // Adjust loop bounds
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    // printf("Sorted array: ");
    for (i = 0; i <= n; i++) // Iterate through n+1 elements
    {
        printf("%d ", a[i]);
    }
    // printf("\n");

    return 0;
}
