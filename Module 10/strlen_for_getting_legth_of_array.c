#include <stdio.h>
// include it if stlen() don't work properly
#include <string.h>
int main (){
    char s[101];
    scanf("%s",s);
    // Null value = '\0
    // int count=0;
    // for (int i=0;s[i]!='\0';i++){
    //     count++;
    // }
    int size= strlen(s);
    printf("%d",size);
    return 0;
}