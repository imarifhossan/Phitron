// #include <stdio.h>
// int main ()
// {
//     int  n;
//     scanf("%d",&n);

//     int star =n;
//     int space = 0;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=space;j++){
//             printf(" ");
//         }
//         for(int k=star;k>=1;k--){
//             printf("*");
//         }
//         printf("\n");
//         space++;
//         star--;
//     }
// }

#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int star = n*2-1;
    int space = 0;
    for(int i=1;i<=n;i++) //for printing line
    {
        for(int j=1;j<=space;j++)//for printing space
        {
           printf(" ");
        }

        // for(int j=0;j<=space;j++)//for printing space
        // {
        //    printf(" ");
        // }
        // for (int k=1;k<=star;k++) //for printing star
        // {
        //     printf("*");
        // }
        for (int k=star;k>=1;k--) //for printing star
        {
            printf("*");
        }
        printf("\n"); 
        star-=2;
        space++;
    }
    return 0;
}