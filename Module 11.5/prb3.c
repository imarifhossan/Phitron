#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++)
    {
        char s[10001];
        scanf("%s", &s);
        int len = strlen(s);
        int digit_count = 0, alphabets_count = 0, small_alphabets_count = 0;
        for (int i = 0; i < len; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                alphabets_count++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                small_alphabets_count++;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                digit_count++;
            }
        }
        printf("%d %d %d\n", alphabets_count, small_alphabets_count, digit_count);
    }

    return 0;
}
