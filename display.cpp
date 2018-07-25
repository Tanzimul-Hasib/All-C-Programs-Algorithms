#include<stdio.h>

int main()
{
    int i, n, src, a[10];

    printf("Enter the size of array: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("Enter the value: ");
        scanf("%d", &a[i]);
    }

       printf("Enter the value to be searched: ");
        scanf("%d", &src);

    i=0;
    while(i<n && src != a[i])
    {
        i++;
    }

    if(i<n)
    {
        printf("Number found at the location number %d", i+1);
    }
    else
    {
        printf("Number not found");
    }

    return 0;
}
