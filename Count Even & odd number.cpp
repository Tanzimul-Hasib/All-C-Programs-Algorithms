#include <stdio.h>

int main()
{
    int arr[50];
    int i, n, even, odd;

    /* Input size of the array */
    printf("Enter size of the array: ");
    scanf("%d", &n);

    /* Input array elements */
    printf("Enter %d elements in array: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    /* Assuming that there are 0 even and odd elements */
    even = 0;
    odd  = 0;

    for(i=0; i<n; i++)
    {
        /* If the current element of array is even then increment even count */
        if(arr[i]%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Total even elements: %d\n", even);
    printf("Total odd elements: %d", odd);

    return 0;
}
