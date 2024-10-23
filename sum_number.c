#include <stdio.h>
int main()
{
    int n1, n2, i;
    printf("Enter the number of elements for the first array: ");
    scanf("%d", &n1);
    int array1[n1];

    // Input elements for the first array
    printf("Enter elements for the first array:\n");
    for (i = 0; i < n1; i++)
    {
        printf("Element [%d]: ", i + 1);
        scanf("%d", &array1[i]);
    }

    printf("Enter the number of elements for the second array: ");
    scanf("%d", &n2);
    int array2[n2];

    // Input elements for the second array
    printf("Enter elements for the second array:\n");
    for (i = 0; i < n2; i++)
    {
        printf("Element [%d]: ", i + 1);
        scanf("%d", &array2[i]);
    }

    int num1 = 0, num2 = 0;
    for (i = 0; i < n1; i++)
    {
        num1 = num1 * 10 + array1[i];
    }
    for (i = 0; i < n2; i++)
    {
        num2 = num2 * 10 + array2[i];
    }

    printf("sum of both numbers is %d", num1 + num2);
    return 0;
}