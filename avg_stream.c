#include <stdio.h>
int main(){
    int n,sum=0,i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    // Input elements in the a
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Element [%d]: ", i + 1);
        scanf("%d", &a[i]);
    }

    for(i=0;i<n;i++){
        sum+=a[i];
        printf("%4.2f\t",(float)sum/(i+1));
    }

return 0;
}