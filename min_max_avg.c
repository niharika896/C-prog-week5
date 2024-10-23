#include <stdio.h>

int main() {
    int n, i, j,sum = 0,max,min;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    
    for (i = 0; i < n; i++) {
        printf("Enter element no %d: ", i + 1);
        scanf("%d", &a[i]);
    }
	max=a[0];
	for (i = 1; i < n; i++) {
        if(a[i]>max){
        	max=a[i];
		}
    }
    
    min=a[0];
	for (i = 1; i < n; i++) {
        if(a[i]<min){
        	min=a[i];
		}
    }
    
    for (i = 0; i < n; i++) {
        sum += a[i];
    }

    printf("The minimum, maximum, and average are: %d, %d, %f\n", min, max, (float)sum / n);

    return 0;
}

