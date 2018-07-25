#include<stdio.h>

int main()
{
    int m, n, column, row;
    printf("\n\n\n\tEnter the number of Column : ");
    scanf("%d",&n);
    printf("\n\tEnter the number of row : ");
    scanf("%d",&m);


    for(column=1; column<=m; column++)
    {
       for(row=1; row<=n; row++)
        {
        printf("\t%d%d ", column, row);
        }
    printf("\n\n");
    }
    return 0;
}
