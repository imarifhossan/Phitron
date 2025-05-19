// #include <stdio.h>
// #include <stdbool.h>
// int main()
// {
//     int r, c;
//     scanf("%d %d", &r, &c);
//     int a[r][c];
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     bool is_diagonal = true;

//     if (r == c)
//     {

//         for (int i = 0; i < r; i++)
//         {
//             for (int j = 0; j < c; j++)
//             {
//                 if (i +j !=r-1)
                
                
//                 {
//                     //we are now at outside of secondary diagonal 
//                     if (a[i][j] != 0)
//                     {
//                         is_diagonal=false;
//                         printf("This is not a secondary diagonal matrix");
//                     }
//                 }
//             }
//         }
//         if(is_diagonal==true){
//             printf("This is a secondary diagonal matrix");
//         }
//     }
//     else
//     {
//         printf("Its not a secondary diagonal matrix");
//     }

//     return 0;
// }




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
    // bool is_diagonal = true;
    bool is_scaler = true;
    int temp = a[0][0];
    if (r == c)
    {

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
               
            }
        }
        

         if(is_scaler==true){
                printf("This is a scaler matrix");
            }
        else
    {
        printf("Its not a scaler matrix line 105");
    }
    }
    

    return 0;
}

// Example of primary diagonal matrix
/*
3 3
5 0 0
0 5 0
0 0 5
*/
