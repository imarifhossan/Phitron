#include <stdio.h>
void shapePrint(int n)
{
    int sign = 1;
    int space = n - 1;
    // first part
    for (int i = 1; i <= n; i++)
    {
        // space
        for (int s = 1; s <= space; s++)
        {
            printf(" ");
        }
        for (int j = 1; j <= sign * 2 - 1; j++)
        {
            if (i % 2 != 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
        space--;
        sign++;
    }
    // second part
    sign = n - 1;
    space = 1;
    for (int i = 1; i <= n - 1; i++)
    {
        // space
        for (int s = 1; s <= space; s++)
        {
            printf(" ");
        }
        for (int j = 1; j <= sign * 2 - 1; j++)
        {
            if (n % 2 == 0)
            {
                if (i % 2 != 0)
                {
                    printf("#");
                }
                else
                {
                    printf("-");
                }
            }
            else
            {

                if (i % 2 != 0)
                {
                    printf("-");
                }
                else
                {
                    printf("#");
                }
            }
        }
        printf("\n");
        space++;
        sign--;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    shapePrint(n);
}