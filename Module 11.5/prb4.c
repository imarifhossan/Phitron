#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char s[10001];
    scanf("%s",&s);
    int len= strlen(s);
    int fre[26]={0};
    for (int i=0;i<len;i++){
        int value = s[i]-'a';
        fre[value]++;
    } 
    for(int i=0;i<=26;i++){
        if(fre[i]>0){
            printf("%c - %d\n", 'a'+i,fre[i]);
        }
    }
    return 0;
}
