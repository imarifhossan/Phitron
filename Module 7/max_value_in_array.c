/*Take an array from input and print all the even numbers of that array.*/
#include <stdio.h>
int main()
{
    // int n;
    // scanf("%d", &n);
    // int a[n];
    int a[] = { 2 ,300, 4, 44, 6 };
    int n = sizeof(a) / sizeof(a[0]);
    int max= a[0];
   /* for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }*/
    for (int i = 0; i < n; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
        
    }
   printf("Maximum value of this array = %d", max);

    return 0;
}




/*
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int max=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (max<a[i])
        {
            max=a[i];
        }
        
    }
   printf("Maximum value of this array = %d", max);

    return 0;
}
*/