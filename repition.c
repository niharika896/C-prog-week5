#include <stdio.h>

int main() {
    int n, i, j,c=0,k;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    
    for (i = 0; i < n; i++) {
        printf("Enter element no %d: ", i + 1);
        scanf("%d", &a[i]);
    };
    printf("Enter k: "); scanf("%d", &k);
    
    for (i = 0; i < n; i++) {
        if(a[i]==k)c++;
    };
    
    
    printf("%d occurs %d times",k,c);
	
    

    return 0;
}






