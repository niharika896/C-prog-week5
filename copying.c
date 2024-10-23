#include <stdio.h>

int main() {
    int n, i, j, k,e=0,count;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int a[n];
    int a_copy[n];
    
    for (i = 0; i < n; i++) {
        printf("Enter element no %d: ", i + 1);
        scanf("%d", &a[i]);
    };
    
    for (i = 0; i < n; i++) {
        a[i]=a_copy[i];
    };
    
    
    return 0;
}

