#include <stdio.h>
long long int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    long long int val = fact(n - 1);
    return val * n;
}
int main()
{
    int n;
    scanf("%d", &n);
    if (n == 0)
    {
        printf("1");
    }
    else
    {
        long long int answer = fact(n);
        printf("%lld", answer);
    }
    return 0;
}