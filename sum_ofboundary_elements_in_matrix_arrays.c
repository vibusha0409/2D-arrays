
#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j, sum = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

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
            if(i == 0 || i == r-1 || j == 0 || j == c-1)
            {
                sum = sum + a[i][j];
            }
        }
    }

    printf("Boundary sum = %d", sum);

    return 0;
}
