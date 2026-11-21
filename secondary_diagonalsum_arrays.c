#include <stdio.h>

int main()
{
    int r, c, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    printf("Enter the matrix elements:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Secondary diagonal elements:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
//remember here both r-1 and c-1 can come because this is a square matrix only😉😅😁
            if(i + j == r - 1) 
            {
                printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}
