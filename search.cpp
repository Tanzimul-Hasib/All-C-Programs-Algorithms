#include<stdio.h>

int main()
{
    int i, n, src, a[10];

    printf("\nEnter the size of array: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("\nEnter the value: ");
        scanf("%d", &a[i]);
    }

    printf("\nEnter the value to be searched: ");
    scanf("%d", &src);
                for(i=0; i<n; i++)
                {
                    if(a[i]==src)
                        {
                            printf("\n\nThe value is found at the location %d", src);
                            break;
                        }
                }
            if(i==n)
            {
                printf("\nNot found!");
            }


        return 0;
}
