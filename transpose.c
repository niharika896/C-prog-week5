#include <stdio.h>

int main()
{
    int n, m, i, j;

    printf("Enter the number of rows and columns of the m: ");
    scanf("%d %d", &n, &m);

    int mtx[n][m], t[m][n];

    // Input elements in the m
    printf("Enter elements of the m:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mtx[i][j]);
        }
    }

    // Compute the t of the m
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            t[j][i] = mtx[i][j];
        }
    }

    // Print the t m
    printf("t of the m is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
