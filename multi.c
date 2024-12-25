#include <stdio.h>

int main()
{   
    int n,c,i,j,k;
    printf("enter size");scanf("%d",&n);
    int m1[n][n];
    int m2[n][n];
    int m[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            m[i][j]=0;
        }
    }

    // Input elements in the m
    printf("Enter elements for 1st m:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Enter elements for 2nd square m:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
            m[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }

    // Print the m
    printf("The product m is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}
