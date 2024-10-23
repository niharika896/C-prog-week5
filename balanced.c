#include <stdio.h>
#include <math.h>
int main(){
    int n,i,sum_l=0,sum_r=0;
    printf("Enter no of elements(even)"); scanf("%d",&n);
    int a[n];
    if(n%2!=0)printf("Please enter even number");
    else{
        for(i=0;i<n;i++){
            printf("%d:",i+1);scanf("%d",&a[i]);
        }
        for(i=0;i<n/2;i++){
            sum_l+=a[i];
            sum_r+=a[n-i-1];
        }
        printf("%d",abs(sum_l-sum_r));
    }
return 0;
}
