
#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j;

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

    printf("Rotated matrix:\n");

    for(j = c-1; j >= 0; j--)
    {
        for(i = 0; i < r; i++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

INPUT:
3 3
1 2 3
4 5 6
7 8 9

OUTPUT:
3 6 9
2 5 8
1 4 7
