#include <stdio.h>
int main()
{
    int n;
    printf("Please enter the array size = ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    if (n == 0)
    {
        printf("Fussss, Please try again");
    }
    else
   /*
    {
        printf("You Declared %d sizes of array,This is your %d elements of this array\n", n, n);
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
   */
//   reverse array print
  {
    printf("You Declared %d sizes of array,This is your reverse array\n", n);
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}

    return 0;
}

/*
Output 1:
Please enter the array size = 2
10 20
You Declared 2 sizes of array,This is your 2 elements of this array
10 20
*/


/*
Output 2: Reverse array
Please enter array size = 2
10 20
You Declared 2 sizes of array,This is your reverse array
20 10
*/
