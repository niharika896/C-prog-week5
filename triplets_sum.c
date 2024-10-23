#include <stdio.h>

int main() {
    int n, i, j, k, targetSum;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int a[n];
    
    for (i = 0; i < n; i++) {
        printf("Enter element no %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    
    printf("Enter the sum: ");
    scanf("%d", &targetSum);
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }


    for (i = 0; i < n - 2; i++) {
        if ( a[i] == a[i - 1]) {
            continue;
        }
        
        for (j = i + 1; j < n - 1; j++) {
            if (a[j] == a[j - 1]) {
                continue;
            }
            
            for (k = j + 1; k < n; k++) {
                if (a[k] == a[k - 1]) {
                    continue;
                }
                
                if (a[i] + a[j] + a[k] == targetSum) {
                    printf("The triplet is (%d, %d, %d)\n", a[i], a[j], a[k]);
                    break;
                }
            }
        }
    }

    return 0;
}

