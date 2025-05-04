// Flag variable
#include <stdio.h>
int main()
{
    /*int n=4;
     for(int i=1;i<=n;i++){
         for(int j=1;j<=i;j++){
             printf("*");
         }
     }*/

    /*
     int n=3;
     for(int i=1;i<=n;i++){
         for(int j=1;j<=n;j++){
             printf("%d",i);
         }
     }
    */

    /*
    int n = 5;
    for (int i = 1; i <= n; i += 2)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }*/
    /*
     *
     ***
     *****
     */

    /*
    int n = 1;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d",n++);
        }
        printf("\n");
    }
    */
   int n = 3;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf(" ");
    }

    return 0;
}