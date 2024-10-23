#include <stdio.h>

int main() {
    int n, i, j,c;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    
    for (i = 0; i < n; i++) {
        printf("Enter element no %d: ", i + 1);
        scanf("%d", &a[i]);
    };
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                c = a[j];
                a[j] = a[j + 1];
                a[j + 1] = c;
            };
        };
    };
    printf("[");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    };
    printf("]");
	
    

    return 0;
}






