#include <stdio.h>
int main (){
    char f[101], s[101];
    fgets(f,101,stdin);
    fgets(s,101,stdin);
    printf("%s\n%s",f[4],s);
}