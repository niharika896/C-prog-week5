#include <stdio.h>

int main() {
    int n, i, j;
    int found = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int a[n];
    for (i = 0; i < n; i++) {
        printf("Enter element no %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                printf("The first repeating number is: %d\n", a[i]);
                found = 1; 
                break;
            }
        }
        if (found) {
            break;
        }
    }

    if (!found) {
        printf("No repeating numbers found.\n");
    }

    return 0;
}

