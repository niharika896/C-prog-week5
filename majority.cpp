#include <stdio.h>

int main() {
    int n, i, j, k,e=0,count;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int a[n];
    
    for (i = 0; i < n; i++) {
        printf("Enter element no %d: ", i + 1);
        scanf("%d", &a[i]);
    };
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            };
        };
    };


    for(i=0;i<n-1;i++){
    	count=0;
    	for(j=i;j<n;j++){
    		if(a[i]==a[j])count++;
		};
		if(count>n/2)e=i;
	};
	
	if(e){
		printf("%d",a[e]);
	}
	else{
		printf("No majority");
	}

    return 0;
}

