#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j;
    int flag = 1;

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
    if(r!=c)//means if it is not a square matrix for example if it is a 2by3 matrix then it is not a square matrix at all
    {
        flag=0;
    }
    else
    {
        
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(i==j&&a[i][j]!=1)
            {
                flag=0;
            }
            if(i!=j&&a[i][j]!=0)
            {
                flag=0;
            }
        }
    }
    }//this is the end of else statement
                if(flag==1)
            printf("Identity matrix");
        else
            printf("Not a identity matrix");
        return 0;
    
    
}
