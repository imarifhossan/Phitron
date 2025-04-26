#include <stdio.h>
int main()
{
    char s[11];
    char t[11];

    scanf("%s", &s);
    scanf("%s", &t);

    int length1 = strlen(s);
    int length2 = strlen(t);

    printf("%d %d\n", length1, length2);
    printf("%s%s\n", s, t);

    char temp1=s[0];
    char temp2=t[0];
    
    s[0]=temp2;
    t[0]=temp1;


    printf("%s %s\n", s, t);
    return 0;
}