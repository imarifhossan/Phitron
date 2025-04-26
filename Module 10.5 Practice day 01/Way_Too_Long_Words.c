#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++)
    {
        char s[101];
        scanf("%s", &s);
        int length = strlen(s);
        if (length > 10)
        {
            int remaining = length - 2;
            printf("%c%d%c\n", s[0], remaining, s[length - 1]);
        }
        else
        {
            printf("%s\n", s);
        }
    }
    return 0;
}