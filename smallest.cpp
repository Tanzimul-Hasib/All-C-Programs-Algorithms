#include<stdio.h>

int main()
{
    int a[50], i, n, smallest;

    printf("\nEnter the size of array: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("\nEnter the value of array: ");
        scanf("%d", &a[i]);
    }
    smallest=a[0];

    for(i=0; i<n; i++)
    {
        if(a[i]<smallest)
        {
            smallest=a[i];
        }
    }
    printf("\n\nThe Largest value is %d\n", smallest);
    return 0;
}
