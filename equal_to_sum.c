#include <stdio.h>

int main() {
    int n, i, j,sum;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    
    for (i = 0; i < n; i++) {
        printf("Enter element no %d: ", i + 1);
        scanf("%d", &a[i]);
    };
    printf("Enter the sum: ");scanf("%d", &sum);

    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if ( a[i]+a[j]==sum) {
                printf("The pair is (%d,%d)\n",a[i],a[j]);
                break;
            };
        };
    
};
    return 0;
}

