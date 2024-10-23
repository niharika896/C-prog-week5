#include <stdio.h>

int main()
{
    int n, c, i, j, k, sum = 0;
    printf("enter size");
    scanf("%d", &n);
    int m[n][n];

    // Input elements in the m
    printf("Enter elements for square m:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        sum += m[i][i];
    }

    printf("The sum of the left diagonal is: %d\n", sum);

    return 0;
}
