#include <stdio.h>

int main() {
    int n, i,c;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    
    for (i = 0; i < n; i++) {
        printf("Enter element no %d: ", i + 1);
        scanf("%d", &a[i]);
    };
    
    for(i=0;i<n/2;i++)
	{
		c=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=c;
	}
    printf("[");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    };
    printf("]");
	
    

    return 0;
}






