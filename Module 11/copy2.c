#include <stdio.h>

int main()
{
    char s[101],t[101];
    scanf("%s %s",&s,&t);
    int length= strlen(t);
    for(int i=0;i<=length;i++){
        s[i]=t[i];
    }
    printf("%s %s", s, t);
    return 0;
}