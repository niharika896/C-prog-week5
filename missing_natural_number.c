#include <stdio.h>

int main() {
    int n, i,found=0;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        printf("Enter element no %d: ", i + 1);
        scanf("%d", &a[i]);
    };
    
    i=0;
    while(found=0){
    	if(a[i]==i+1)i++;
    	else {
    		printf("%d is missing",i+1); found=1;
		}
	};
    
    

    return 0;
}






