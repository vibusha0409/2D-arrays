
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

    for(j = 0; j < c; j++)
    {
        for(i = r-1; i >= 0; i--)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
INPUT:
Enter rows and columns: 3 3

Enter matrix elements:
1 2 3
4 5 6
7 8 9
OUTPUT:
Rotated matrix:
7 4 1
8 5 2
9 6 3

    
1. Why is j in the outer loop?
Because we want to take one column at a time from the original matrix.
First, j = 0 means first column.
2. Why is i in the inner loop?
Because we want to travel through that column from bottom to top.
