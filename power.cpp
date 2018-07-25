#include<stdio.h>
int main ()
{
    int power=1, i , base, expo;
    printf("Enter the number base: ");
    scanf("%d", &base);
    printf("Enter the power number : ");
    scanf("%d", &expo);
    for(i=1; i<=expo; i++)
    {
        power=power*base;
    }
    printf("%d\n", power);

    return 0;
}
