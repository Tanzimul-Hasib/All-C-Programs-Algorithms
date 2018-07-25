#include<stdio.h>

int main()
{
    int i, j, n, mid, a[100], t=0, low=0, high;

    printf("\nEnter the size of array: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("\nEnter the value: ");
        scanf("%d", &a[i]);
    }

        printf("\nEnter the value to be searched: ");
        scanf("%d", &j);

        high=n-1;
        for( ;low<=high && t!=1; )
        {
            mid=(low+high)/2;

            if(a[mid]==j)
            {
                t==1;
                break;
            }
            else if(a[mid]>j)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }

        if(t==1)
        {
            printf("found!");
        }
        else
        {
            printf("Not Found!");
        }

    return 0;
}
