#include<stdio.h>

int main()
{
    int a[50], i, n, largest;

    printf("\nEnter the size of array: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("\nEnter the value of array: ");
        scanf("%d", &a[i]);
    }
    largest=a[0];

    for(i=0; i<n; i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }
    }
    printf("\n\nThe Largest value is %d\n", largest);
    return 0;
}
