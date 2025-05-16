#include <stdio.h>
#include <string.h>

void DigitCount (char a[]){
    int len = strlen(a);
    int count = 0;
    for(int i=0;i<len;i++){
        if(a[i]>='0'  && a[i]<='9'){
            count++;
        }
    }
    printf("%d",count);
}
int main (){
    char s[100001];
    scanf("%s", s);
    DigitCount(s);
}