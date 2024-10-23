#include <stdio.h>

// Function to find if the average exists in the array
int existsInArray(int arr[], int n, int num)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            return 1; // Found
        }
    }
    return 0; // Not found
}

int main()
{
    int n, x;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    int result[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the value of x: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        int avg = (a[i] + x) / 2;
        result[i] = existsInArray(a, n, avg);
    }

    printf("Output:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
