#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++)
    {
        char s[51], t[51];
        scanf("%s %s", &s, &t);
        int length1 = strlen(s);
        int length2 = strlen(t);
        int i = 0, j = 0;
        while (i < length1 && j < length2)
        {
            printf("%c%c", s[i], t[i]);
            i++;
            j++;
        }
        
        while (i < length1)
        {
            printf("%c", s[i]);
            i++;
        }
        while (j < length2)
        {
            printf("%c", t[j]);
            j++;
        }
        printf("\n");
    }
    return 0;
}