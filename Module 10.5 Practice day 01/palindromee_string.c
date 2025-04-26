#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    scanf("%s", &s);

    int palindrome = 1;
    for(int i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
        {
            palindrome = 0;
        }
    }
    if (palindrome == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}