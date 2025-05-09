#include <stdio.h>
int main()
{
    
    int n;
    scanf("%d", &n);
    // printing first part
    int star = 1;
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= space; i++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star * 2 - 1; j++)
        {
            printf("*");
        }

        printf("\n");
        star++;
        space--;
    }

    

    
    // printing second part
   
    int star2 = n;
    int space2 = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= space2; i++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star2*2-1; j++)
        {
            printf("*");
        }

        printf("\n");
        star2--;
        space2++;
    }

    

    return 0;
}