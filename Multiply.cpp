#include<stdio.h>

int main()
{
   int a[30], ele=1, num, i;

   printf("\nEnter no of elements :");
   scanf("%d", &num);

   printf("\nEnter the values to multiply:");
   for (i = 0; i < num; i++)
    {
      scanf("%d", &a[i]);
    }

    for(i=0;i<num;i++)
    {
      ele=ele*a[i];
    }
    printf("The result of multiplication is : %d", ele);
   return (0);
}
