#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    
    for (i = 0; i < n; i++) {
        printf("Enter element no %d: ", i + 1);
        scanf("%d", &a[i]);
    };
    
    for(i=0;i<n;i++){
    	for(j=i+1;j<n;j++){
    		if(a[i]==a[j]){
    			printf("%d ",a[i]);
    			a[j]-1000;
			}
		};
	};
	
    

    return 0;
}





