#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int min=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i]<min)
        {
            min=a[i];
        }
        
    }
   printf("Minimum value of this array = %d", min);

    return 0;
}