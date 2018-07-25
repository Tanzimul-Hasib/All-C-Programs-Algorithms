#include<stdio.h>
int main ()
{
    int arr[30], i, n, sum=0, ct=0;
    printf("Enter the size: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        sum=sum+arr[i];
        if(arr[i]<0)
        {
            ct++;
        }
    }

    printf("The negative number is %d", ct);
    //printing student marks
    for (i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n The total number is %d", sum);

    return 0;
}
