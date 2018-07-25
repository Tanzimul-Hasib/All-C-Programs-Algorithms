#include<stdio.h>

int main()
{
    int a[50], n, i, sum=0, avg;

    printf("\nEnter the size of array: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("\nEnter the value of array: ");
        scanf("%d", &a[i]);
        sum+=a[i];
    }
    avg=sum/n;
        for(i=0; i<n; i++)
        {
            printf("\n\tYour given value is %d\n", a[i]);
        }
        printf("\n\n Total value is %d & Average is %d\n", sum, avg);

    return 0;
}
