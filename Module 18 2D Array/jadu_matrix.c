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
    int is_Jadu = 1;
    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < r; j++)
            {
                if (i == j  || i + j == r - 1)
                {
                    // diagoinal position
                    if(a[i][j]!=1){
                        is_Jadu=0;
                    }
                }
                else
                {
                    if (a[i][j] != 0)
                    {
                        is_Jadu = 0;
                     
                    }
                }
            }
        }
        if(is_Jadu==1){
            printf("YES");
        }
        else  {
            printf("NO");
        }

    }
    else
    {
        printf("NO");
    }
    return 0;
}
