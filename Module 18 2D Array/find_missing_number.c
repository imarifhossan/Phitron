#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++)
    {
        long long int m;
        scanf("%lld", &m);
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        long long int multiplication = a * b * c;
        if (m % multiplication == 0)
        {
            printf("%lld", m / multiplication);
        }
        else
        {
            printf("-1");
        }
        printf("\n");
    }
}