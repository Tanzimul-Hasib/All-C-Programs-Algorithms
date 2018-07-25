#include<stdio.h>

int main()
{
    int i, n, arr[10];

    printf("Enter the size of array: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("Enter the elements of array: ");
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++)
    {
        printf("\n%d. %d", i, arr[i]);
    }

    return 0;
}
