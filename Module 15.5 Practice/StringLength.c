#include <stdio.h>
int my_len(char a[]){
    int count = 0;
    for (int i=0;a[i]!='\0';i++){
        count++;
    }
    return count;
}
int main  (){
    char s[11];
    scanf("%s",s);
    int length = my_len(s);
    printf("%d",length);
    return 0;
}