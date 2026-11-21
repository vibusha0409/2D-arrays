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

    if(r != c)
    {
        flag = 0;
    }
    else
    {
        for(i = 0; i < r; i++)
        {
            for(j = 0; j < c; j++)
            {
                if(i != j && a[i][j] != 0)
                {
                    flag = 0;
                }

                if(i == j && a[i][j] != a[0][0])
                {
                    flag = 0;
                }
            }
        }
    }

    if(flag == 1)
        printf("Scalar Matrix");
    else
        printf("Not a Scalar Matrix");

    return 0;
}
