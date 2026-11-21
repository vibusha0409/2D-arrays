#include <stdio.h>

int main()
{
    int r, c, i, j, flag = 1;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    int a[r][c];

    printf("Enter matrix elements:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
           if(i>j&&a[i][j]!=0)
           {
               flag=0;
           }
        }
    }
    if(flag==1)
        printf("upper triangle matrix");
    else
        printf("not upper triangle matrix ");
    return 0;
}
#include <stdio.h>

int main()
{
    int r, c, i, j, flag = 1;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    int a[r][c];

    printf("Enter matrix elements:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
           if(i<j&&a[i][j]!=0)
           {
               flag=0;
           }
        }
    }
    if(flag==1)
        printf("lower triangle matrix");
    else
        printf("not lower triangle matrix ");
    return 0;
}
