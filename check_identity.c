#include <stdio.h>

int main()
{
    int n, i, j, check = 0;
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
        for (j = 0; j < n; j++)
        {
            if (i == j && m[i][j] != 1 || i != j && m[i][j] != 0)
                check++;
        }
    }

    if (check)
        printf("not ");
    else
        printf("yes");

    return 0;
}
