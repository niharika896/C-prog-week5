#include <stdio.h>
int main()
{
    int r, c;
    printf("enter no of rows");
    scanf("%d", &r);
    printf("enter no of columns");
    scanf("%d", &c);
    int m1[r][c];
    int m2[r][c];
    int m_add[r][c];
    int m_sub[r][c];
    printf("Enter elements for first m:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Enter elements for second m:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            m_add[i][j] = m1[i][j] + m2[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            m_sub[i][j] = m1[i][j] - m2[i][j];
        }
    }
    printf("Adding...\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d \t", m_add[i][j]);
        }
        printf("\n");
    }
    printf("subtracting...\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d \t", m_sub[i][j]);
        }
        printf("\n");
    }
    return 0;
}