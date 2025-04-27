#include <stdio.h>
#include <string.h>
int main(){
    char x[10000001];
    scanf("%s", &x);
    int length = strlen(x);
    // printf("%d",length);
    int fre[27]={0};
    
    for(int i=0;i<length;i++){
        int value= x[i]-'a';
        fre[value]++;
    }

    for(int i=0;i<26;i++){
        if(fre[i]>0){
            printf("%c : %d\n",'a'+i, fre[i]);
        }
    }
    return 0;
}