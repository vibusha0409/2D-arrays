#include <stdio.h>

int main()
{
    int a[2][2], b[2][2], c[2][2];
    int i,j,k;

    printf("Enter first matrix:\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter second matrix:\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=0;

            for(k=0;k<2;k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
  //Notice that we are initializing a DIFFERENT array location.

//So c[0][0] remains 19!

//Then it calculates c[0][1].

//This continues until all four elements are calculated.

    printf("Product matrix:\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
