#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 1; i <=n; i++)
    {
        scanf("%d", &a[i]);
    }
    int x;
    scanf("%d", &x);
    int value = a[x];
    if (value == 0)
    {
        a[x] = 1;
    }
    else
    {
        a[x] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}