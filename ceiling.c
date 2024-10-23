#include <stdio.h>
int main(){
    int n,i,ceil;
    printf("enter length of sorted ray");scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter element %d :",i+1);scanf("%d",&a[i]);
    };
    printf("enter ceil");scanf("%d",&ceil);
    for(i=0;i<n;i++){
        if(a[i]>ceil){
            printf("ceil of %d is %d",ceil,a[i]);
            break;
            };
        };
    return 0;
    };