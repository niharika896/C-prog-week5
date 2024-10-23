#include <stdio.h>

int main() {
    int n, i, j,found;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    
    for (i = 0; i < n; i++) {
        printf("Enter element no %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        found = 0;   
        for (j = i+1; j < n; j++) {
            if ( a[i] == a[j]) {
                found = 1; 
                break;
            }
        }
        if (!found) {
            printf("The first non-repeating number is: %d\n", a[i]);
            return 0;
        }
    }

    printf("All numbers are repeating.\n");

    return 0;
}

