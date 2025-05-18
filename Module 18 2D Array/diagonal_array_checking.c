#include <stdio.h>
#include <stdbool.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    bool is_diagonal = true;

    if (r == c)
    {

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {
                    // diagonal position
                }
                else
                {
                    if (a[i][j] != 0)
                    {
                        is_diagonal=false;
                        printf("This is not a primary diagonal matrix");
                    }
                }
            }
        }
        if(is_diagonal==true){
            printf("This is a diagonal matrix");
        }
    }
    else
    {
        printf("Its not a diagonal matrix");
    }

    return 0;
}

// Example of primary diagonal matrix
/*
3 3
5 0 0
0 6 0
0 0 1
*/