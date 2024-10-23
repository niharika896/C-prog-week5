#include <stdio.h>

int main()
{
    int n,i,j,c,check=0;

    // Prompt user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n];

    // Input elements in the array
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Element [%d]: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Enter the divisor: ");
    scanf("%d", &c);

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if ((array[i]+array[j])%c!=0)check++;
            break;
        }
    }

    if(check)printf("F");
    else printf("T");

    return 0;
}
