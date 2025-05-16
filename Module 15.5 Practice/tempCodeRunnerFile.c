#include <stdio.h>

int main (){
    char s[100001];
    scanf("%s", s);
    int len = strlen(s);
    int count = 0;
    for(int i=0;i<len;i++){
        if(s[i]>='0'  && s[i]<='9'){
            count++;
        }
    }
    printf(count);
}