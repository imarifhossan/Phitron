#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int low = a[0], index = 0, count = 0, i = 0;
    // for(int i=0;i<n;i++){

    //     if(a[i]<low){
    //         low=a[i];
    //         index+=i;
    //     }
    // }

    while (i < n)
    {
        if (a[i] < low)
        {
            low = a[i];
            index = i;
            count++;
        }
        i++;
    }
    printf("%d %d", low, index+1);
    return 0;
}