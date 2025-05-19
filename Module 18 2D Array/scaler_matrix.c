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
    bool is_scaler = true;
    int temp = a[0][0];

    if (r == c)
    {

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {
                    // diagonal position
                    if(temp != a[i][j]){
                        is_scaler=false;
                    }
                }
                else
                {
                    if (a[i][j] != 0)
                    {
                        is_diagonal=false;
                    }
                }
            }
        }
        if(is_diagonal==true && is_scaler==true){
            printf("This is a scaler matrix");
        }
        else if (is_diagonal == true && is_scaler == false)
        {
            printf("This is a diagonal matrix but not a scaler matrix\n");
        }
        else
        {
            printf("This is not a scaler matrix\n");
        }
    }
    else
    {
        printf("Its not a scaler matrix");
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