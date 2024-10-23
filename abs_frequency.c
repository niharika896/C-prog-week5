#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, j, c = 1,count=0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter element no %d: ", i + 1);
        scanf("%d", &a[i]);
    };

    for(i=0;i<n;i++)a[i]=abs(a[i]);
    for (i = 0; i < n; c = 1)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
                c++;
        };
        if(c)count++;
        i += c;
    };
    printf("%d",count);
    return 0;
}
