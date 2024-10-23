#include <stdio.h>

int main()
{
    int n, i, value, position;

    // Initialize the input list
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n + 1]; // Array with an extra space for the new element

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {   printf("%d:",i+1);
        scanf("%d", &arr[i]);
    }

    // Input the value to be inserted
    printf("Input the value to be inserted: ");
    scanf("%d", &value);

    // Input the position where the value is to be inserted
    printf("Input the position, where the value to be inserted: ");
    scanf("%d", &position);

    // Shift elements to the right to make space for the new element
    for (i = n; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert the new value
    arr[position - 1] = value;

    // Print the new list
    printf("After inserting the element, the new list is:\n");
    for (i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
